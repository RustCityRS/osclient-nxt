// libs/game/runetek5/scene/entities/PathingEntity.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "PathingEntity.h"

namespace jag {
    // 0x100f38528, 8 bytes, __data
    PathingEntity::TITLE_TAG = "<name>";

    // 0x1039b4cba, 6 bytes, __common; zero-initialised
    PathingEntity::m_showHillRotateCorners;

    // 0x1039b4d50, 8 bytes, __common; zero-initialised
    PathingEntity::NullSpotAnimation;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    PathingEntity::OnModelChange();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    PathingEntity::UpdateHighlighting(unsigned int);

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    PathingEntity::HideChatLine();

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    PathingEntity::IsInPlayersClan() const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    PathingEntity::IsMiniMapHidden() const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    PathingEntity::GetWalkSmoothing() const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    PathingEntity::IsInPlayersGroup() const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    PathingEntity::IsFullySoftHidden() const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    PathingEntity::RepeatLastOverrideAnimationFrameWhenFinished(int) const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    PathingEntity::IsPlayer() const;

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    PathingEntity::ShouldAnimate() const;

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    PathingEntity::LineIntersectionSupport() const;

    // 0x100120420: the linker folded this into oldscape::javapal::GameShell::GetVisibleAppHeight(), which has identical code
    PathingEntity::CalculateWorldPriority(unsigned int, PathingEntityPriorityData) const;

    // 0x1003eff50, 1584 bytes, base-object constructor, placed by class name and debug map
    // PathingEntity::PathingEntity(PathingEntityParams const&, graphics::GraphNode*, shared_ptr<game::World> const&, game::EntityType, int)
    void PathingEntity::PathingEntity(undefined8* param_1, undefined8 param_2, undefined8 param_3, undefined4 param_5,
                                      undefined4 param_6) {
        EntityRoute* pEVar1;
        _func_decltype_nullptr* p_Var2;
        undefined1 local_128[24];
        PathingEntity* local_110;
        undefined1* local_108;
        undefined1* local_100;
        undefined1* local_f8;
        undefined1* local_f0;
        undefined1* local_e8;
        undefined1* local_e0;
        undefined1* local_d8;
        undefined1* local_d0;
        undefined1* local_c8;
        undefined1* local_c0;
        undefined1* local_b8;
        undefined1* local_b0;
        undefined1* local_a8;
        undefined1* local_a0;
        undefined1* local_98;
        undefined1* local_90;
        unique_ptr<EntityRoute, std::default_delete<EntityRoute>>* local_88;
        FacingController* local_80;
        undefined1 local_78[64];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (this) game::Entity(param_2, param_3, param_5, param_6);
        new (&field_192) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        field_0 = &PTR__PathingEntity_100efea68;
        field_8 = &PTR__PathingEntity_100efec98;
        field_208 = (_func_decltype_nullptr*)param_1[3];
        field_216 = (AssetBuilder*)*param_1;
        field_224 = (ConfigProvider*)param_1[1];
        field_232 = (SceneManager*)param_1[2];
        m_slotID = *(undefined4*)(param_1 + 4);
        local_108 = &field_192;
        new (&field_248) eastl::fixed_string<char, 64, true, eastl::allocator>();
        local_100 = &field_248;
        new (&field_352) eastl::string();
        local_f8 = &field_352;
        new (&field_384) eastl::string();
        field_416 = 0;
        local_e8 = field_424;
        local_f0 = &field_384;
        new (local_e8) game::EntityVarDomain(this);
        field_504 = 0;
        *(undefined8*)&m_gridSize = 1288490188801;
        field_524 = 0;
        new (&field_528, 0.0, 0.0, 0.0, 0.0) ImVec4();
        field_544 = 0;
        field_548 = 0;
        local_80 = (FacingController*)field_552;
        FacingController::FacingController(local_80);
        std::make_unique<EntitySmoothRoute>();
        local_88 = (unique_ptr<EntityRoute, std::default_delete<EntityRoute>>*)(field_552 + 160);
        std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::unique_ptr<
            EntitySmoothRoute, std::default_delete<EntitySmoothRoute>, void, void>(local_88, (unique_ptr*)local_78);
        local_78->~unique_ptr();
        new (&field_720) math::Vector3T<int>();
        new (&field_736) math::Transitionable<math::Vector3T<double>>();
        field_800 = 0;
        local_e0 = &field_808;
        new (local_e0) eastl::fixed_vector<int, 4ul, true, eastl::allocator>();
        local_d8 = field_864;
        p_Var2 = field_208;
        new (local_d8) PathingEntityAnimatedModel(p_Var2, field_216, field_224, 0, 0, &field_128, this);
        field_3232 = 0;
        local_d0 = &field_3240;
        new (local_d0) PathingEntityModels();
        local_c8 = &field_3288;
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
        *(undefined8*)&field_3540 = 18446744069414584320;
        local_c0 = &field_3552;
        new (local_c0) eastl::fixed_vector<HardCodedSprites::SpriteReference, 8ul, true, eastl::allocator>();
        local_b8 = &field_3784;
        std::unique_ptr<HitmarksAndHeadbars, std::default_delete<HitmarksAndHeadbars>>::unique_ptr<true, void>(
            (unique_ptr<HitmarksAndHeadbars, std::default_delete<HitmarksAndHeadbars>>*)local_b8);
        local_b0 = &field_3792;
        new (local_b0) EntityChatLine();
        m_basID = -1;
        local_a8 = field_3856;
        new (local_a8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var2);
        field_3872 = -1;
        local_a0 = field_3880;
        new (local_a0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var2);
        local_98 = field_3896;
        new (local_98) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var2);
        local_90 = field_3912;
        new (local_90) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var2);
        new (field_3928) graphics::VariableList();
        new (&field_4088) eastl::vector_map<
            int, std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>, eastl::less<int>,
            eastl::allocator,
            eastl::vector<
                eastl::pair<int, std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>>,
                eastl::allocator>>();
        new (&field_4128) eastl::vector_map<int, PendingSpotAnimation, eastl::less<int>, eastl::allocator,
                                            eastl::vector<eastl::pair<int, PendingSpotAnimation>, eastl::allocator>>();
        field_4168 = 1;
        field_4169 = 0;
        field_4170 = 1;
        field_4171 = 0;
        if ((((field_208 == (_func_decltype_nullptr*)0) || (field_216 == (AssetBuilder*)0)) ||
             (field_224 == (ConfigProvider*)0)) ||
            (field_232 == (SceneManager*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_rt7Core && m_assetBuilder && m_configProvider && m_sceneManager",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/PathingEntity.cpp",
                      85, (char*)0);
        }
        SetNDCProjectionTestEnabled(false);
        pEVar1 = (EntityRoute*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(local_88);
        local_78._0_8_ = PTR_DecrementAnimationRoutePending_100ee5988;
        local_78._8_4_ = 0.0;
        local_78._12_4_ = 0.0;
        local_110 = this;
        std::bind<void (PathingEntity::*)(), PathingEntity*>((_func_void*)local_128, (PathingEntity**)local_78);
        std::function<void()>::function<std::__bind<void (PathingEntity::*)(), PathingEntity*>, void>(local_78 + 16);
        pEVar1->SetWaypointReachedCallback();
        std::function<void()>::~function((function<void()>*)(local_78 + 16));
        new (local_78) game::CoordFine(0, 0.0, 0.0, 0.0);
        AddRouteWaypointFine(this, (CoordFine*)local_78, (MoveSpeed*)MoveSpeed::STATIONARY, false);
        local_80->SetBaseTurnSpeed(256);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003f0710, 288 bytes, placed by class name
    // PathingEntity::AddRouteWaypointFine(game::CoordFine const&, MoveSpeed const*, bool)
    void PathingEntity::AddRouteWaypointFine(CoordFine* param_1, MoveSpeed* param_2, bool param_3) {
        bool bVar1;
        char cVar2;
        long* plVar3;
        compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator>*
            this_00;
        compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator>*
            pcVar4;
        unique_ptr* this_01;
        SpotAnimation* this_02;
        undefined7 in_register_00000009;
        CoordFine local_48;
        undefined4 local_34;

        local_34 = (undefined4)CONCAT71(in_register_00000009, param_3);
        if (*(int*)(MoveSpeed::RUN + 8) < *(int*)(param_2 + 8)) {
            /* WARNING: Subroutine does not return */
            LogAssert("moveSpeed->id <= MoveSpeed::RUN->id",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/PathingEntity.cpp",
                      151, (char*)0);
        }
        new (&local_48) game::CoordFine();
        GetPositionFine(this, &local_48);
        plVar3 = (long*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(
            (unique_ptr<EntityRoute, std::default_delete<EntityRoute>>*)(field_552 + 160));
        (**(code**)(*plVar3 + 16))(plVar3, &local_48, param_1, param_2);
        this_00 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                   eastl::allocator>*)(&field_4088)
                      ->HeapBeginPtr();
        pcVar4 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                  eastl::allocator>*)(&field_4088)
                     ->end();
        for (; this_00 != pcVar4; this_00 = this_00 + 16) {
            eastl::compressed_pair<eastl::string*, eastl::allocator>::first();
            this_01 = (unique_ptr*)
                eastl::compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator>::second(this_00);
            bVar1 = std::unique_ptr::operator_cast_to_bool(this_01);
            if (bVar1) {
                this_02 =
                    (SpotAnimation*)std::
                        unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>::operator->(
                            (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)this_01);
                cVar2 = this_02->AbortOnMove();
                if (cVar2 != '\0') {
                    this_01->reset(0);
                }
            }
        }
        if (((char)local_34 == '\0') || (field_64 == 1)) {
            AbortAnimationsOnMove(this);
        }
    }

    // 0x1003f08d0, 304 bytes, base-object destructor, placed by class name
    // PathingEntity::~PathingEntity()
    void PathingEntity::~PathingEntity() {
        field_0 = &PTR__PathingEntity_100efea68;
        field_8 = &PTR__PathingEntity_100efec98;
        (&field_4128)->~vector_map();
        (&field_4088)->~vector_map();
        field_3928->~VariableList();
        field_3912->~shared_ptr();
        field_3896->~shared_ptr();
        field_3880->~shared_ptr();
        field_3856->~shared_ptr();
        (&field_3792)->~__alt();
        (&field_3784)->~unique_ptr();
        (&field_3552)->~fixed_vector();
        (&field_3288)->~PathingEntityModels();
        (&field_3240)->~PathingEntityModels();
        field_864->~LocationAnimatedModel();
        (&field_808)->~fixed_vector();
        ((field_552 + 160))->~unique_ptr();
        field_552->~FacingController();
        field_424->~EntityVarDomain();
        (&field_384)->~basic_string();
        (&field_352)->~basic_string();
        /* WARNING: Subroutine does not return */
        (&field_248)->~fixed_string();
    }

    // 0x1003f0a00, 16 bytes, complete-object destructor, placed by class name
    // PathingEntity::~PathingEntity(): jumps straight to the base-object destructor

    // 0x1003f0a20, 16 bytes, deleting destructor, placed by class name
    // PathingEntity::~PathingEntity()
    void PathingEntity::~PathingEntity() {
        code* pcVar1;

        /* WARNING: Does not return */
        pcVar1 = (code*)invalidInstructionException();
        (*pcVar1)();
    }

    // 0x1003f0a40, 32 bytes, placed by class name
    // PathingEntity::SetPathingEntityChatLine(eastl::basic_string<char, BucketAllocatorEASTL> const&, EntityChatLine::ChatColour, EntityChatLine::ChatEffect, unsigned long long)
    void PathingEntity::SetPathingEntityChatLine(long param_1) {
        ((param_1 + 3792))->Init();
    }

    // 0x1003f0a60, 64 bytes, placed by class name
    // PathingEntity::GetChatLine()
    undefined1* PathingEntity::GetChatLine() {
        char cVar1;
        undefined1* puVar2;

        cVar1 = (*(code*)field_0[44])();
        if (cVar1 == '\0') {
            cVar1 = (&field_3792)->IsInit();
            puVar2 = (undefined1*)0;
            if (cVar1 != '\0') {
                puVar2 = &field_3792;
            }
        } else {
            puVar2 = (undefined1*)0;
        }
        return puVar2;
    }

    // 0x1003f0aa0, 416 bytes, placed by class name
    // PathingEntity::GetDisplayNameWithExtras(bool)
    PathingEntity* PathingEntity::GetDisplayNameWithExtras(bool param_1) {
        ulong uVar1;
        bool bVar2;
        long lVar3;
        ulong* puVar4;
        char* pcVar5;
        size_t sVar6;
        int in_EDX;
        char* extraout_RDX;
        undefined7 in_register_00000031;
        undefined1 auVar7[16];
        basic_string<char, BucketAllocatorEASTL> local_68[24];
        size_t local_50;
        eastl local_48[24];
        ulong local_30;

        if (in_EDX == 0) {
            auVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        } else {
            auVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        }
        eastl::destruct<oldscape::highlight::NpcUID*>(local_48, (NpcUID*)"EASTL basic_string", auVar7._8_8_);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_68, auVar7._0_8_);
        bVar2 =
            eastl::operator==((eastl*)(CONCAT71(in_register_00000031, param_1) + 384), (basic_string*)"", extraout_RDX);
        if (!bVar2) {
            lVar3 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (lVar3 != 1) {
                eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
                lVar3 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                local_30 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                local_50 = _strlen(TITLE_TAG);
                puVar4 = std::max<unsigned long>(&local_30, &local_50);
                local_48->reserve(lVar3 + *puVar4);
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_48->append(pcVar5);
                sVar6 = _strlen(TITLE_TAG);
                uVar1 = *(ulong*)(CONCAT71(in_register_00000031, param_1) + 416);
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_48->replace(uVar1, sVar6, pcVar5);
                auVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)&local_30, (NpcUID*)"EASTL basic_string",
                                                              auVar7._8_8_);
                eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)this, auVar7._0_8_);
                local_48->~basic_string();
                goto LAB_1003f0bf6;
            }
        }
        new (this) eastl::basic_string<char, BucketAllocatorEASTL>();
    LAB_1003f0bf6:
        eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_68);
        return this;
    }

    // 0x1003f0ce0, 176 bytes, placed by class name
    // PathingEntity::SetTitle(int, game::PlayerGender)
    void PathingEntity::SetTitle(int param_1, undefined4 param_3) {
        int iVar1;
        CustomizationDefaults* pCVar2;
        shared_ptr* this_00;
        EnumType* this_01;
        VarValue* this_02;
        char* pcVar3;
        undefined8 uVar4;

        if (param_1 == -1) {
            (&field_384, "")->assign();
            uVar4 = 0;
        } else {
            pCVar2 = (CustomizationDefaults*)field_224->GetCustomizationDefaults();
            iVar1 = pCVar2->GetTitleEnum(param_3);
            this_00 = game::ConfigProvider::GetConfig<game::EnumType>(field_224, iVar1, (DataStatus**)0);
            this_01 = (EnumType*)shared_ptr<game::EnumType>::operator->((shared_ptr<game::EnumType>*)this_00);
            this_02 = (VarValue*)this_01->GetOutputString(param_1);
            this_02->GetString();
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            (&field_384, pcVar3)->assign();
            uVar4 = (&field_384, TITLE_TAG, 0)->find();
        }
        field_416 = uVar4;
    }

    // 0x1003f0ef0, 64 bytes, placed by class name
    // PathingEntity::GetPositionFine(game::CoordFine&) const
    void PathingEntity::GetPositionFine(CoordFine* param_1) {
        Vector3T* pVVar2;

        param_1->field_0 = GetDuration();
        pVVar2 = (Vector3T*)(*(code*)field_0[13])(this);
        (&param_1->field_4, pVVar2)->SetXYZ();
    }

    // 0x1003f1000, 48 bytes, placed by class name
    // PathingEntity::AbortAnimationsOnMove()
    void PathingEntity::AbortAnimationsOnMove() {
        char cVar1;

        cVar1 = field_864->AbortAnimationsOnMove();
        if (cVar1 != '\0') {
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        }
    }

    // 0x1003f1030, 464 bytes, placed by class name
    // PathingEntity::SetExactMove(int, int, int, int, int, int, int, int, float, unsigned int)
    void PathingEntity::SetExactMove(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                     int param_7, int param_8, float param_9, uint param_10) {
        Vector4T<float>* this_00;
        unique_ptr<EntityRoute, std::default_delete<EntityRoute>>* this_01;
        float fVar1;
        float fVar2;
        int iVar3;
        EntityRoute* pEVar4;
        long* plVar5;
        Vector2T<int>* this_02;
        Vector3T* pVVar6;
        vector* pvVar7;
        float* pfVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        undefined1 local_60[28];
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        field_3532 = param_7 + param_10;
        field_3536 = param_10 + param_8;
        field_3540 = param_9;
        local_40 = param_4;
        local_3c = param_3;
        local_38 = param_5;
        local_34 = param_2;
        new ((local_60 + 16)) math::Vector3T<int>();
        this_01 = (unique_ptr<EntityRoute, std::default_delete<EntityRoute>>*)(field_552 + 160);
        pEVar4 = (EntityRoute*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(this_01);
        iVar3 = pEVar4->Length();
        if (iVar3 == 0) {
            pVVar6 = (Vector3T*)GetTranslation();
        } else {
            plVar5 = (long*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(this_01);
            (**(code**)(*plVar5 + 32))(plVar5);
            pEVar4 = (EntityRoute*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(this_01);
            this_02 = (Vector2T<int>*)pEVar4->GetLastWaypoint();
            pVVar6 = (Vector3T*)this_02->y();
        }
        this_00 = (Vector4T<float>*)(local_60 + 16);
        math::Vector4T<float>::SetXYZ(this_00, pVVar6);
        local_40 = local_40 << 7;
        local_3c = local_3c << 7;
        iVar10 = local_34 * 128;
        iVar3 = param_1 * 128;
        local_38 = local_38 + field_68;
        local_34 = param_6 + field_68;
        pvVar7 = this_00->SSOBeginPtr(pVVar6);
        fVar1 = *(float*)pvVar7;
        pfVar8 = (float*)this_00->second();
        fVar2 = *pfVar8;
        pvVar7 = this_00->SSOBeginPtr(pVVar6);
        iVar11 = (int)*(float*)pvVar7 + local_3c;
        pfVar8 = (float*)this_00->second();
        iVar9 = (int)*pfVar8 + local_40;
        new (local_60) game::CoordFine(local_38, (float)((int)fVar1 + iVar3), (float)((int)fVar2 + iVar10));
        game::CoordFine::operator=((CoordFine*)&field_3500, (CoordFine*)local_60);
        new (local_60) game::CoordFine(local_34, (float)iVar11, (float)iVar9);
        game::CoordFine::operator=((CoordFine*)&field_3516, (CoordFine*)local_60);
        iVar3 = GetHeightForLevel(this, field_3500, (Vector3T*)&field_3504);
        field_3508 = (float)iVar3;
        iVar3 = GetHeightForLevel(this, field_3516, (Vector3T*)&field_3520);
        field_3524 = (float)iVar3;
        field_800 = 0;
    }

    // 0x1003f1200, 208 bytes, placed by class name
    // PathingEntity::GetHeightForLevel(int, math::Vector3T<float>&)
    int PathingEntity::GetHeightForLevel(int param_1, Vector3T* param_2) {
        float fVar1;
        byte bVar2;
        int iVar3;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        World* this_01;
        LinkMap* this_02;
        HeightMap* pHVar4;
        vector* pvVar5;
        float* pfVar6;
        CoordGrid* this_03;
        undefined1 local_50[32];

        this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)GetWorld();
        this_01 = (World*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        if (this_01 == (World*)0) {
            iVar3 = 0;
        } else {
            this_03 = (CoordGrid*)(ulong)(uint)param_1;
            new (local_50) game::CoordFine(param_1, param_2);
            if (param_1 < 3) {
                this_02 = (LinkMap*)this_01->GetLinkMap();
                this_03 = (CoordGrid*)(local_50 + 16);
                game::CoordGrid::CoordGrid(this_03, (CoordFine*)local_50);
                bVar2 = this_02->IsLinkBelow(this_03);
                param_1 = param_1 + (uint)bVar2;
            }
            pHVar4 = (HeightMap*)this_01->GetHeightMap();
            pvVar5 = param_2->SSOBeginPtr(this_03);
            fVar1 = *(float*)pvVar5;
            pfVar6 = (float*)param_2->second();
            pHVar4->GetFineHeight(local_50 + 16, param_1, (int)fVar1, (int)*pfVar6, 1, 1);
            iVar3 = local_50._16_4_ + 5;
        }
        return iVar3;
    }

    // 0x1003f12d0, 96 bytes, placed by class name
    // PathingEntity::SetBasID(int)
    void PathingEntity::SetBasID(int param_1) {
        GameToken* this_00;

        if (field_3856->operator_cast_to_bool()) {
            this_00 = (GameToken*)shared_ptr<game::BASType>::operator->((shared_ptr<game::BASType>*)field_3856);
            if (this_00->GetStatus() == param_1) {
                return;
            }
        }
        m_basID = param_1;
        shared_ptr<game::BASType>::reset();
    }

    // 0x1003f1330, 208 bytes, placed by class name
    // PathingEntity::ClearAppearance()
    void PathingEntity::ClearAppearance() {
        undefined1* this_00;
        bool bVar1;
        int iVar2;
        shared_ptr* psVar3;

        (&field_3240)->Clear();
        (&field_3288)->Clear();
        shared_ptr<game::BASType>::reset();
        this_00 = field_864;
        psVar3 = (shared_ptr*)this_00->GetOverrideAnimation();
        bVar1 = shared_ptr::operator_cast_to_bool(psVar3);
        if (bVar1) {
            field_4169 = 1;
        }
        psVar3 = (shared_ptr*)this_00->GetCurrentModel();
        bVar1 = shared_ptr::operator_cast_to_bool(psVar3);
        if (!bVar1) {
            this_00->UnSync();
        }
        field_4168 = 1;
        (&field_3552)->clear();
        (*(code*)field_8[3])(&field_8);
        iVar2 = this_00->GetDefaultAnimationSeqID();
        if (iVar2 != -1) {
            iVar2 = this_00->GetDefaultAnimationSeqID();
            bVar1 = (bool)this_00->IsDefaultAnimationReadyAnim();
            this_00->RequestDefaultAnimation(iVar2, bVar1, true);
        }
    }

    // 0x1003f1480, 144 bytes, placed by class name
    // PathingEntity::SetSpotAnimation(std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>&&, int)
    /* PathingEntity::SetSpotAnimation(std::unique_ptr<SpotAnimation,
   MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>&&, int) */

    void PathingEntity::SetSpotAnimation(unique_ptr* param_1, int param_2) {
        PendingSpotAnimation* this_00;
        PendingSpotAnimation local_40;
        unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter> local_28[12];
        int local_1c;

        local_1c = param_2;
        std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>::unique_ptr(local_28,
                                                                                                         param_1);
        new (&local_40) PendingSpotAnimation(local_28);
        this_00 = (PendingSpotAnimation*)
            eastl::vector_map<int, PendingSpotAnimation, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, PendingSpotAnimation>, eastl::allocator>>::
            operator[](
                (vector_map<int, PendingSpotAnimation, eastl::less<int>, eastl::allocator,
                            eastl::vector<eastl::pair<int, PendingSpotAnimation>, eastl::allocator>>*)&field_4128,
                &local_1c);
        PendingSpotAnimation::operator=(this_00, &local_40);
        local_40.~PendingSpotAnimation();
        std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>::~unique_ptr(local_28);
    }

    // 0x1003f1630, 128 bytes, placed by class name
    // PathingEntity::ResetSpotAnimation(int, int)
    void PathingEntity::ResetSpotAnimation(int param_1, int param_2) {
        PendingSpotAnimation* this_00;
        unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>* this_01;
        PendingSpotAnimation local_30;
        int local_14;

        local_14 = param_1;
        if (param_2 == 0) {
            this_01 =
                (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)eastl::vector_map<
                    int, std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>,
                    eastl::less<int>, eastl::allocator,
                    eastl::vector<
                        eastl::pair<
                            int, std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>>,
                        eastl::allocator>>::
                operator[](
                    (vector_map<
                        int, std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>,
                        eastl::less<int>, eastl::allocator,
                        eastl::vector<
                            eastl::pair<int, std::unique_ptr<SpotAnimation,
                                                             MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>>,
                            eastl::allocator>>*)&field_4088,
                    &local_14);
            std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>::reset(
                this_01, (SpotAnimation*)0);
        } else {
            new (&local_30) PendingSpotAnimation(param_2);
            this_00 = (PendingSpotAnimation*)
                eastl::vector_map<int, PendingSpotAnimation, eastl::less<int>, eastl::allocator,
                                  eastl::vector<eastl::pair<int, PendingSpotAnimation>, eastl::allocator>>::
                operator[](
                    (vector_map<int, PendingSpotAnimation, eastl::less<int>, eastl::allocator,
                                eastl::vector<eastl::pair<int, PendingSpotAnimation>, eastl::allocator>>*)&field_4128,
                    &local_14);
            PendingSpotAnimation::operator=(this_00, &local_30);
            local_30.~PendingSpotAnimation();
        }
    }

    // 0x1003f1780, 48 bytes, placed by class name
    // PathingEntity::GetSpotAnimation(int)
    void PathingEntity::GetSpotAnimation(int param_1) {
        int local_c;

        local_c = param_1;
        eastl::vector_map<
            int, std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>, eastl::less<int>,
            eastl::allocator,
            eastl::vector<
                eastl::pair<int, std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>>,
                eastl::allocator>>::
        operator[](
            (vector_map<
                int, std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>,
                eastl::less<int>, eastl::allocator,
                eastl::vector<eastl::pair<int, std::unique_ptr<SpotAnimation,
                                                               MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>>,
                              eastl::allocator>>*)&field_4088,
            &local_c);
    }

    // 0x1003f17b0, 688 bytes, placed by class name
    // PathingEntity::UpdateSpotAnimations(unsigned int)
    void PathingEntity::UpdateSpotAnimations(uint param_1) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        uint uVar3;
        int iVar4;
        GraphicsApp* this_01;
        compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator>*
            pcVar5;
        compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator>*
            pcVar6;
        unique_ptr* puVar7;
        SpotAnimation* pSVar8;
        undefined1* this_02;
        int* piVar9;
        unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>* puVar10;
        GraphNode* this_03;
        GraphNode* this_04;
        shared_ptr* psVar11;
        CommandLine* this_05;

        this_01 = (GraphicsApp*)Instance();
        uVar3 = this_01->GetFrameCount();
        this_00 = &field_4128;
        pcVar5 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                  eastl::allocator>*)this_00->HeapBeginPtr();
        pcVar6 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                  eastl::allocator>*)this_00->end();
        for (; pcVar5 != pcVar6; pcVar5 = pcVar5 + 32) {
            eastl::compressed_pair<eastl::string*, eastl::allocator>::first();
            puVar7 = (unique_ptr*)
                eastl::compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator>::second(pcVar5);
            bVar1 = std::unique_ptr::operator_cast_to_bool(puVar7);
            if (bVar1) {
                pSVar8 = (SpotAnimation*)
                    std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>::operator*(
                        (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)puVar7);
                pSVar8->Build(param_1);
            }
        }
        pcVar5 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                  eastl::allocator>*)this_00->HeapBeginPtr();
        pcVar6 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                  eastl::allocator>*)this_00->end();
        this_02 = &field_4088;
        do {
            if (pcVar5 == pcVar6) {
                pcVar5 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                          eastl::allocator>*)this_02->HeapBeginPtr();
                pcVar6 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                          eastl::allocator>*)this_02->end();
                for (; pcVar5 != pcVar6; pcVar5 = pcVar5 + 16) {
                    eastl::compressed_pair<eastl::string*, eastl::allocator>::first();
                    puVar10 = (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)
                        eastl::compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator>::second(pcVar5);
                    bVar1 = puVar10->operator_cast_to_bool();
                    if (bVar1) {
                        pSVar8 = (SpotAnimation*)std::unique_ptr<
                            SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>::operator*(puVar10);
                        pSVar8->Build(param_1);
                        if (m_worldPriority == -1) {
                            bVar1 = true;
                        } else {
                            bVar1 = m_hiddenByOtherEntity != '\0';
                        }
                        pSVar8->SetHidden(bVar1);
                        cVar2 = pSVar8->IsFinished();
                        if (cVar2 == '\0') {
                            this_03 = (GraphNode*)pSVar8->GetNode();
                            cVar2 = this_03->IsAttached();
                            if (cVar2 == '\0') {
                                this_04 = (GraphNode*)GetNode();
                                this_04->AddChild(this_03);
                                psVar11 = (shared_ptr*)GetWorld();
                                pSVar8->SetWorld(psVar11);
                            }
                        } else {
                            std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>::reset(
                                puVar10, (SpotAnimation*)0);
                        }
                    }
                }
                return;
            }
            piVar9 = (int*)eastl::compressed_pair<eastl::string*, eastl::allocator>::first();
            puVar7 = (unique_ptr*)
                eastl::compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator>::second(pcVar5);
            bVar1 = std::unique_ptr::operator_cast_to_bool(puVar7);
            if (bVar1) {
                pSVar8 =
                    (SpotAnimation*)std::
                        unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>::operator->(
                            (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)puVar7);
                cVar2 = pSVar8->IsReady();
                if (cVar2 == '\0')
                    goto LAB_1003f1909;
                puVar7 = (unique_ptr*)
                    eastl::vector_map<int, PendingSpotAnimation, eastl::less<int>, eastl::allocator,
                                      eastl::vector<eastl::pair<int, PendingSpotAnimation>, eastl::allocator>>::
                    operator[](
                        (vector_map<int, PendingSpotAnimation, eastl::less<int>, eastl::allocator,
                                    eastl::vector<eastl::pair<int, PendingSpotAnimation>, eastl::allocator>>*)this_00,
                        piVar9);
                puVar10 =
                    (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)eastl::vector_map<
                        int, std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>,
                        eastl::less<int>, eastl::allocator,
                        eastl::vector<
                            eastl::pair<int, std::unique_ptr<SpotAnimation,
                                                             MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>>,
                            eastl::allocator>>::
                    operator[](
                        (vector_map<
                            int, std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>,
                            eastl::less<int>, eastl::allocator,
                            eastl::vector<
                                eastl::pair<int, std::unique_ptr<SpotAnimation,
                                                                 MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>>,
                                eastl::allocator>>*)this_02,
                        piVar9);
                std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>::operator=(puVar10,
                                                                                                                puVar7);
                puVar10 = (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)
                    eastl::vector_map<int, PendingSpotAnimation, eastl::less<int>, eastl::allocator,
                                      eastl::vector<eastl::pair<int, PendingSpotAnimation>, eastl::allocator>>::
                    operator[](
                        (vector_map<int, PendingSpotAnimation, eastl::less<int>, eastl::allocator,
                                    eastl::vector<eastl::pair<int, PendingSpotAnimation>, eastl::allocator>>*)this_00,
                        piVar9);
                std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>::reset(
                    puVar10, (SpotAnimation*)0);
            } else {
            LAB_1003f1909:
                this_05 = (CommandLine*)(puVar7 + 8);
                iVar4 = this_05->GetPos();
                if ((0 < iVar4) && (cVar2 = this_05->IsCycleReady(uVar3), cVar2 != '\0')) {
                    puVar10 = (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)
                        eastl::vector_map<
                            int, std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>,
                            eastl::less<int>, eastl::allocator,
                            eastl::vector<
                                eastl::pair<int, std::unique_ptr<SpotAnimation,
                                                                 MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>>,
                                eastl::allocator>>::
                        operator[](
                            (vector_map<
                                int,
                                std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>,
                                eastl::less<int>, eastl::allocator,
                                eastl::vector<
                                    eastl::pair<int, std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::
                                                                                        UniquePoolDeleter>>,
                                    eastl::allocator>>*)this_02,
                            piVar9);
                    std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>::reset(
                        puVar10, (SpotAnimation*)0);
                    this_05->UnSync();
                }
            }
            pcVar5 = pcVar5 + 32;
        } while (true);
    }

    // 0x1003f2050, 400 bytes, placed by class name
    // PathingEntity::GetRequestedDefaultOrOverrideModel(game::AnimatedModelPair&, PathingEntityModels&)
    ulong PathingEntity::GetRequestedDefaultOrOverrideModel(AnimatedModelPair* param_1, PathingEntityModels* param_2) {
        char cVar1;
        undefined* puVar3;
        Model* this_00;
        vector* pvVar4;
        MakeSharedPool<graphics::Model, 3072>* this_01;
        shared_ptr* psVar5;
        undefined** ppuVar6;
        ulong uVar7;
        ActiveComponent* pAVar8;
        type* ptVar9;
        ActiveComponent local_60;
        undefined4 local_3c;
        shared_ptr local_38;

        pAVar8 = &local_60;
        new (pAVar8) game::BuildRequest<graphics::Model, game::BuildModelMain>();
        puVar3 = (undefined*)(*(code*)field_0[55])(this);
        ppuVar6 = &DataStatus::READY;
        if (puVar3 == DataStatus::READY) {
            cVar1 = local_60.IsEmpty();
            if (cVar1 != '\0') {
            LAB_1003f20a3:
                cVar1 = local_60.IsEmpty();
                if (cVar1 == '\0') {
                    this = (PathingEntity*)param_2->SSOBeginPtr(pAVar8);
                    psVar5 = (shared_ptr*)local_60.SSOBeginPtr(pAVar8);
                    if (operator!=((shared_ptr*)this, psVar5)) {
                        pAVar8 = &local_60;
                        game::BuildRequest<graphics::Model, game::BuildModelMain>::operator=(
                            (BuildRequest<graphics::Model, game::BuildModelMain>*)param_2, (BuildRequest*)pAVar8);
                        pvVar4 = param_2->SSOBeginPtr(pAVar8);
                        this_01 = (MakeSharedPool<graphics::Model, 3072>*)shared_ptr<graphics::Model>::operator*(
                            (shared_ptr<graphics::Model>*)pvVar4);
                        local_3c = 2;
                        MakeSharedPool<graphics::Model, 3072>::MakeShared<graphics::Model&, graphics::ModelCopyType>(
                            &local_38, this_01, (Model*)&local_3c, (ModelCopyType*)ppuVar6);
                        shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)&param_2->field_32,
                                                               &local_38);
                        goto LAB_1003f2164;
                    }
                } else {
                    param_2->Clear();
                    new (&local_38) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)&param_2->field_32, &local_38);
                LAB_1003f2164:
                    local_38.~shared_ptr();
                }
                ptVar9 = (type*)&param_2->field_32;
                shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)param_1, (shared_ptr*)ptVar9);
                psVar5 = (shared_ptr*)param_2->SSOBeginPtr(ptVar9);
                uVar7 = CONCAT71((int7)((ulong)this >> 8), 1);
                shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)&param_1->field_16, psVar5);
                goto LAB_1003f2192;
            }
            cVar1 = local_60.IsTaskDone();
            if (cVar1 != '\0') {
                pvVar4 = local_60.SSOBeginPtr(pAVar8);
                this_00 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)pvVar4);
                cVar1 = this_00->IsReadyToRender();
                if (cVar1 != '\0')
                    goto LAB_1003f20a3;
            }
        }
        uVar7 = 0;
    LAB_1003f2192:
        local_60.~ActiveComponent();
        return uVar7 & 4294967295;
    }

    // 0x1003f21e0, 128 bytes, placed by class name
    // PathingEntity::GetReplaceHeldModel(game::AnimatedModelPair&, PathingEntityModels&, int)
    undefined4 PathingEntity::GetReplaceHeldModel(AnimatedModelPair* param_1, PathingEntityModels* param_2,
                                                  int param_3) {
        undefined4 uVar2;
        shared_ptr* this_00;
        undefined8 uVar3;

        uVar2 = 0;
        this_00 = game::ConfigProvider::GetConfig<game::SeqType>(field_224, param_3, (DataStatus**)0);
        if (shared_ptr::operator_cast_to_bool(this_00)) {
            uVar3 = shared_ptr<game::SeqType>::operator*((shared_ptr<game::SeqType>*)this_00);
            (*(code*)field_0[57])(this, uVar3);
            uVar2 = GetRequestedDefaultOrOverrideModel(this, param_1, param_2);
            (*(code*)field_0[58])(this);
        }
        return uVar2;
    }

    // 0x1003f22a0, 32 bytes, placed by class name
    // PathingEntity::GetDefaultModel(game::AnimatedModelPair&, int)
    void PathingEntity::GetDefaultModel(AnimatedModelPair* param_1, int param_2) {
        GetReplaceHeldModel(this, param_1, (PathingEntityModels*)&field_3240, param_2);
    }

    // 0x1003f22c0, 32 bytes, placed by class name
    // PathingEntity::GetOverrideModel(game::AnimatedModelPair&, int)
    void PathingEntity::GetOverrideModel(AnimatedModelPair* param_1, int param_2) {
        GetReplaceHeldModel(this, param_1, (PathingEntityModels*)&field_3288, param_2);
    }

    // 0x1003f22e0, 736 bytes, placed by class name
    // PathingEntity::Build(int, bool, PathingEntityPriorityData)
    ulong PathingEntity::Build(uint param_1, undefined8 param_3, undefined8 param_4) {
        undefined1* puVar1;
        char cVar2;
        bool bVar3;
        short sVar4;
        uint uVar5;
        long* plVar6;
        GraphicsApp* pGVar7;
        PathingEntity* this_00;
        long lVar8;
        undefined8 uVar9;
        Model* pMVar10;
        Layout* this_01;
        unique_ptr<graphics::GeometryBatchInstance,
                   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_02;
        unique_ptr<graphics::GeometryBatchInstance,
                   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar11;
        GeometryBatchInstance* this_03;
        RenderMaterial* pRVar12;
        EffectList* pEVar13;
        PathingEntity* this_04;
        ModelUpdateManager* this_05;
        ulong uVar14;
        ulong uVar15;
        undefined7 extraout_var;
        shared_ptr local_48;
        uint local_34;

        plVar6 = (long*)Instance();
        cVar2 = (**(code**)(*plVar6 + 224))(plVar6);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("GraphicsApp::Instance()->IsInsideMainLogic()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/PathingEntity.cpp",
                      418, (char*)0);
        }
        local_48.shared_from_this();
        weak_ptr<game::Entity>::operator=((weak_ptr<game::Entity>*)(field_864 + 8), &local_48);
        puVar1 = field_864;
        local_48.~shared_ptr();
        pGVar7 = (GraphicsApp*)this;
        sVar4 = (*(code*)field_0[42])(this, param_1, param_4);
        m_worldPriority = sVar4;
        if (field_4169 != '\0') {
            pGVar7 = (GraphicsApp*)puVar1;
            puVar1->RememberOverrideAnimationPoint();
            field_4169 = 0;
        }
        pGVar7 = (GraphicsApp*)pGVar7->Instance();
        uVar5 = pGVar7->GetFrameCount();
        bVar3 = (bool)(*(code*)field_0[59])(this);
        puVar1->Build(uVar5, param_1, bVar3, field_800);
        this_00 = (PathingEntity*)puVar1->GetCurrentModel();
        bVar3 = this_00->operator_cast_to_bool();
        if (bVar3) {
            this_04 = this_00;
            lVar8 = this_00->end();
            if (lVar8 != field_3232) {
                local_34 = param_1;
                uVar9 = this_00->end();
                field_3232 = uVar9;
                puVar1->SetParticleSoftFadeEnabled(false);
                cVar2 = GetEntityType();
                if (cVar2 == '\x02') {
                    puVar1->SetParticleShadowsEnabled(false);
                }
                pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
                this_01 = (Layout*)pMVar10->GetBatchList();
                this_02 = (unique_ptr<graphics::GeometryBatchInstance,
                                      MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(this_01);
                puVar11 = (unique_ptr<graphics::GeometryBatchInstance,
                                      MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                              this_01->end();
                for (; this_02 != puVar11; this_02 = this_02 + 8) {
                    this_03 = (GeometryBatchInstance*)
                                  std::unique_ptr<graphics::GeometryBatchInstance,
                                                  MakeUniquePool<graphics::GeometryBatchInstance,
                                                                 3072>::UniquePoolDeleter>::operator->(this_02);
                    pRVar12 = (RenderMaterial*)this_03->GetMaterial();
                    pEVar13 = (EffectList*)pRVar12->GetRenderPassEffect(4);
                    pEVar13->Set(117, 0);
                    pEVar13 = (EffectList*)pRVar12->GetRenderPassEffect(3);
                    pEVar13->Set(117, 0);
                }
                pMVar10 = (Model*)shared_ptr<graphics::Model>::operator*((shared_ptr<graphics::Model>*)this_00);
                UpdateIrradianceForModel(this, pMVar10);
                field_4168 = 1;
                (*(code*)field_0[64])(this);
                this_04 = this;
                (*(code*)field_0[67])();
                param_1 = local_34;
            }
            if (field_524 != '\0') {
                this_04 =
                    (PathingEntity*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
                this_04->SetFadeTime(300);
                field_524 = 0;
            }
            this_05 = (ModelUpdateManager*)this_04->Instance();
            this_05->AddToUpdateList(this_00);
        }
        UpdateSpotAnimations(this, param_1);
        BuildAnimStateMachine(this);
        puVar1 = &field_3792;
        cVar2 = puVar1->IsInit();
        if (cVar2 != '\0') {
            uVar14 = FrameTime::GetCurrentTimeMS();
            uVar15 = puVar1->capacity();
            if (uVar15 < uVar14) {
                puVar1->Destroy();
            }
        }
        bVar3 = operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
        if (bVar3) {
            (*(code*)field_0[66])(this, param_1);
        }
        return CONCAT71(extraout_var, bVar3) & 4294967295;
    }

    // 0x1003f2690, 176 bytes, placed by class name
    // PathingEntity::UpdateIrradianceForModel(graphics::Model&)
    void PathingEntity::UpdateIrradianceForModel(Model* param_1) {
        shared_ptr<game::World>* this_00;
        World* this_01;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        long lVar1;
        IrradianceEffect* this_03;
        int iVar2;
        int iVar3;
        undefined1 local_a8[112];
        undefined1 local_38[16];

        new (local_38) game::CoordFine();
        GetPositionFine(this, (CoordFine*)local_38);
        this_00 = (shared_ptr<game::World>*)GetWorld();
        this_01 = (World*)shared_ptr<game::World>::operator->(this_00);
        iVar2 = local_38->GetMapSquareX();
        iVar3 = local_38->GetMapSquareZ();
        this_02 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_01->GetMapSquare(iVar2, iVar3);
        lVar1 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_02);
        if (lVar1 != 0) {
            this_03 = (IrradianceEffect*)param_1->GetIrradianceEffect();
            local_a8->GetIrradianceSHConsts();
            this_03->SetCoefficients(local_a8);
        }
    }

    // 0x1003f2740, 736 bytes, placed by class name
    // PathingEntity::BuildAnimStateMachine()
    void PathingEntity::BuildAnimStateMachine() {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        int iVar1;
        bool bVar2;
        shared_ptr* psVar3;
        LoginManager* this_03;
        shared_ptr* psVar4;
        RT5AnimationResourceManager* pRVar5;
        long* plVar7;
        undefined1* this_04;
        shared_ptr<oldscape::dash3d::Decor> local_50[16];
        shared_ptr local_40;

        this_00 = field_864;
        psVar3 = (shared_ptr*)this_00->GetCurrentModel();
        bVar2 = shared_ptr::operator_cast_to_bool(psVar3);
        if (bVar2) {
            iVar1 = field_3872;
            this_01 = field_3896;
            bVar2 = this_01->operator_cast_to_bool();
            if (iVar1 == -1) {
                if (bVar2) {
                    new (&local_40) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    this_00->SetAnimationStateProviderOverride(&local_40);
                    local_40.~shared_ptr();
                    shared_ptr<graphics::AnimationStateSystem>::reset();
                    shared_ptr<game::RT5AnimationResourceManager>::reset();
                    shared_ptr<graphics::AnimationStateMachineProvider>::reset();
                }
            } else if (!bVar2) {
                make_shared<game::RT5AnimationResourceManager, game::AssetBuilder&, game::ConfigProvider_const&>(
                    (jag*)&local_40, field_216, field_224);
                shared_ptr<game::RT5AnimationResourceManager>::operator=(
                    (shared_ptr<game::RT5AnimationResourceManager>*)this_01, &local_40);
                local_40.~shared_ptr();
                local_40.GetAnimationStateMachineProvider((int)field_224);
                shared_ptr<graphics::AnimationStateMachineProvider>::operator=(
                    (shared_ptr<graphics::AnimationStateMachineProvider>*)field_3880, &local_40);
                local_40.~shared_ptr();
            }
            bVar2 = this_01->operator_cast_to_bool();
            if (bVar2) {
                bVar2 = field_3880->operator_cast_to_bool();
                if (bVar2) {
                    psVar3 = (shared_ptr*)this_00->GetCurrentModel();
                    this_03 = (LoginManager*)shared_ptr<game::RT5AnimationResourceManager>::operator->(
                        (shared_ptr<game::RT5AnimationResourceManager>*)this_01);
                    psVar4 = (shared_ptr*)this_03->GetDevCredentialsOutputDirectory();
                    bVar2 = operator!=(psVar3, psVar4);
                    if (bVar2) {
                        new (&local_40) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                        this_00->SetAnimationStateProviderOverride(&local_40);
                        local_40.~shared_ptr();
                        shared_ptr<graphics::AnimationStateSystem>::reset();
                        pRVar5 =
                            (RT5AnimationResourceManager*)shared_ptr<game::RT5AnimationResourceManager>::operator->(
                                (shared_ptr<game::RT5AnimationResourceManager>*)this_01);
                        psVar3 = (shared_ptr*)this_00->GetCurrentModel();
                        pRVar5->SetModel(psVar3);
                        pRVar5 =
                            (RT5AnimationResourceManager*)shared_ptr<game::RT5AnimationResourceManager>::operator->(
                                (shared_ptr<game::RT5AnimationResourceManager>*)this_01);
                        pRVar5->SetBASType(field_3856);
                    }
                    this_02 = field_3912;
                    bVar2 = this_02->operator_cast_to_bool();
                    if (!bVar2) {
                        this_04 = field_3928;
                        if (this_04->size() == 0) {
                            graphics::VariableList::AddUintVariable(this_04, 14422510, 0, 100);
                        }
                        plVar7 = (long*)shared_ptr<graphics::AnimationStateMachineProvider>::operator->(
                            (shared_ptr<graphics::AnimationStateMachineProvider>*)field_3880);
                        shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_50, (shared_ptr*)this_01);
                        (**(code**)(*plVar7 + 16))(&local_40, plVar7, this_04, local_50);
                        shared_ptr<graphics::AnimationStateSystem>::operator=(
                            (shared_ptr<graphics::AnimationStateSystem>*)this_02, &local_40);
                        local_40.~shared_ptr();
                        local_50->~shared_ptr();
                        new (&local_40) shared_ptr<oldscape::dash3d::Decor>(this_02);
                        this_00->SetAnimationStateProviderOverride(&local_40);
                        local_40.~shared_ptr();
                    }
                }
            }
        }
    }

    // 0x1003f2ec0, 288 bytes, placed by class name
    // PathingEntity::Destruct()
    void PathingEntity::Destruct() {
        bool bVar1;
        shared_ptr* this_00;
        World* pWVar2;
        DetachedParticleSystemsDrawable* pDVar3;
        fixed_vector* pfVar4;
        vector* pvVar5;
        shared_ptr local_38;

        this_00 = (shared_ptr*)GetWorld();
        bVar1 = shared_ptr::operator_cast_to_bool(this_00);
        if (bVar1) {
            pWVar2 = (World*)shared_ptr<game::World>::operator->((shared_ptr<game::World>*)this_00);
            pDVar3 = (DetachedParticleSystemsDrawable*)pWVar2->GetDetachedParticleSystems();
            pfVar4 = (fixed_vector*)field_864->GetParticleSystems();
            pDVar3->Add(pfVar4);
            pWVar2 = (World*)shared_ptr<game::World>::operator->((shared_ptr<game::World>*)this_00);
            pDVar3 = (DetachedParticleSystemsDrawable*)pWVar2->GetDetachedParticleSystems();
            pvVar5 = (vector*)field_864->GetModularParticleSystems();
            pDVar3->Add(pvVar5);
        }
        bVar1 = field_3896->operator_cast_to_bool();
        if (bVar1) {
            new (&local_38) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
            (field_864, &local_38)->SetAnimationStateProviderOverride();
            local_38.~shared_ptr();
            shared_ptr<graphics::AnimationStateSystem>::reset();
            shared_ptr<graphics::AnimationStateMachineProvider>::reset();
            shared_ptr<game::RT5AnimationResourceManager>::reset();
        }
        (*(code*)field_0[54])(this);
        field_864->Destruct();
        DestroySpotAnimations(this);
    }

    // 0x1003f3010, 128 bytes, placed by class name
    // PathingEntity::DestroySpotAnimations()
    void PathingEntity::DestroySpotAnimations() {
        bool bVar1;
        compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator>*
            pcVar2;
        unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>* this_00;
        compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator>*
            this_01;

        this_01 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                   eastl::allocator>*)(&field_4088)
                      ->HeapBeginPtr();
        pcVar2 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                  eastl::allocator>*)(&field_4088)
                     ->end();
        for (; this_01 != pcVar2; this_01 = this_01 + 16) {
            eastl::compressed_pair<eastl::string*, eastl::allocator>::first();
            this_00 = (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)
                eastl::compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator>::second(this_01);
            bVar1 = this_00->operator_cast_to_bool();
            if (bVar1) {
                std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>::reset(
                    this_00, (SpotAnimation*)0);
            }
        }
    }

    // 0x1003f3090, 272 bytes, placed by class name
    // PathingEntity::RequestReadyAnimation()
    void PathingEntity::RequestReadyAnimation() {
        BASType* this_00;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar1;
        long lVar2;
        char cVar4;
        int iVar5;
        int iVar6;
        CommandLine* this_01;
        undefined1* this_02;

        if (!field_3856->operator_cast_to_bool()) {
            return;
        }
        this_00 = (BASType*)shared_ptr<game::BASType>::operator*((shared_ptr<game::BASType>*)field_3856);
        this_02 = field_864;
        pvVar1 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_02->GetDefaultAnimation();
        this_01 = (CommandLine*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar1);
        if (this_01 != (CommandLine*)0) {
            iVar5 = this_02->GetDefaultAnimationSeqID();
            cVar4 = this_00->IsReadyRandom(iVar5);
            if (cVar4 != '\0') {
                iVar5 = this_02->GetDefaultAnimationRunCount();
                if (iVar5 < 1) {
                    return;
                }
                this_02->SetDefaultAnimationRunCount(0);
                iVar5 = this_02->GetDefaultAnimationSeqID();
                iVar5 = this_00->GetReadyAnim(iVar5);
                goto LAB_1003f3170;
            }
        }
        iVar5 = this_02->GetDefaultAnimationSeqID();
        iVar5 = this_00->GetReadyAnim(iVar5);
        pvVar1 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_02->GetDefaultAnimationModel();
        lVar2 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar1);
        if (iVar5 == -1) {
            cVar4 = this_02->HasRequestedDefaultAnimation();
            if (cVar4 == '\0') {
                this_02->ResetDefaultAnimation();
                return;
            }
            return;
        }
        if (((this_01 != (CommandLine*)0) && (lVar2 != 0)) && (iVar6 = this_01->GetPos(), iVar5 == iVar6)) {
            return;
        }
    LAB_1003f3170:
        this_02->RequestDefaultAnimation(iVar5, true, true);
    }

    // 0x1003f3210, 256 bytes, placed by class name
    // PathingEntity::SetGridSize(int)
    void PathingEntity::SetGridSize(int param_1) {
        undefined8* puVar2;
        vector* pvVar3;
        float* pfVar4;
        long* plVar5;
        int iVar6;
        type* ptVar7;
        undefined8 local_38;
        undefined4 local_30;
        float local_2c;

        iVar6 = param_1 - m_gridSize;
        if (iVar6 != 0) {
            puVar2 = (undefined8*)(*(code*)field_0[13])();
            local_38 = *puVar2;
            local_30 = *(undefined4*)(puVar2 + 1);
            ptVar7 = (type*)PTR_ZERO_100ee66e8;
            if (!math::operator!=((Vector3T*)&local_38, (Vector3T*)PTR_ZERO_100ee66e8)) {
                /* WARNING: Subroutine does not return */
                LogAssert("tempVec != math::Vector3::ZERO",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "entities/PathingEntity.cpp",
                          696, "Can\'t change NPC size before NPC has been translated for the first time");
            }
            local_2c = (float)(iVar6 * 128) * 0.5;
            pvVar3 = local_38.SSOBeginPtr(ptVar7);
            *(float*)pvVar3 = *(float*)pvVar3 + local_2c;
            pfVar4 = (float*)local_38.second();
            *pfVar4 = local_2c + *pfVar4;
            (*(code*)field_0[11])(this, (Layout*)&local_38);
            plVar5 = (long*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(
                (unique_ptr<EntityRoute, std::default_delete<EntityRoute>>*)(field_552 + 160));
            (**(code**)(*plVar5 + 40))(plVar5, m_gridSize, param_1);
            m_gridSize = param_1;
        }
    }

    // 0x1003f3310, 176 bytes, placed by class name
    // PathingEntity::GetPositionGrid(game::CoordGrid&, bool) const
    void PathingEntity::GetPositionGrid(CoordGrid* param_1, bool param_2) {
        Vector3T<float>* this_00;
        float* pfVar2;
        undefined3 in_register_00000011;
        float fVar3;

        this_00 = (Vector3T<float>*)(*(code*)field_0[13])();
        fVar3 = 0.0;
        if (CONCAT31(in_register_00000011, param_2) == 0) {
            fVar3 = (float)(m_gridSize / 2);
        }
        param_1->field_0 = GetDuration();
        pfVar2 = (float*)math::Vector3T<float>::operator[](this_00, 0);
        param_1->field_4 = (uint)(long)(*pfVar2 * 0.0078125 - fVar3);
        pfVar2 = (float*)math::Vector3T<float>::operator[](this_00, 2);
        param_1->field_8 = (uint)(long)(*pfVar2 * 0.0078125 - fVar3);
    }

    // 0x1003f33c0, 224 bytes, placed by class name
    // PathingEntity::GetDestinationPositionGrid(game::CoordGrid&)
    void PathingEntity::GetDestinationPositionGrid(CoordGrid* param_1) {
        int iVar1;
        EntityRoute* pEVar3;
        CoordMapSquare* this_00;
        Vector3T<float>* pVVar4;
        float* pfVar5;
        float fVar6;

        pEVar3 = (EntityRoute*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(
            (unique_ptr<EntityRoute, std::default_delete<EntityRoute>>*)(field_552 + 160));
        iVar1 = pEVar3->Length();
        if (iVar1 == 0) {
            GetPositionGrid(this, param_1, false);
        } else {
            iVar1 = m_gridSize;
            pEVar3 = (EntityRoute*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(
                (unique_ptr<EntityRoute, std::default_delete<EntityRoute>>*)(field_552 + 160));
            this_00 = (CoordMapSquare*)pEVar3->GetLastWaypoint();
            param_1->field_0 = this_00->GetX();
            pVVar4 = (Vector3T<float>*)this_00->y();
            pfVar5 = (float*)math::Vector3T<float>::operator[](pVVar4, 0);
            fVar6 = (float)(iVar1 / 2);
            param_1->field_4 = (uint)(long)(*pfVar5 * 0.0078125 - fVar6);
            pVVar4 = (Vector3T<float>*)this_00->y();
            pfVar5 = (float*)math::Vector3T<float>::operator[](pVVar4, 2);
            param_1->field_8 = (uint)(long)(*pfVar5 * 0.0078125 - fVar6);
        }
    }

    // 0x1003f34a0, 112 bytes, placed by class name
    // PathingEntity::GetDestinationPositionFine(game::CoordFine&)
    void PathingEntity::GetDestinationPositionFine(CoordFine* param_1) {
        EntityRoute* pEVar2;
        Layout* this_00;
        CoordFine* pCVar3;

        pCVar3 = param_1;
        pEVar2 = (EntityRoute*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(
            (unique_ptr<EntityRoute, std::default_delete<EntityRoute>>*)(field_552 + 160));
        if (pEVar2->Length() == 0) {
            GetPositionFine(this, param_1);
        } else {
            pEVar2 = (EntityRoute*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(
                (unique_ptr<EntityRoute, std::default_delete<EntityRoute>>*)(field_552 + 160));
            this_00 = (Layout*)pEVar2->GetLastWaypoint();
            pCVar3 = (CoordFine*)eastl::string::Layout::SSOBeginPtr(this_00, (type*)pCVar3);
            game::CoordFine::operator=(param_1, pCVar3);
        }
    }

    // 0x1003f3510, 80 bytes, placed by class name
    // PathingEntity::GetCurrentMoveSpeed()
    undefined* PathingEntity::GetCurrentMoveSpeed() {
        EntityRoute* pEVar2;
        NXTPixToolkit* this_00;
        undefined** ppuVar3;

        pEVar2 = (EntityRoute*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(
            (unique_ptr<EntityRoute, std::default_delete<EntityRoute>>*)(field_552 + 160));
        if (pEVar2->Length() == 0) {
            ppuVar3 = &MoveSpeed::STATIONARY;
        } else {
            pEVar2 = (EntityRoute*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(
                (unique_ptr<EntityRoute, std::default_delete<EntityRoute>>*)(field_552 + 160));
            this_00 = (NXTPixToolkit*)pEVar2->GetLastWaypoint();
            ppuVar3 = (undefined**)this_00->GetScreen();
        }
        return *ppuVar3;
    }

    // 0x1003f3560, 128 bytes, placed by class name
    // PathingEntity::GetCameraFollowPosition(math::Vector3T<float>&)
    void PathingEntity::GetCameraFollowPosition(Vector3T* param_1) {
        float* pfVar1;
        Vector3T* pVVar2;
        undefined1 local_48[24];
        undefined8 local_30[2];

        pVVar2 = (Vector3T*)&field_736;
        FrameTime::GetCurrentTimeNS();
        local_48->GetValue((ulonglong)pVVar2);
        local_30[0] = math::Vector3FromVector3T<double>((math*)local_48, pVVar2);
        param_1->SetXYZ(local_30);
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)param_1, 1);
        *pfVar1 = *pfVar1 + 1024.0;
    }

    // 0x1003f3700, 144 bytes, placed by class name
    // PathingEntity::UpdateGroundHeight()
    void PathingEntity::UpdateGroundHeight() {
        char cVar1;
        GraphNode* this_00;
        Vector3T* pVVar3;
        undefined8 uVar4;
        float fVar5;

        cVar1 = IsDoingAnExactMove(this);
        if ((cVar1 == '\0') || (field_3500 == field_3516)) {
            this_00 = (GraphNode*)GetNode();
            cVar1 = this_00->IsAttached();
            if (cVar1 != '\0') {
                pVVar3 = (Vector3T*)GetTranslation();
                if (math::operator!=(pVVar3, (Vector3T*)PTR_ZERO_100ee66e8)) {
                    uVar4 = this_00->GetWorldTranslation();
                    fVar5 = (float)GetFloorHeight(uVar4, 1);
                    (*(code*)field_0[14])(fVar5 + 5.0, this);
                }
            }
        }
    }

    // 0x1003f37b0, 80 bytes, placed by class name
    // PathingEntity::UpdateEntity(int)
    void PathingEntity::UpdateEntity(int param_1) {
        field_512 = param_1;
        (*(code*)field_0[50])();
        UpdateGroundHeight(this);
        UpdatePostTransform(this);
        if ((*(code*)field_0[49])(this) != '\0') {
            SetFacingGradual(this);
        }
    }

    // 0x1003f3800, 176 bytes, placed by class name
    // PathingEntity::UpdatePostTransform()
    void PathingEntity::UpdatePostTransform() {
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        Location* this_00;

        if (field_3856->operator_cast_to_bool()) {
            this_00 = (Location*)shared_ptr<game::BASType>::operator*((shared_ptr<game::BASType>*)field_3856);
            iVar2 = this_00->GetEffectAnimID();
            if (iVar2 == 0) {
                iVar2 = this_00->GetMinGridZ();
                if (iVar2 == 0)
                    goto LAB_1003f3886;
            }
            iVar2 = this_00->GetEffectAnimID();
            iVar3 = this_00->GetMinGridZ();
            iVar4 = this_00->GetObjStackColourTrillions();
            iVar5 = this_00->GetID();
            CalculateHillRotateTransform(this, iVar2, iVar3, iVar4, iVar5);
        } else {
        LAB_1003f3886:
            (&field_3344)->SetToIdentity();
            field_4171 = 0;
        }
    }

    // 0x1003f38b0, 240 bytes, placed by class name
    // PathingEntity::SetFacingGradual()
    void PathingEntity::SetFacingGradual() {
        GraphNode* pGVar3;
        QuaternionT* pQVar4;
        Vector3T* pVVar5;
        EntityRoute* this_00;
        HitmarkType* this_01;
        bool bVar6;
        ColourHSL local_50;
        CoordGrid local_40;

        pGVar3 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
            (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
        pQVar4 = (QuaternionT*)pGVar3->GetRotation();
        new (&local_40) game::CoordGrid();
        GetPositionGrid(this, &local_40, true);
        new (&local_50) math::ColourHSL((float)local_40.field_4, (float)(int)local_40.field_0, (float)local_40.field_8);
        pVVar5 = (Vector3T*)GetTranslation();
        this_00 = (EntityRoute*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(
            (unique_ptr<EntityRoute, std::default_delete<EntityRoute>>*)(field_552 + 160));
        if (this_00->HasMovement() == '\0') {
            bVar6 = false;
        } else {
            this_01 = (HitmarkType*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(
                (unique_ptr<EntityRoute, std::default_delete<EntityRoute>>*)(field_552 + 160));
            bVar6 = this_01->GetDuration() == 0;
        }
        pGVar3 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
            (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
        pQVar4 = (QuaternionT*)(field_552, (Vector3T*)&local_50, pVVar5, pQVar4, bVar6)->GetNextRotation();
        pGVar3->SetRotation(pQVar4);
    }

    // 0x1003f39a0, 80 bytes, placed by class name
    // PathingEntity::AttachToNode(graphics::GraphNode*, shared_ptr<game::World> const&)
    void PathingEntity::AttachToNode(GraphNode* param_1, shared_ptr* param_2) {
        World* this_00;
        GraphNode* this_01;

        this_00 = (World*)shared_ptr<game::World>::operator->((shared_ptr<game::World>*)param_2);
        this_01 = (GraphNode*)this_00->GetRootNode();
        this_01->AddChild(param_1);
        SetWorld(param_2);
    }

    // 0x1003f39f0, 208 bytes, placed by class name
    // PathingEntity::EnsureBASType()
    bool PathingEntity::EnsureBASType() {
        undefined1* this_00;
        ConfigProvider* this_01;
        bool bVar1;
        int iVar2;
        undefined4 uVar3;
        shared_ptr* psVar4;
        undefined8 uVar5;
        DataStatus* local_28;

        this_00 = field_3856;
        bVar1 = this_00->operator_cast_to_bool();
        if (!bVar1) {
            iVar2 = (*(code*)field_0[60])(this);
            if (iVar2 == -1) {
                return false;
            }
            this_01 = field_224;
            iVar2 = (*(code*)field_0[60])(this);
            psVar4 = game::ConfigProvider::GetConfig<game::BASType>(this_01, iVar2, &local_28);
            shared_ptr<game::BASType>::operator=((shared_ptr<game::BASType>*)this_00, psVar4);
            if (local_28 == (DataStatus*)DataStatus::MISSING) {
                uVar5 = logger::default_logger();
                uVar3 = (*(code*)field_0[60])(this);
                logger::Logger::Log(uVar5, 1, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/entities/PathingEntity.cpp",
                                    838, "BAS %d is missing - no animations will be played on this entity", uVar3);
            }
        }
        bVar1 = operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
        return bVar1;
    }

    // 0x1003f3ac0, 96 bytes, placed by class name
    // PathingEntity::AttachToWorld()
    ulong PathingEntity::AttachToWorld() {
        bool bVar1;
        shared_ptr* this_00;
        undefined7 extraout_var;
        GraphNode* this_01;

        this_00 = (shared_ptr*)field_232->GetActiveWorld();
        bVar1 = shared_ptr::operator_cast_to_bool(this_00);
        if (bVar1) {
            this_01 = (GraphNode*)GetNode();
            if (this_01->IsAttached() == '\0') {
                (*(code*)field_0[65])(this, this_01, this_00);
            }
        }
        return CONCAT71(extraout_var, bVar1) & 4294967295;
    }

    // 0x1003f3b20, 128 bytes, placed by class name
    // PathingEntity::UpdatePosition(int)
    ulong PathingEntity::UpdatePosition(int param_1) {
        char cVar1;
        uint uVar2;
        undefined8 unaff_RBX;
        ulong uVar3;
        MoveSpeed* local_30;
        float local_24;

        cVar1 = AttachToWorld(this);
        if (cVar1 == '\0') {
            uVar3 = 0;
        } else {
            cVar1 = DoPendingExactMoves(this, param_1);
            uVar3 = CONCAT71((int7)((ulong)unaff_RBX >> 8), 1);
            if (cVar1 == '\0') {
                local_30 = (MoveSpeed*)MoveSpeed::STATIONARY;
                local_24 = 0.0;
                uVar2 = MoveAlongRoute(this, param_1, &local_30, &local_24);
                uVar3 = (ulong)uVar2;
                SelectMovementAnimation(this, local_30, local_24);
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x1003f3ba0, 288 bytes, placed by class name
    // PathingEntity::DoPendingExactMoves(int)
    undefined8 PathingEntity::DoPendingExactMoves(int param_1) {
        undefined1* this_00;
        char cVar1;
        int* piVar2;
        undefined8 uVar3;

        cVar1 = IsDoingAnExactMove(this);
        if (cVar1 != '\0') {
            cVar1 = (*(code*)field_0[35])(this);
            if (cVar1 != '\0') {
                cVar1 = (&field_808)->empty();
                if (cVar1 == '\0') {
                    this_00 = field_864;
                    cVar1 = this_00->HasRequestedOverrideAnimation();
                    if (cVar1 == '\0') {
                        cVar1 = this_00->IsOverrideAnimationInUse();
                        if (cVar1 != '\0') {
                            cVar1 = this_00->RequestedOverrideAnimationIsPriority();
                            if (cVar1 == '\0')
                                goto LAB_1003f3c42;
                        }
                        SelectBaseAnimation(this, (MoveSpeed*)MoveSpeed::STATIONARY, 0.0);
                        piVar2 = (int*)eastl::vector<
                            int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true,
                                                                              eastl::allocator>>*)&field_808,
                                   0);
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
                /* WARNING: Subroutine does not return */
                LogAssert("m_exactMoveTime2 != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "entities/PathingEntity.cpp",
                          962, (char*)0);
            }
            if (param_1 < (int)field_3532) {
                DoExactMove1(this, param_1);
            } else {
                if ((int)field_3536 < param_1)
                    goto LAB_1003f3c9a;
                DoExactMove2(this, param_1);
            }
            uVar3 = 1;
        }
        return uVar3;
    }

    // 0x1003f3cc0, 352 bytes, placed by class name
    // PathingEntity::MoveAlongRoute(int, MoveSpeed const**, float*)
    uint PathingEntity::MoveAlongRoute(int param_1, MoveSpeed** param_2, float* param_3) {
        unique_ptr<EntityRoute, std::default_delete<EntityRoute>>* this_00;
        MoveSpeed** ppMVar1;
        uint uVar2;
        EntityRoute* pEVar3;
        type* ptVar4;
        Layout* this_01;
        vector* pvVar5;
        CoordFine local_78;
        undefined1 local_64[12];
        MoveSpeed* local_58;
        float local_50;
        float* local_48;
        MoveSpeed** local_38;

        uVar2 = IsAnimationBlockingMovement(this);
        if ((char)uVar2 == '\0') {
            local_48 = param_3;
            local_38 = param_2;
            new (&local_78) game::CoordFine();
            GetPositionFine(this, &local_78);
            this_00 = (unique_ptr<EntityRoute, std::default_delete<EntityRoute>>*)(field_552 + 160);
            ptVar4 = (type*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(this_00);
            (**(code**)(*(long*)ptVar4 + 48))(&local_78.field_16, ptVar4, &local_78, field_552, m_gridSize);
            ppMVar1 = local_38;
            if (local_78._16_4_ == 2) {
                pEVar3 =
                    (EntityRoute*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(this_00);
                this_01 = (Layout*)pEVar3->GetLastWaypoint();
                pvVar5 = eastl::string::Layout::SSOBeginPtr(this_01, ptVar4);
                (*(code*)field_0[48])(this, param_1, pvVar5, 1);
            } else if (local_78._16_4_ == 1) {
                (field_552, local_50)->SetFaceMovement();
                (*(code*)field_0[11])(this, local_64);
            } else {
                local_38 = ppMVar1;
                if (local_78._16_4_ == 0) {
                    pEVar3 = (EntityRoute*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(
                        this_00);
                    pEVar3->ResetStalledTickCount();
                    (*(code*)field_0[11])(this, local_64);
                    local_38 = ppMVar1;
                }
            }
            if (local_38 != (MoveSpeed**)0) {
                *local_38 = local_58;
            }
            if (local_48 != (float*)0) {
                *local_48 = local_50;
            }
        } else {
            pEVar3 = (EntityRoute*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(
                (unique_ptr<EntityRoute, std::default_delete<EntityRoute>>*)(field_552 + 160));
            pEVar3->AddStalledTick();
        }
        return uVar2 ^ 1;
    }

    // 0x1003f3e20, 160 bytes, placed by class name
    // PathingEntity::SelectMovementAnimation(MoveSpeed const*, float)
    void PathingEntity::SelectMovementAnimation(MoveSpeed* param_1, float param_2) {
        undefined1* this_00;
        int iVar1;
        int* piVar2;
        EntityRoute* this_01;
        char cVar3;
        int iVar4;

        SelectBaseAnimation(this, param_1, param_2);
        cVar3 = (&field_808)->empty();
        if (cVar3 == '\0') {
            piVar2 = (int*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)&field_808,
                    (long)*(int*)(param_1 + 8) + 1);
            iVar1 = *piVar2;
            this_00 = field_864;
            iVar4 = this_00->GetOverrideAnimationRequestedSeqID();
            if (iVar4 != iVar1) {
                iVar4 = this_00->GetOverrideAnimationSeqID();
                if (iVar4 != iVar1) {
                    cVar3 = this_00->RequestOverrideAnimation(true, iVar1, 0, false);
                    if (cVar3 != '\0') {
                        this_01 =
                            (EntityRoute*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(
                                (unique_ptr<EntityRoute, std::default_delete<EntityRoute>>*)(field_552 + 160));
                        field_800 = this_01->Length();
                    }
                }
            }
        }
    }

    // 0x1003f3ec0, 96 bytes, placed by class name
    // PathingEntity::UpdatePositionFromCurrentTime(unsigned int)
    void PathingEntity::UpdatePositionFromCurrentTime(uint param_1) {
        GraphNode* this_00;
        Matrix44T* pMVar1;
        undefined8 local_28[2];

        local_28[0] = GetSmoothPosition(this);
        this_00 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
            (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
        this_00->SetTranslation(local_28);
        pMVar1 = (Matrix44T*)CalculateWorldTransformationMatrix(this);
        (field_864, pMVar1, param_1)->SetWorldTransform();
    }

    // 0x1003f3f20, 192 bytes, placed by class name
    // PathingEntity::GetSmoothPosition() const
    undefined8 PathingEntity::GetSmoothPosition() {
        uint uVar1;
        uint uVar2;
        Vector3T* pVVar3;
        float fVar4;
        undefined1 local_58[24];
        undefined8 local_40[2];
        undefined4 local_30[4];

        new (local_30) math::Vector3T<int>();
        if (field_3532 != 4294967295) {
            uVar1 = field_3532 - field_512;
            uVar2 = -uVar1;
            if ((int)uVar2 < 0) {
                uVar2 = uVar1;
            }
            if (uVar2 < 2) {
                pVVar3 = (Vector3T*)&field_3504;
                goto LAB_1003f3f9a;
            }
        }
        pVVar3 = (Vector3T*)&field_736;
        FrameTime::GetCurrentTimeNS();
        local_58->GetValue((ulonglong)pVVar3);
        local_40[0] = math::Vector3FromVector3T<double>((math*)local_58, pVVar3);
        pVVar3 = (Vector3T*)local_40;
    LAB_1003f3f9a:
        local_30->SetXYZ(pVVar3);
        fVar4 = (float)GetFloorHeight(local_30, 1);
        return CONCAT44(fVar4 + 5.0, local_30[0]);
    }

    // 0x1003f3fe0, 128 bytes, placed by class name
    // PathingEntity::CalculateWorldTransformationMatrix()
    Matrix44T* PathingEntity::CalculateWorldTransformationMatrix() {
        char cVar1;
        GraphNode* this_00;
        Matrix44T* pMVar2;
        Matrix44T* pMVar3;
        undefined1 local_68[64];

        this_00 = (GraphNode*)GetNode();
        pMVar2 = (Matrix44T*)this_00->GetWorldTransformationMatrix();
        cVar1 = field_3408;
        if (cVar1 != '\0') {
            math::operator*((math*)local_68, (Matrix44T*)&field_3344, pMVar2);
            math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_3424, (Matrix44T*)local_68);
        }
        field_3488 = cVar1 != '\0';
        pMVar3 = (Matrix44T*)&field_3424;
        if (cVar1 == '\0') {
            pMVar3 = pMVar2;
        }
        return pMVar3;
    }

    // 0x1003f4060, 272 bytes, placed by class name
    // PathingEntity::IsAnimationBlockingMovement()
    ulong PathingEntity::IsAnimationBlockingMovement() {
        undefined1* puVar1;
        char cVar2;
        bool bVar3;
        shared_ptr* this_00;
        compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator>*
            this_01;
        compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator>*
            pcVar4;
        unique_ptr* this_02;
        SpotAnimation* pSVar5;
        bool bVar6;
        undefined8 unaff_R15;
        undefined7 uVar7;

        puVar1 = field_864;
        cVar2 = puVar1->IsOverrideBlockingMovement(field_800);
        uVar7 = (undefined7)((ulong)unaff_R15 >> 8);
        bVar6 = true;
        if (cVar2 == '\0') {
            this_00 = (shared_ptr*)puVar1->GetOverrideAnimation();
            bVar3 = shared_ptr::operator_cast_to_bool(this_00);
            if ((!bVar3) || (cVar2 = puVar1->MayMove(field_800), cVar2 != '\0')) {
                puVar1 = &field_4088;
                this_01 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator>*)puVar1->HeapBeginPtr();
                pcVar4 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                          eastl::allocator>*)puVar1->end();
                uVar7 = (undefined7)((ulong)puVar1 >> 8);
                for (; bVar6 = this_01 != pcVar4, bVar6; this_01 = this_01 + 16) {
                    eastl::compressed_pair<eastl::string*, eastl::allocator>::first();
                    this_02 = (unique_ptr*)
                        eastl::compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator>::second(this_01);
                    bVar3 = std::unique_ptr::operator_cast_to_bool(this_02);
                    if (bVar3) {
                        pSVar5 =
                            (SpotAnimation*)
                                std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>::
                                operator->(
                                    (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)
                                        this_02);
                        cVar2 = pSVar5->IsDelayed();
                        if (cVar2 != '\0') {
                            pSVar5 =
                                (SpotAnimation*)std::unique_ptr<SpotAnimation,
                                                                MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>::
                                operator->(
                                    (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)
                                        this_02);
                            cVar2 = pSVar5->MayMove(field_800);
                            if (cVar2 == '\0')
                                break;
                        }
                    }
                }
            }
        }
        return CONCAT71(uVar7, bVar6) & 4294967295;
    }

    // 0x1003f41c0, 1696 bytes, placed by class name
    // PathingEntity::SelectBaseAnimation(MoveSpeed const*, float)
    void PathingEntity::SelectBaseAnimation(MoveSpeed* param_1, float param_2) {
        undefined1* this_00;
        char cVar1;
        int iVar2;
        GraphNode* this_01;
        QuaternionT* pQVar3;
        float* pfVar4;
        float fVar5;
        undefined1 local_48[16];
        float local_38;
        float local_34;

        local_34 = param_2;
        cVar1 = EnsureBASType(this);
        if (cVar1 == '\0') {
            return;
        }
        cVar1 = (field_3928, "AnimMode")->HasUintVariable();
        if ((cVar1 != '\0') &&
            ((((MoveSpeed*)MoveSpeed::STATIONARY == param_1 || ((MoveSpeed*)MoveSpeed::WALK == param_1)) ||
              ((MoveSpeed*)MoveSpeed::RUN == param_1)))) {
            graphics::VariableList::SetUintVariable(field_3928, 14422510);
        }
        shared_ptr<game::BASType>::operator*((shared_ptr<game::BASType>*)field_3856);
        if ((MoveSpeed*)MoveSpeed::STATIONARY == param_1) {
            cVar1 = field_552->IsFinished();
            if (cVar1 == '\0') {
                cVar1 = field_552->IsTurningLeft();
                if (cVar1 == '\0') {
                    iVar2 = game::BASType::GetReadyTurnRight();
                } else {
                    iVar2 = game::BASType::GetReadyTurnLeft();
                }
                if (iVar2 != -1)
                    goto LAB_1003f4838;
            }
            RequestReadyAnimation(this);
        } else {
            new (local_48) math::ColourHSL(0.0, 0.0, -1.0);
            this_01 = (GraphNode*)GetNode();
            pQVar3 = (QuaternionT*)this_01->GetRotation();
            math::Vector3T<float>::operator*=((Vector3T<float>*)local_48, pQVar3);
            pfVar4 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_48, 0);
            local_38 = *pfVar4;
            pfVar4 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_48, 2);
            local_38 = (float)math::conversion::JagAtan2(local_38, *pfVar4);
            local_48->Set(0.0, 0.0, -1.0);
            this_00 = field_552;
            pQVar3 = (QuaternionT*)this_00->GetFinalRotation();
            math::Vector3T<float>::operator*=((Vector3T<float>*)local_48, pQVar3);
            pfVar4 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_48, 0);
            local_48._12_4_ = *pfVar4;
            pfVar4 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_48, 2);
            fVar5 = (float)math::conversion::JagAtan2((float)local_48._12_4_, *pfVar4);
            local_48._12_4_ = math::conversion::PrincipleAngle(fVar5 - local_38);
            cVar1 = this_00->FacingEntity();
            if (((cVar1 == '\0') || (0.7853982 < (float)local_48._12_4_)) || ((float)local_48._12_4_ < -0.7853982)) {
                cVar1 = this_00->IsFinished();
                if (cVar1 == '\0') {
                    if (((MoveSpeed*)MoveSpeed::RUN == param_1) &&
                        (iVar2 = game::BASType::GetRunForward(), iVar2 != -1)) {
                        cVar1 = this_00->IsTurningLeft();
                        if ((cVar1 == '\0') || (iVar2 = game::BASType::GetRunTurnLeft(), iVar2 == -1)) {
                            cVar1 = this_00->IsTurningLeft();
                            if ((cVar1 != '\0') || (iVar2 = game::BASType::GetRunTurnRight(), iVar2 == -1))
                                goto LAB_1003f47ee;
                            iVar2 = game::BASType::GetRunTurnRight();
                        } else {
                            iVar2 = game::BASType::GetRunTurnLeft();
                        }
                    } else if (((MoveSpeed*)MoveSpeed::CRAWL == param_1) &&
                               (iVar2 = game::BASType::GetCrawlForward(), iVar2 != -1)) {
                        cVar1 = this_00->IsTurningLeft();
                        if ((cVar1 == '\0') || (iVar2 = game::BASType::GetCrawlTurnLeft(), iVar2 == -1)) {
                            cVar1 = this_00->IsTurningLeft();
                            if ((cVar1 != '\0') || (iVar2 = game::BASType::GetCrawlTurnRight(), iVar2 == -1))
                                goto LAB_1003f4829;
                            iVar2 = game::BASType::GetCrawlTurnRight();
                        } else {
                            iVar2 = game::BASType::GetCrawlTurnLeft();
                        }
                    } else {
                        cVar1 = this_00->IsTurningLeft();
                        if ((cVar1 == '\0') || (iVar2 = game::BASType::GetWalkTurnLeft(), iVar2 == -1)) {
                            cVar1 = this_00->IsTurningLeft();
                            if ((cVar1 != '\0') || (iVar2 = game::BASType::GetWalkTurnRight(), iVar2 == -1))
                                goto LAB_1003f462b;
                            iVar2 = game::BASType::GetWalkTurnRight();
                        } else {
                            iVar2 = game::BASType::GetWalkTurnLeft();
                        }
                    }
                } else if (((MoveSpeed*)MoveSpeed::RUN == param_1) &&
                           (iVar2 = game::BASType::GetRunForward(), iVar2 != -1)) {
                LAB_1003f47ee:
                    iVar2 = game::BASType::GetRunForward();
                } else if (((MoveSpeed*)MoveSpeed::CRAWL == param_1) &&
                           (iVar2 = game::BASType::GetCrawlForward(), iVar2 != -1)) {
                LAB_1003f4829:
                    iVar2 = game::BASType::GetCrawlForward();
                } else {
                LAB_1003f462b:
                    iVar2 = game::BASType::GetWalkForward();
                }
            } else {
                local_34 = (float)math::conversion::PrincipleAngle(local_34 - local_38);
                if (((MoveSpeed*)MoveSpeed::RUN == param_1) && (iVar2 = game::BASType::GetRunForward(), iVar2 != -1)) {
                    if ((local_34 < 0.7853982) ||
                        ((2.3561945 < local_34 || (iVar2 = game::BASType::GetRunRight(), iVar2 == -1)))) {
                        if ((-0.7853982 < local_34) ||
                            ((local_34 < -2.3561945 || (iVar2 = game::BASType::GetRunLeft(), iVar2 == -1)))) {
                            if (((local_34 <= 2.3561945) && (-2.3561945 <= local_34)) ||
                                (iVar2 = game::BASType::GetRunBackward(), iVar2 == -1))
                                goto LAB_1003f47ee;
                            iVar2 = game::BASType::GetRunBackward();
                        } else {
                            iVar2 = game::BASType::GetRunLeft();
                        }
                    } else {
                        iVar2 = game::BASType::GetRunRight();
                    }
                } else if (((MoveSpeed*)MoveSpeed::CRAWL == param_1) &&
                           (iVar2 = game::BASType::GetCrawlForward(), iVar2 != -1)) {
                    if ((local_34 < 0.7853982) ||
                        ((2.3561945 < local_34 || (iVar2 = game::BASType::GetCrawlRight(), iVar2 == -1)))) {
                        if ((-0.7853982 < local_34) ||
                            ((local_34 < -2.3561945 || (iVar2 = game::BASType::GetCrawlLeft(), iVar2 == -1)))) {
                            if (((local_34 <= 2.3561945) && (-2.3561945 <= local_34)) ||
                                (iVar2 = game::BASType::GetCrawlBackward(), iVar2 == -1))
                                goto LAB_1003f4829;
                            iVar2 = game::BASType::GetCrawlBackward();
                        } else {
                            iVar2 = game::BASType::GetCrawlLeft();
                        }
                    } else {
                        iVar2 = game::BASType::GetCrawlRight();
                    }
                } else if (((local_34 < 0.7853982) || (2.3561945 < local_34)) ||
                           (iVar2 = game::BASType::GetWalkRight(), iVar2 == -1)) {
                    if (((-0.7853982 < local_34) || (local_34 < -2.3561945)) ||
                        (iVar2 = game::BASType::GetWalkLeft(), iVar2 == -1)) {
                        if (((local_34 <= 2.3561945) && (-2.3561945 <= local_34)) ||
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
            (field_864, iVar2, false, false)->RequestDefaultAnimation();
        }
    }

    // 0x1003f4860, 432 bytes, placed by class name
    // PathingEntity::DoExactMove1(int)
    void PathingEntity::DoExactMove1(int param_1) {
        undefined1* this_00;
        uint uVar1;
        int iVar2;
        undefined8* puVar3;
        vector* pvVar4;
        float* pfVar5;
        EntityRoute* this_01;
        undefined4 in_register_00000034;
        type* ptVar6;
        Vector3T<double> local_58[24];
        undefined8 local_40;
        undefined4 local_38;
        float local_34;
        float local_30;
        float local_2c;

        ptVar6 = (type*)CONCAT44(in_register_00000034, param_1);
        uVar1 = field_3532;
        puVar3 = (undefined8*)GetTranslation();
        local_40 = *puVar3;
        local_38 = *(undefined4*)(puVar3 + 1);
        this_00 = &field_3504;
        pvVar4 = this_00->SSOBeginPtr(ptVar6);
        local_2c = *(float*)pvVar4;
        pvVar4 = local_40.SSOBeginPtr(ptVar6);
        local_30 = 1.0 / (float)(int)(uVar1 - param_1);
        local_2c = (local_2c - *(float*)pvVar4) * local_30;
        pvVar4 = local_40.SSOBeginPtr(ptVar6);
        *(float*)pvVar4 = local_2c + *(float*)pvVar4;
        pfVar5 = (float*)this_00->second();
        local_2c = *pfVar5;
        pfVar5 = (float*)local_40.second();
        local_2c = (local_2c - *pfVar5) * local_30;
        pfVar5 = (float*)local_40.second();
        *pfVar5 = local_2c + *pfVar5;
        iVar2 = GetHeightForLevel(this, field_3500, (Vector3T*)&local_40);
        local_34 = (float)iVar2;
        pfVar5 = (float*)this_00->y();
        local_2c = *pfVar5;
        pfVar5 = (float*)local_40.y();
        local_2c = (local_2c - *pfVar5) * local_30 + local_34;
        pfVar5 = (float*)local_40.y();
        *pfVar5 = local_2c;
        (&field_720, (Vector3T*)&field_3520)->SetXYZ();
        math::Vector3T<double>::Vector3T<float>(local_58, (Vector3T*)&local_40);
        (&field_736, (Vector3T*)local_58, 0, 0)->SetValue();
        this_01 = (EntityRoute*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(
            (unique_ptr<EntityRoute, std::default_delete<EntityRoute>>*)(field_552 + 160));
        this_01->ResetStalledTickCount();
        (field_552, field_3540)->SetFaceMovement();
        SetFacingGradual(this);
    }

    // 0x1003f4a10, 448 bytes, placed by class name
    // PathingEntity::DoExactMove2(int)
    void PathingEntity::DoExactMove2(int param_1) {
        undefined1* puVar1;
        uint uVar2;
        int iVar5;
        EntityRoute* this_00;
        math* this_01;
        Vector3T* extraout_RDX;
        undefined4 in_register_00000034;
        Vector3T* pVVar6;
        int iVar7;
        float in_XMM1_Da;
        undefined8 local_60;
        float local_58;
        undefined8 local_48;
        float local_40;
        math* local_38;

        pVVar6 = (Vector3T*)CONCAT44(in_register_00000034, param_1);
        uVar2 = field_3532;
        if ((int)uVar2 < param_1) {
            iVar7 = field_3536 - uVar2;
            local_38 = (math*)&field_3504;
            iVar5 = GetHeightForLevel(this, field_3500, (Vector3T*)local_38);
            field_3508 = (float)iVar5;
            puVar1 = &field_3520;
            iVar5 = GetHeightForLevel(this, field_3516, (Vector3T*)puVar1);
            field_3524 = (float)iVar5;
            in_XMM1_Da = (float)iVar7;
            local_48 = math::Lerp<math::Vector3T<float>, float>(local_38, (Vector3T*)puVar1, extraout_RDX,
                                                                (float)(int)(param_1 - uVar2) / in_XMM1_Da);
            local_40 = in_XMM1_Da;
            (&field_720, (Vector3T*)puVar1)->SetXYZ();
            math::Vector3T<double>::Vector3T<float>((Vector3T<double>*)&local_60, (Vector3T*)&local_48);
            (&field_736, (Vector3T*)&local_60, 0, 0)->SetValue();
            this_00 = (EntityRoute*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(
                (unique_ptr<EntityRoute, std::default_delete<EntityRoute>>*)(field_552 + 160));
            this_00->ResetStalledTickCount();
            SetFacingImmediate(this, field_3540);
            if (field_3536 != param_1) {
                pVVar6 = (Vector3T*)&field_3516;
                if ((game::CoordFine::operator==((CoordFine*)&field_3500, (CoordFine*)pVVar6) == '\0') || (iVar7 != 1))
                    goto LAB_1003f4b44;
            }
            pVVar6 = (Vector3T*)(ulong)(uint)param_1;
            CheckAnimationJoinsOnMovement(this, param_1);
        }
    LAB_1003f4b44:
        if ((int)field_3536 <= param_1) {
            this_01 = (math*)(&field_736)->get_overflow_allocator();
            local_60 = math::Vector3FromVector3T<double>(this_01, pVVar6);
            local_58 = in_XMM1_Da;
            if (!math::operator==((Vector3T*)&local_60, (Vector3T*)&field_3520)) {
                /* WARNING: Subroutine does not return */
                LogAssert("math::Vector3FromVector3T(m_apparentTranslation.GetEndValue()) == "
                          "m_exactMovePosition2.m_translation",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "entities/PathingEntity.cpp",
                          1407, (char*)0);
            }
            field_3532 = 4294967295;
            field_3536 = 4294967295;
            (&field_720, (Vector3T*)&field_3520)->SetXYZ();
        }
    }

    // 0x1003f4cd0, 128 bytes, placed by class name
    // PathingEntity::DestroyPendingSpotAnimations()
    void PathingEntity::DestroyPendingSpotAnimations() {
        bool bVar1;
        compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator>*
            pcVar2;
        unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>* this_00;
        compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator>*
            this_01;

        this_01 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                   eastl::allocator>*)(&field_4128)
                      ->HeapBeginPtr();
        pcVar2 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                  eastl::allocator>*)(&field_4128)
                     ->end();
        for (; this_01 != pcVar2; this_01 = this_01 + 32) {
            eastl::compressed_pair<eastl::string*, eastl::allocator>::first();
            this_00 = (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)
                eastl::compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator>::second(this_01);
            bVar1 = this_00->operator_cast_to_bool();
            if (bVar1) {
                std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>::reset(
                    this_00, (SpotAnimation*)0);
            }
        }
    }

    // 0x1003f4d50, 176 bytes, placed by class name
    // PathingEntity::DestroySpotAnimationType(int)
    void PathingEntity::DestroySpotAnimationType(int param_1) {
        int* piVar1;
        SpotAnimation* this_00;
        bool bVar2;
        int iVar3;
        compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator>*
            pcVar4;
        unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>* puVar5;
        compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator>*
            this_01;
        undefined1* this_02;

        this_02 = &field_4088;
        this_01 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                   eastl::allocator>*)this_02->HeapBeginPtr();
        pcVar4 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                  eastl::allocator>*)this_02->end();
        for (; this_01 != pcVar4; this_01 = this_01 + 16) {
            piVar1 = (int*)eastl::compressed_pair<eastl::string*, eastl::allocator>::first();
            puVar5 = (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)
                eastl::compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator>::second(this_01);
            bVar2 = puVar5->operator_cast_to_bool();
            if (bVar2) {
                this_00 = (SpotAnimation*)std::unique_ptr<
                              SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>::operator->(puVar5);
                iVar3 = this_00->GetEffectAnimID();
                if (iVar3 == param_1) {
                    puVar5 = (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)
                        eastl::vector_map<
                            int, std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>,
                            eastl::less<int>, eastl::allocator,
                            eastl::vector<
                                eastl::pair<int, std::unique_ptr<SpotAnimation,
                                                                 MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>>,
                                eastl::allocator>>::
                        operator[](
                            (vector_map<
                                int,
                                std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>,
                                eastl::less<int>, eastl::allocator,
                                eastl::vector<
                                    eastl::pair<int, std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::
                                                                                        UniquePoolDeleter>>,
                                    eastl::allocator>>*)this_02,
                            piVar1);
                    std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>::reset(
                        puVar5, (SpotAnimation*)0);
                }
            }
        }
    }

    // 0x1003f4e00, 176 bytes, placed by class name
    // PathingEntity::DestroyPendingSpotAnimationType(int)
    void PathingEntity::DestroyPendingSpotAnimationType(int param_1) {
        int* piVar1;
        SpotAnimation* this_00;
        bool bVar2;
        int iVar3;
        compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator>*
            pcVar4;
        unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>* puVar5;
        compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator>*
            this_01;
        undefined1* this_02;

        this_02 = &field_4128;
        this_01 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                   eastl::allocator>*)this_02->HeapBeginPtr();
        pcVar4 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                  eastl::allocator>*)this_02->end();
        for (; this_01 != pcVar4; this_01 = this_01 + 32) {
            piVar1 = (int*)eastl::compressed_pair<eastl::string*, eastl::allocator>::first();
            puVar5 = (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)
                eastl::compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator>::second(this_01);
            bVar2 = puVar5->operator_cast_to_bool();
            if (bVar2) {
                this_00 = (SpotAnimation*)std::unique_ptr<
                              SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>::operator->(puVar5);
                iVar3 = this_00->GetEffectAnimID();
                if (iVar3 == param_1) {
                    puVar5 = (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)
                        eastl::vector_map<int, PendingSpotAnimation, eastl::less<int>, eastl::allocator,
                                          eastl::vector<eastl::pair<int, PendingSpotAnimation>, eastl::allocator>>::
                        operator[](
                            (vector_map<int, PendingSpotAnimation, eastl::less<int>, eastl::allocator,
                                        eastl::vector<eastl::pair<int, PendingSpotAnimation>, eastl::allocator>>*)
                                this_02,
                            piVar1);
                    std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>::reset(
                        puVar5, (SpotAnimation*)0);
                }
            }
        }
    }

    // 0x1003f4eb0, 160 bytes, placed by class name
    // PathingEntity::TranslateParticles(math::Vector3T<float> const&)
    void PathingEntity::TranslateParticles(Vector3T* param_1) {
        SpotAnimation* this_00;
        bool bVar1;
        compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator>*
            pcVar2;
        unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>* this_01;
        compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator>*
            this_02;

        (field_864, param_1)->TranslateParticles();
        this_02 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                   eastl::allocator>*)(&field_4088)
                      ->HeapBeginPtr();
        pcVar2 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                  eastl::allocator>*)(&field_4088)
                     ->end();
        for (; this_02 != pcVar2; this_02 = this_02 + 16) {
            eastl::compressed_pair<eastl::string*, eastl::allocator>::first();
            this_01 = (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)
                eastl::compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator>::second(this_02);
            bVar1 = this_01->operator_cast_to_bool();
            if (bVar1) {
                this_00 = (SpotAnimation*)std::unique_ptr<
                              SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>::operator->(this_01);
                this_00->TranslateParticles(param_1);
            }
        }
    }

    // 0x1003f5000, 240 bytes, placed by class name
    // PathingEntity::OnOverrideAnimationFinished(int)
    void PathingEntity::OnOverrideAnimationFinished(int param_1) {
        unique_ptr<EntityRoute, std::default_delete<EntityRoute>>* this_00;
        char cVar1;
        int* piVar2;
        int* piVar3;
        EntityRoute* pEVar4;
        NXTPixToolkit* this_01;
        long* plVar5;
        Vector3T<double> local_40[24];

        piVar2 = (int*)(&field_808)->HeapBeginPtr();
        piVar3 = (int*)(&field_808)->end();
        do {
            if (piVar2 == piVar3) {
            LAB_1003f5058:
                cVar1 = IsDoingAnExactMove(this);
                if (cVar1 == '\0') {
                    this_00 = (unique_ptr<EntityRoute, std::default_delete<EntityRoute>>*)(field_552 + 160);
                    pEVar4 = (EntityRoute*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(
                        this_00);
                    cVar1 = pEVar4->HasMovement();
                    if (cVar1 != '\0') {
                        pEVar4 =
                            (EntityRoute*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(
                                this_00);
                        this_01 = (NXTPixToolkit*)pEVar4->GetLastWaypoint();
                        plVar5 = (long*)this_01->GetScreen();
                        if ((undefined*)*plVar5 != MoveSpeed::STATIONARY) {
                            return;
                        }
                    }
                    math::Vector3T<double>::Vector3T<float>(local_40, (Vector3T*)&field_720);
                    (&field_736, (Vector3T*)local_40, 0, 0)->SetValue();
                    pEVar4 = (EntityRoute*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(
                        this_00);
                    pEVar4->ResetStalledTickCount();
                }
                return;
            }
            if (*piVar2 == param_1) {
                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                goto LAB_1003f5058;
            }
            piVar2 = piVar2 + 1;
        } while (true);
    }

    // 0x1003f51b0, 2448 bytes, placed by class name
    // PathingEntity::CalculateHillRotateTransform(int, int, int, int)
    void PathingEntity::CalculateHillRotateTransform(int param_1, int param_2, int param_3, int param_4) {
        undefined1* this_00;
        ulong uVar1;
        GraphNode* pGVar2;
        QuaternionT* pQVar3;
        vector* pvVar4;
        float* pfVar5;
        Vector3T* pVVar6;
        long* plVar7;
        char* pcVar8;
        float fVar9;
        undefined4 uVar10;
        uint extraout_XMM0_Db;
        ulong uVar11;
        uint extraout_XMM0_Dc;
        uint extraout_XMM0_Dc_00;
        uint extraout_XMM0_Dd;
        uint extraout_XMM0_Dd_00;
        float fVar12;
        float fVar13;
        ColourHSL local_1d8;
        ColourHSL local_1c8;
        allocator local_1b8[8];
        undefined1 local_1b0[12];
        uint uStack_1a4;
        uint uStack_1a0;
        uint uStack_19c;
        float local_198;
        uint uStack_194;
        uint uStack_190;
        uint uStack_18c;
        undefined1 local_188[16];
        float local_16c;
        float local_168;
        float local_164;
        ColourHSL local_158[2];
        undefined8 local_138;
        uint uStack_130;
        uint uStack_12c;
        ColourHSL local_128;
        SideBarData local_118;
        float local_fc;
        undefined8 local_f8;
        uint uStack_f0;
        uint uStack_ec;
        float local_e4;
        math local_e0;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = &field_3344;
        this_00->SetToIdentity();
        field_3408 = '\0';
        local_138._0_4_ = (float)param_1 * 0.5;
        local_188 = ZEXT416((uint)((float)param_2 * 0.5));
        local_138._4_4_ = extraout_XMM0_Db;
        uStack_130 = extraout_XMM0_Dc;
        uStack_12c = extraout_XMM0_Dd;
        new (&local_1d8) math::ColourHSL(0.0, 0.0, 1.0);
        pGVar2 = (GraphNode*)GetNode();
        pQVar3 = (QuaternionT*)pGVar2->GetRotation();
        math::Vector3T<float>::operator*=((Vector3T<float>*)&local_1d8, pQVar3);
        pvVar4 = local_1d8.SSOBeginPtr(pQVar3);
        local_f8._0_4_ = *(float*)pvVar4;
        pfVar5 = (float*)local_1d8.second();
        local_e4 = (float)atan2((float)local_f8, *pfVar5);
        local_f8._0_4_ = (float)::sin(local_e4);
        local_e4 = (float)::cos(local_e4);
        uStack_1a4 = local_138._4_4_ ^ 2147483648;
        uStack_1a0 = uStack_130 ^ 2147483648;
        uStack_19c = uStack_12c ^ 2147483648;
        uStack_194 = local_188._4_4_ ^ 2147483648;
        uStack_190 = local_188._8_4_ ^ 2147483648;
        uStack_18c = local_188._12_4_ ^ 2147483648;
        local_164 = (float)local_f8 * -(float)local_188._0_4_;
        local_16c = local_e4 * -(float)local_138;
        fVar12 = local_16c + local_164;
        local_198 = -(float)local_188._0_4_ * local_e4;
        local_1b0._8_4_ = -(float)local_138 * (float)local_f8;
        fVar9 = local_198 - (float)local_1b0._8_4_;
        local_fc = (float)GetRelativeFloorHeight((int)fVar12, (int)fVar9, 0);
        if (m_showHillRotateCorners != '\0') {
            pGVar2 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
                (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
            pVVar6 = (Vector3T*)pGVar2->GetWorldTranslation();
            fVar13 = local_fc;
            math::ColourHSL::ColourHSL(local_158, (float)(int)fVar12, local_fc, (float)(int)fVar9);
            local_e0._0_8_ = math::operator+(pVVar6, (Vector3T*)local_158);
            local_e0.field_8 = fVar13;
            plVar7 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar7 != (long*)0) {
                fVar9 = 200.0;
                new (&local_128) math::ColourHSL(0.0, 200.0, 0.0);
                local_158[0]._0_8_ = math::operator+((Vector3T*)&local_e0, (Vector3T*)&local_128);
                local_158[0].field_8 = fVar9;
                new (&local_118) oldscape::sidebars::SideBarData(-10420225, 1);
                (**(code**)(*plVar7 + 24))(plVar7, &local_e0, local_158, &local_118);
            }
        }
        local_168 = local_e4 * (float)local_138;
        fVar12 = local_164 + local_168;
        local_138._0_4_ = (float)local_138 * (float)local_f8;
        fVar9 = local_198 - (float)local_138;
        local_198 = (float)GetRelativeFloorHeight((int)fVar12, (int)fVar9, 0);
        if (m_showHillRotateCorners != '\0') {
            pGVar2 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
                (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
            pVVar6 = (Vector3T*)pGVar2->GetWorldTranslation();
            fVar13 = local_198;
            math::ColourHSL::ColourHSL(local_158, (float)(int)fVar12, local_198, (float)(int)fVar9);
            local_e0._0_8_ = math::operator+(pVVar6, (Vector3T*)local_158);
            local_e0.field_8 = fVar13;
            plVar7 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar7 != (long*)0) {
                fVar9 = 200.0;
                new (&local_128) math::ColourHSL(0.0, 200.0, 0.0);
                local_158[0]._0_8_ = math::operator+((Vector3T*)&local_e0, (Vector3T*)&local_128);
                local_158[0].field_8 = fVar9;
                new (&local_118) oldscape::sidebars::SideBarData(-10420225, 1);
                (**(code**)(*plVar7 + 24))(plVar7, &local_e0, local_158, &local_118);
            }
        }
        local_f8._0_4_ = (float)local_f8 * (float)local_188._0_4_;
        fVar12 = local_16c + (float)local_f8;
        local_e4 = local_e4 * (float)local_188._0_4_;
        fVar9 = local_e4 - (float)local_1b0._8_4_;
        uVar10 = GetRelativeFloorHeight((int)fVar12, (int)fVar9, 0);
        local_188._0_4_ = uVar10;
        if (m_showHillRotateCorners != '\0') {
            pGVar2 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
                (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
            pVVar6 = (Vector3T*)pGVar2->GetWorldTranslation();
            fVar13 = (float)local_188._0_4_;
            math::ColourHSL::ColourHSL(local_158, (float)(int)fVar12, (float)local_188._0_4_, (float)(int)fVar9);
            local_e0._0_8_ = math::operator+(pVVar6, (Vector3T*)local_158);
            local_e0.field_8 = fVar13;
            plVar7 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar7 != (long*)0) {
                fVar9 = 200.0;
                new (&local_128) math::ColourHSL(0.0, 200.0, 0.0);
                local_158[0]._0_8_ = math::operator+((Vector3T*)&local_e0, (Vector3T*)&local_128);
                local_158[0].field_8 = fVar9;
                new (&local_118) oldscape::sidebars::SideBarData(-10420225, 1);
                (**(code**)(*plVar7 + 24))(plVar7, &local_e0, local_158, &local_118);
            }
        }
        fVar9 = local_168 + (float)local_f8;
        fVar12 = local_e4 - (float)local_138;
        local_f8._0_4_ = (float)GetRelativeFloorHeight((int)fVar9, (int)fVar12, 0);
        if (m_showHillRotateCorners != '\0') {
            pGVar2 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
                (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
            pVVar6 = (Vector3T*)pGVar2->GetWorldTranslation();
            fVar13 = (float)local_f8;
            new (&local_e0) math::ColourHSL((float)(int)fVar9, (float)local_f8, (float)(int)fVar12);
            local_128._0_8_ = math::operator+(pVVar6, (Vector3T*)&local_e0);
            local_128.field_8 = fVar13;
            plVar7 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar7 != (long*)0) {
                fVar9 = 200.0;
                math::ColourHSL::ColourHSL(local_158, 0.0, 200.0, 0.0);
                local_e0._0_8_ = math::operator+((Vector3T*)&local_128, (Vector3T*)local_158);
                local_e0.field_8 = fVar9;
                new (&local_118) oldscape::sidebars::SideBarData(-10420225, 1);
                (**(code**)(*plVar7 + 24))(plVar7, &local_128, &local_e0, &local_118);
            }
            new (&local_e0) eastl::fixed_string<char, 128, true, eastl::allocator>();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true, eastl::allocator>>::
                append_sprintf((char*)&local_e0, "HillRotate [Wid=%d, Len=%d, LimX=%d, LimZ=%d]", (ulong)(uint)param_1,
                               (ulong)(uint)param_2, (ulong)(uint)param_3, (ulong)(uint)param_4);
            plVar7 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar7 != (long*)0) {
                pGVar2 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
                    (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
                pVVar6 = (Vector3T*)pGVar2->GetWorldTranslation();
                uVar10 = 1133903872;
                new (&local_1c8) math::ColourHSL(0.0, 300.0, 0.0);
                local_118._0_8_ = math::operator+(pVVar6, (Vector3T*)&local_1c8);
                local_118._8_4_ = uVar10;
                pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::allocator::allocator(local_1b8, "EASTL basic_string");
                new (local_158) eastl::string(pcVar8, local_1b8);
                new (local_1b0) oldscape::sidebars::SideBarData(-8323073, 1);
                (**(code**)(*plVar7 + 136))(plVar7, &local_118, local_158, local_1b0);
                local_158->~basic_string();
            }
            /* WARNING: Subroutine does not return */
            local_e0.~fixed_string();
        }
        local_e4 = (float)eastl::max_alt(local_fc, local_198);
        local_1b0._8_4_ = eastl::max_alt((float)local_188._0_4_, (float)local_f8);
        local_f8._0_4_ = (float)eastl::max_alt(local_198, (float)local_f8);
        local_138._0_4_ = (float)eastl::max_alt(local_fc, (float)local_188._0_4_);
        if ((uint)param_2 != 0) {
            fVar9 = (float)param_2;
            fVar12 = (float)atan2(local_e4 - (float)local_1b0._8_4_, (float)param_2);
            fVar9 = (float)fmod(fVar12, fVar9);
            if (fVar9 != 0.0) {
                if ((uint)param_3 != 0) {
                    local_e4 = fVar9;
                    fVar12 = (float)math::conversion::JagexAngleToRadians((uint)param_3);
                    if (local_e4 <= 3.1415927) {
                        fVar9 = local_e4;
                        if (local_e4 <= fVar12)
                            goto LAB_1003f5a00;
                    } else {
                        fVar12 = (float)eastl::min<float>(local_e4, 6.2831855 - fVar12);
                    }
                    fVar9 = fVar12;
                }
            LAB_1003f5a00:
                math::Matrix33RotationX<float>(&local_e0, fVar9);
                math::Matrix44T<float>::operator*=((Matrix44T<float>*)this_00, (Matrix33T*)&local_e0);
                field_3408 = '\x01';
            }
        }
        local_f8 = CONCAT44(local_f8._4_4_, (float)local_f8);
        if ((uint)param_1 == 0)
            goto LAB_1003f5ae7;
        fVar9 = (float)param_1;
        fVar12 = (float)atan2((float)local_138 - (float)local_f8, (float)param_1);
        uVar11 = fmod(fVar12, fVar9);
        uVar1 = CONCAT44(local_f8._4_4_, (float)local_f8);
        local_f8 = uVar1;
        if ((float)uVar11 == 0.0)
            goto LAB_1003f5ae7;
        local_f8 = uVar11 ^ 9223372039002259456;
        local_f8._0_4_ = (float)local_f8;
        if ((uint)param_4 != 0) {
            uStack_f0 = extraout_XMM0_Dc_00 ^ 2147483648;
            uStack_ec = extraout_XMM0_Dd_00 ^ 2147483648;
            local_138 = uVar11;
            fVar9 = (float)math::conversion::JagexAngleToRadians((uint)param_4);
            if (-3.1415927 <= (float)local_138) {
                uVar1 = local_f8;
                if ((float)local_f8 <= fVar9)
                    goto LAB_1003f5ac1;
            } else {
                fVar9 = (float)eastl::min<float>((float)local_f8, 6.2831855 - fVar9);
                uVar1 = local_f8;
            }
            local_f8._0_4_ = fVar9;
        }
    LAB_1003f5ac1:
        math::Matrix33RotationZ<float>(&local_e0, (float)local_f8);
        local_f8 = uVar1;
        math::Matrix44T<float>::operator*=((Matrix44T<float>*)this_00, (Matrix33T*)&local_e0);
        field_3408 = '\x01';
    LAB_1003f5ae7:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003f5bc0, 336 bytes, placed by class name
    // PathingEntity::SetTranslation(math::Vector3T<float> const&)
    void PathingEntity::SetTranslation(Vector3T* param_1) {
        undefined1* this_00;
        int iVar2;
        GraphicsApp* this_01;
        ulonglong uVar3;
        longlong lVar4;
        Vector3T* pVVar5;
        float fVar6;
        float in_XMM1_Da;
        Vector3T<double> local_68[24];
        undefined8 local_50[2];
        undefined8 local_40;
        undefined4 local_38;

        local_38 = *(undefined4*)(param_1 + 8);
        local_40 = *(undefined8*)param_1;
        fVar6 = (float)GetFloorHeight(param_1, 1);
        local_40 = CONCAT44(fVar6 + 5.0, (undefined4)local_40);
        (&field_720, (Vector3T*)&local_40)->SetXYZ();
        if ((field_864, field_800)->MayMove() == '\0') {
            return;
        }
        this_01 = (GraphicsApp*)BaseApp::GetAppInstance();
        iVar2 = this_01->GetMainLoopInterval();
        uVar3 = FrameTime::GetCurrentTimeNS();
        this_00 = &field_736;
        pVVar5 = (Vector3T*)this_00;
        local_68->GetValue((ulonglong)this_00);
        local_50[0] = math::Vector3FromVector3T<double>((math*)local_68, pVVar5);
        if (in_XMM1_Da == 0.0 && (float)local_50[0] == 0.0) {
            math::Vector3T<double>::Vector3T<float>(local_68, (Vector3T*)&local_40);
        } else {
            local_68._0_8_ = math::operator-((Vector3T*)&local_40, (Vector3T*)local_50);
            fVar6 = (float)local_68->Length();
            if (fVar6 < 64.0) {
                math::Vector3TFromVector3<double>((math*)local_68, (Vector3T*)&local_40);
                lVar4 = (ulong)(uint)(iVar2 * 2) * 1000000;
                goto LAB_1003f5cf4;
            }
            math::Vector3TFromVector3<double>((math*)local_68, (Vector3T*)&local_40);
        }
        lVar4 = 0;
        uVar3 = 0;
    LAB_1003f5cf4:
        this_00->SetValue(local_68, lVar4, uVar3);
        field_4170 = 1;
    }

    // 0x1003f5da0, 16 bytes, placed by class name
    // PathingEntity::GetTranslation() const
    undefined1* PathingEntity::GetTranslation() {
        return &field_720;
    }

    // 0x1003f5db0, 16 bytes, placed by class name
    // PathingEntity::SetTranslationY(float)
    void PathingEntity::SetTranslationY(float param_1) {
        m_translationY = param_1;
    }

    // 0x1003f5de0, 96 bytes, placed by class name
    // PathingEntity::SetFacingImmediate(float)
    void PathingEntity::SetFacingImmediate(float param_1) {
        GraphNode* this_00;
        QuaternionT<float> local_30[20];

        math::QuaternionT<float>::QuaternionT(local_30);
        local_30->FromAxisAngle(PTR_UP_100ee66d0, param_1);
        this_00 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
            (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
        this_00->SetRotation(local_30);
    }

    // 0x1003f5e60, 160 bytes, placed by class name
    // PathingEntity::CheckAnimationJoinsOnMovement(int)
    void PathingEntity::CheckAnimationJoinsOnMovement(int param_1) {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        AnimationWrapper* this_01;
        shared_ptr<game::AnimationWrapper>* this_02;
        AnimationWrapper* this_03;
        AnimationParameters* this_04;
        MapArea* this_05;
        int iVar1;
        int iVar2;
        uint uVar3;
        uint uVar4;
        undefined1* this_06;

        this_06 = field_864;
        iVar1 = this_06->GetDefaultAnimationSeqID();
        if (iVar1 != -1) {
            iVar1 = this_06->GetDefaultAnimationSeqID();
            iVar2 = this_06->GetOverrideAnimationSeqID();
            if (iVar1 == iVar2) {
                this_00 =
                    (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_06->GetOverrideAnimation();
                this_01 =
                    (AnimationWrapper*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                        this_00);
                this_02 = (shared_ptr<game::AnimationWrapper>*)this_06->GetDefaultAnimation();
                this_03 = (AnimationWrapper*)shared_ptr<game::AnimationWrapper>::operator->(this_02);
                this_04 = (AnimationParameters*)this_01->GetAnimationParameters();
                uVar3 = this_04->GetTicksThroughAnimation();
                this_05 = (MapArea*)this_01->GetAnimationParameters();
                uVar4 = this_05->GetAdvisedZoom();
                this_03->ResetToTime(param_1, uVar3, uVar4, 0);
            }
        }
    }

    // 0x1003f5f00, 432 bytes, placed by class name
    // PathingEntity::GetMaxRemoveRoofLevel(game::LinkMap const&, int, int, int, int)
    int PathingEntity::GetMaxRemoveRoofLevel(LinkMap* param_1, int param_2, int param_3, int param_4, int param_5) {
        int iVar1;
        uint uVar2;
        char cVar3;
        byte bVar4;
        int iVar5;
        char cVar6;
        uint unaff_R13D;
        int iVar7;
        uint uVar8;

        do {
            cVar6 = (char)unaff_R13D;
            bVar4 = (char)param_2 - 1;
            param_2 = (int)bVar4;
            if ((char)bVar4 < '\0') {
                iVar1 = 2;
                break;
            }
            iVar1 = 5;
            if (0 < param_5) {
                uVar8 = (uint)(char)bVar4;
                iVar7 = param_3;
                do {
                    iVar1 = 8;
                    if (param_5 < 1) {
                    joined_r0x0001003f6025:
                        if (0 < param_5)
                            goto LAB_1003f5f53;
                    } else {
                        uVar2 = param_1->GetTileLink(uVar8, iVar7, param_4);
                        unaff_R13D = unaff_R13D & 255;
                        if ((uVar2 & 4) != 0) {
                            unaff_R13D = uVar8;
                        }
                        if (uVar2 == 4294967295) {
                            unaff_R13D = 255;
                        }
                        if (((uVar2 & 4) != 0) || (iVar5 = param_4, uVar2 == 4294967295)) {
                            iVar1 = 1;
                            goto joined_r0x0001003f6025;
                        }
                        do {
                            iVar5 = iVar5 + 1;
                            if (param_5 + param_4 <= iVar5) {
                                iVar1 = 8;
                                goto joined_r0x0001003f604c;
                            }
                            uVar2 = param_1->GetTileLink(uVar8, iVar7, iVar5);
                            unaff_R13D = unaff_R13D & 255;
                            if ((uVar2 & 4) != 0) {
                                unaff_R13D = uVar8;
                            }
                            if (uVar2 == 4294967295) {
                                unaff_R13D = 255;
                            }
                        } while (((uVar2 & 4) == 0) && (uVar2 != 4294967295));
                        iVar1 = 1;
                    joined_r0x0001003f604c:
                        if (iVar5 < param_5 + param_4)
                            goto LAB_1003f5f53;
                    }
                    iVar7 = iVar7 + 1;
                } while (iVar7 < param_5 + param_3);
                iVar1 = 5;
            }
        LAB_1003f5f53:
            cVar6 = (char)unaff_R13D;
        } while (iVar1 == 5);
        cVar3 = -1;
        if (iVar1 != 2) {
            cVar3 = cVar6;
        }
        return (int)cVar3;
    }

    // 0x1003f60b0, 192 bytes, placed by class name
    // PathingEntity::RecalculateMaxRemoveRoofLevel()
    void PathingEntity::RecalculateMaxRemoveRoofLevel() {
        float fVar1;
        char cVar2;
        int iVar3;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        World* this_01;
        PathingEntity* this_02;
        LinkMap* pLVar4;
        vector* pvVar5;
        float* pfVar6;
        type* in_RSI;

        this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_232->GetActiveWorld();
        this_01 = (World*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        if (this_01 != (World*)0) {
            this_02 = (PathingEntity*)(*(code*)field_0[13])(this);
            pLVar4 = (LinkMap*)this_01->GetLinkMap();
            iVar3 = GetDuration();
            pvVar5 = this_02->SSOBeginPtr(in_RSI);
            fVar1 = *(float*)pvVar5;
            pfVar6 = (float*)this_02->second();
            cVar2 = GetMaxRemoveRoofLevel(this_02, pLVar4, iVar3, (int)(fVar1 * 0.0078125), (int)(*pfVar6 * 0.0078125),
                                          m_gridSize);
            if (cVar2 != -1) {
                SetMaximumRemoveRoofLevel((int)cVar2);
            }
            field_4170 = 0;
        }
    }

    // 0x1003f6170, 48 bytes, placed by class name
    // PathingEntity::TeleportFine(int, game::CoordFine const&, bool)
    void PathingEntity::TeleportFine(int param_1, CoordFine* param_2, bool param_3) {
        undefined3 in_register_00000009;

        (*(code*)field_0[47])(this, param_2, CONCAT31(in_register_00000009, param_3));
        CheckAnimationJoinsOnMovement(this, param_1);
    }

    // 0x1003f61a0, 752 bytes, placed by class name
    // PathingEntity::TeleportFine(game::CoordFine const&, bool)
    void PathingEntity::TeleportFine(CoordFine* param_1, bool param_2) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        uint uVar3;
        vector* pvVar4;
        float* pfVar5;
        long* plVar6;
        EntityRoute* this_01;
        Vector3T* pVVar7;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        AnimationWrapper* this_03;
        uint uVar8;
        int iVar9;
        undefined7 in_register_00000011;
        float fVar10;
        undefined8 local_a0;
        undefined4 local_98;
        undefined8 local_90[2];
        undefined8 local_80[2];
        undefined1 local_70[24];
        Vector3T* local_58;
        Vector3T* local_50;
        AnimatedModel* local_48;
        undefined8 local_40;
        float local_38;

        iVar9 = (int)CONCAT71(in_register_00000011, param_2);
        if (iVar9 == 0) {
            new (local_70) game::CoordFine();
            GetDestinationPositionFine(this, (CoordFine*)local_70);
            pVVar7 = (Vector3T*)(local_70 + 4);
            local_40 = math::operator-((Vector3T*)&param_1->field_4, pVVar7);
            uVar8 = param_1->field_0;
            uVar3 = GetDuration();
            if (uVar8 == uVar3) {
                pvVar4 = local_40.SSOBeginPtr(pVVar7);
                uVar8 = -(int)*(float*)pvVar4;
                if ((int)uVar8 < 0) {
                    uVar8 = (int)*(float*)pvVar4;
                }
                if (uVar8 < 1025) {
                    pfVar5 = (float*)local_40.second();
                    uVar8 = -(int)*pfVar5;
                    if ((int)uVar8 < 0) {
                        uVar8 = (int)*pfVar5;
                    }
                    if (uVar8 < 1025) {
                        AddRouteWaypointFine(this, param_1, (MoveSpeed*)MoveSpeed::WALK, true);
                        return;
                    }
                }
            }
        }
        local_48 = (AnimatedModel*)CONCAT44(local_48._4_4_, iVar9);
        plVar6 = (long*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(
            (unique_ptr<EntityRoute, std::default_delete<EntityRoute>>*)(field_552 + 160));
        (**(code**)(*plVar6 + 56))(plVar6);
        field_800 = 0;
        this_01 = (EntityRoute*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(
            (unique_ptr<EntityRoute, std::default_delete<EntityRoute>>*)(field_552 + 160));
        this_01->ResetStalledTickCount();
        SetBlendMode(param_1->field_0);
        local_38 = param_1->field_12;
        local_40._0_4_ = param_1->field_4;
        local_40._4_4_ = param_1->field_8;
        fVar10 = (float)GetFloorHeight(&param_1->field_4, 1);
        local_40 = CONCAT44(fVar10 + 5.0, (undefined4)local_40);
        local_50 = (Vector3T*)&field_720;
        local_98 = field_728;
        local_a0 = *(undefined8*)&field_720;
        local_50->SetXYZ((Vector3T*)&local_40);
        AddRouteWaypointFine(this, param_1, (MoveSpeed*)MoveSpeed::STATIONARY, true);
        local_58 = (Vector3T*)&field_736;
        pVVar7 = (Vector3T*)local_58->get_overflow_allocator();
        bVar1 = math::operator==(pVVar7, (Vector3T*)PTR_ZERO_100ee66c0);
        if (bVar1)
            goto LAB_1003f63fa;
        if ((char)local_48 != '\0') {
            this_00 = field_864;
            cVar2 = this_00->MayMove(field_800);
            if (cVar2 == '\0') {
                local_48 = (AnimatedModel*)this_00;
                this_02 =
                    (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_00->GetOverrideAnimation();
                this_03 =
                    (AnimationWrapper*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                        this_02);
                if ((this_03 != (AnimationWrapper*)0) && (cVar2 = this_03->ShouldBeFinishedOrLooping(), cVar2 == '\0'))
                    goto LAB_1003f639d;
                local_48->ResetOverrideAnimation();
            } else {
                this_00->AbortAnimationsOnMove();
            }
            bVar1 = true;
        }
    LAB_1003f639d:
        pVVar7 = (Vector3T*)&local_a0;
        local_70._0_8_ = math::operator-((Vector3T*)&param_1->field_4, pVVar7);
        if (field_68 == param_1->field_0) {
            pvVar4 = local_70->SSOBeginPtr(pVVar7);
            uVar8 = -(int)*(float*)pvVar4;
            if ((int)uVar8 < 0) {
                uVar8 = (int)*(float*)pvVar4;
            }
            if (uVar8 < 257) {
                pfVar5 = (float*)local_70->second();
                uVar8 = -(int)*pfVar5;
                if ((int)uVar8 < 0) {
                    uVar8 = (int)*pfVar5;
                }
                if (uVar8 < 257)
                    goto LAB_1003f63fa;
            }
        }
        bVar1 = true;
    LAB_1003f63fa:
        if (bVar1 == false) {
            FrameTime::GetCurrentTimeMS();
            pVVar7 = local_58;
            local_70->GetValue((ulonglong)local_58);
            local_80[0] = math::Vector3FromVector3T<double>((math*)local_70, pVVar7);
            local_90[0] = math::operator-(local_50, (Vector3T*)local_80);
            TranslateParticles(this, (Vector3T*)local_90);
        } else {
            math::Vector3T<double>::Vector3T<float>((Vector3T<double>*)local_70, local_50);
            local_58->SetValue(local_70, 0, 0);
        }
    }

    // 0x1003f65b0, 144 bytes, placed by class name
    // PathingEntity::GetOverlayHeightPathingEntity() const
    ulong PathingEntity::GetOverlayHeightPathingEntity() {
        undefined1* this_00;
        BASType* pBVar3;
        ulong uVar4;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        NXTPixToolkit* pNVar5;
        Vector2T<int>* this_02;
        float* pfVar6;

        this_00 = field_3856;
        if (this_00->operator_cast_to_bool()) {
            pBVar3 = (BASType*)shared_ptr<game::BASType>::operator->((shared_ptr<game::BASType>*)this_00);
            if (pBVar3->GetOverlayHeight() != -1) {
                pBVar3 = (BASType*)shared_ptr<game::BASType>::operator->((shared_ptr<game::BASType>*)this_00);
                uVar4 = pBVar3->GetOverlayHeight();
                return uVar4;
            }
        }
        this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_864->GetCurrentModel();
        pNVar5 = (NXTPixToolkit*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
        if (pNVar5 == (NXTPixToolkit*)0) {
            uVar4 = 200;
        } else {
            pNVar5 = (NXTPixToolkit*)pNVar5->GetScreen();
            this_02 = (Vector2T<int>*)pNVar5->GetScreen();
            pfVar6 = (float*)this_02->y();
            uVar4 = (ulong)(uint)(int)*pfVar6;
        }
        return uVar4;
    }

    // 0x1003f6650, 912 bytes, placed by class name
    // PathingEntity::RequestAnimationInner(std::array<int, 4ul> const&, int, bool, unsigned int, unsigned int)
    /* PathingEntity::RequestAnimationInner(std::array<int, 4ul> const&, int, bool, unsigned int,
   unsigned int) */

    void PathingEntity::RequestAnimationInner(array* param_1, int param_2, bool param_3, uint param_4, uint param_5) {
        ConfigProvider* this_00;
        PathingEntity* pPVar1;
        char cVar2;
        bool bVar3;
        uint uVar4;
        uint uVar5;
        uint uVar6;
        undefined4 uVar7;
        int iVar8;
        undefined8 uVar9;
        uint* puVar10;
        shared_ptr* psVar11;
        SeqType* pSVar12;
        int* piVar13;
        EntityRoute* this_01;
        undefined4* puVar14;
        shared_ptr* psVar15;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        NXTPixToolkit* this_03;
        shared_ptr<game::SeqType>* this_04;
        undefined7 in_register_00000009;
        undefined1* this_05;
        ulong uVar16;
        vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>* this_06;
        shared_ptr* psVar17;
        shared_ptr local_80;
        vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>* local_70;
        shared_ptr local_68;
        undefined4 local_58;
        array* local_50;
        uint local_38;
        uint local_34;

        local_58 = (undefined4)CONCAT71(in_register_00000009, param_3);
        this_06 = (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)&field_808;
        psVar11 = (shared_ptr*)param_1;
        cVar2 = this_06->empty();
        local_50 = param_1;
        if (cVar2 == '\0') {
            psVar17 = (shared_ptr*)0;
            do {
                psVar15 = psVar17;
                piVar13 = (int*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        this_06, (ulong)psVar15);
                iVar8 = *piVar13;
                psVar11 = psVar15;
                piVar13 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)param_1, (ulong)psVar15);
                if (iVar8 != *piVar13)
                    goto LAB_1003f6691;
                psVar17 = (shared_ptr*)&psVar15->field_1;
            } while (&psVar15->field_1 != (undefined1*)4);
            this_02 =
                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(((PathingEntity*)this)->field_864)
                    ->GetOverrideAnimation();
            this_03 =
                (NXTPixToolkit*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_02);
            if ((this_03 != (NXTPixToolkit*)0) && (cVar2 = this_03->IsReady(), cVar2 != '\0')) {
                this_04 = (shared_ptr<game::SeqType>*)this_03->GetScreen();
                pSVar12 = (SeqType*)shared_ptr<game::SeqType>::operator->(this_04);
                iVar8 = pSVar12->GetDuplicateBehaviour();
                if (iVar8 == 2) {
                    this_03->ResetLoopCounter();
                } else if (iVar8 == 1) {
                    psVar11 = (shared_ptr*)(ulong)param_4;
                    this_03->Reset(param_4, (uint)param_2);
                }
            }
            param_1 = local_50;
            if ((shared_ptr*)2 < psVar15) {
                return;
            }
        }
    LAB_1003f6691:
        uVar9 = this_06->empty();
        local_38 = (uint)uVar9;
        local_34 = (uint)CONCAT71((int7)((ulong)uVar9 >> 8), 1);
        psVar17 = (shared_ptr*)0;
        uVar5 = 0;
        local_70 = this_06;
        do {
            new (&local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(psVar11);
            puVar10 = (uint*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)param_1, (ulong)psVar17);
            uVar4 = *puVar10;
            psVar11 = (shared_ptr*)(ulong)uVar4;
            if (uVar4 != 4294967295) {
                psVar11 = game::ConfigProvider::GetConfig<game::SeqType>(((PathingEntity*)this)->field_224, uVar4,
                                                                         (DataStatus**)0);
                shared_ptr<game::SeqType>::operator=((shared_ptr<game::SeqType>*)&local_68, psVar11);
                bVar3 = shared_ptr::operator_cast_to_bool(&local_68);
                if (bVar3) {
                    pSVar12 = (SeqType*)shared_ptr<game::SeqType>::operator->((shared_ptr<game::SeqType>*)&local_68);
                    uVar4 = pSVar12->GetPriority();
                    psVar11 = (shared_ptr*)(ulong)uVar4;
                    uVar5 = eastl::max<unsigned int>(uVar5, uVar4);
                }
                local_34 = 0;
            }
            if ((local_38 & 1) == 0) {
                new (&local_80) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(psVar11);
                psVar11 = psVar17;
                piVar13 = (int*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        this_06, (ulong)psVar17);
                if (*piVar13 != -1) {
                    this_00 = ((PathingEntity*)this)->field_224;
                    piVar13 = (int*)
                        eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](this_06, (ulong)psVar17);
                    psVar11 = game::ConfigProvider::GetConfig<game::SeqType>(this_00, *piVar13, (DataStatus**)0);
                    shared_ptr<game::SeqType>::operator=((shared_ptr<game::SeqType>*)&local_80, psVar11);
                }
                bVar3 = shared_ptr::operator_cast_to_bool(&local_80);
                uVar6 = 0;
                uVar4 = 0;
                if (bVar3) {
                    pSVar12 = (SeqType*)shared_ptr<game::SeqType>::operator->((shared_ptr<game::SeqType>*)&local_80);
                    uVar4 = pSVar12->GetPriority();
                }
                bVar3 = shared_ptr::operator_cast_to_bool(&local_68);
                if (bVar3) {
                    pSVar12 = (SeqType*)shared_ptr<game::SeqType>::operator->((shared_ptr<game::SeqType>*)&local_68);
                    uVar6 = pSVar12->GetPriority();
                }
                local_38 = local_38 & 255;
                if (uVar4 <= uVar6) {
                    local_38 = 1;
                    uVar5 = uVar6;
                }
                local_80.~shared_ptr();
                this_06 = local_70;
                param_1 = local_50;
            }
            local_68.~shared_ptr();
            pPVar1 = (PathingEntity*)this;
            psVar17 = (shared_ptr*)&psVar17->field_1;
        } while (psVar17 != (shared_ptr*)4);
        if ((((byte)local_38 | (byte)local_34) & 1) != 0) {
            if ((char)local_58 != '\0') {
                this_01 = (EntityRoute*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(
                    (unique_ptr<EntityRoute, std::default_delete<EntityRoute>>*)(((PathingEntity*)this)->field_552 +
                                                                                 160));
                uVar7 = this_01->Length();
                pPVar1->field_800 = uVar7;
            }
            if ((local_34 & 1) == 0) {
                this_05 = ((PathingEntity*)this)->field_864;
                this_05->SetOverrideDelay((uint)param_2);
                this_05->SetOverrideSourceTicks(param_4, param_5);
                this_05->SetOverridePriority(uVar5);
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::resize(
                    (ulong)this_06);
                uVar16 = 0;
                do {
                    puVar14 = (undefined4*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)param_1, uVar16);
                    uVar7 = *puVar14;
                    puVar14 = (undefined4*)
                        eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](this_06, uVar16);
                    *puVar14 = uVar7;
                    uVar16 = uVar16 + 1;
                    param_1 = local_50;
                } while (uVar16 != 4);
            } else {
                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                (((PathingEntity*)this)->field_864)->ResetOverrideAnimation();
            }
        }
    }

    // 0x1003f6c40, 16 bytes, placed by class name
    // PathingEntity::UpdateAudio()
    void PathingEntity::UpdateAudio() {
        (&field_8)->UpdateAudio();
    }

    // 0x1003f6c60, 560 bytes, placed by class name
    // PathingEntity::MainLogic(graphics::RT7Core&, unsigned int, math::Matrix44T<float> const&)
    void PathingEntity::MainLogic(RT7Core* param_1, uint param_2, Matrix44T* param_3) {
        bool bVar1;
        int iVar3;
        int iVar4;
        uint uVar5;
        long* plVar6;
        GraphNode* this_00;
        Matrix44T* pMVar7;
        shared_ptr* this_01;
        shared_ptr<game::World>* this_02;
        World* this_03;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        long lVar8;
        Model* pMVar9;
        IrradianceEffect* this_05;
        GraphicsApp* pGVar10;
        ModelUpdateManager* this_06;
        Vector4T* pVVar11;
        undefined1 local_d8[112];
        undefined1 local_68[32];
        Matrix44T* local_48;
        AnimatedModel* local_40;

        bVar1 = field_3896->operator_cast_to_bool();
        if (bVar1) {
            plVar6 = (long*)shared_ptr<game::RT5AnimationResourceManager>::operator->(
                (shared_ptr<game::RT5AnimationResourceManager>*)field_3896);
            (**(code**)(*plVar6 + 16))(plVar6);
        }
        bVar1 = field_3912->operator_cast_to_bool();
        if (bVar1) {
            plVar6 = (long*)shared_ptr<graphics::AnimationStateSystem>::operator->(
                (shared_ptr<graphics::AnimationStateSystem>*)field_3912);
            (**(code**)(*plVar6 + 64))(plVar6, param_2);
        }
        (*(code*)field_0[39])(this);
        local_68._16_8_ = GetSmoothPosition(this);
        this_00 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
            (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
        this_00->SetTranslation((Vector3T*)(local_68 + 16));
        if ((*(code*)field_0[40])(this) == '\0') {
            (*(code*)field_0[64])(this);
            pMVar7 = (Matrix44T*)CalculateWorldTransformationMatrix(this);
            this_01 = (shared_ptr*)field_864->GetCurrentModel();
            bVar1 = shared_ptr::operator_cast_to_bool(this_01);
            if (bVar1) {
                local_48 = pMVar7;
                local_40 = (AnimatedModel*)field_864;
                new (local_68) game::CoordFine();
                GetPositionFine(this, (CoordFine*)local_68);
                this_02 = (shared_ptr<game::World>*)GetWorld();
                this_03 = (World*)shared_ptr<game::World>::operator->(this_02);
                iVar3 = local_68->GetMapSquareX();
                iVar4 = local_68->GetMapSquareZ();
                this_04 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_03->GetMapSquare(
                    iVar3, iVar4);
                lVar8 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_04);
                if (lVar8 != 0) {
                    pMVar9 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_01);
                    this_05 = (IrradianceEffect*)pMVar9->GetIrradianceEffect();
                    local_d8->GetIrradianceSHConsts();
                    this_05->SetCoefficients(local_d8);
                }
                pGVar10 = (GraphicsApp*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_01);
                iVar3 = GetDuration();
                pGVar10->SetSelectionStart(iVar3);
                pGVar10 = (GraphicsApp*)pGVar10->Instance();
                uVar5 = pGVar10->GetFrameCount();
                local_40->SetWorldTransform(local_48, uVar5);
                uVar5 = param_2;
                if (field_4170 != '\0') {
                    RecalculateMaxRemoveRoofLevel(this);
                }
                if (((field_540 <= 0.0) || (uVar5 <= field_544)) || (field_548 <= uVar5)) {
                    pVVar11 = (Vector4T*)PTR_ZERO_100ee6708;
                } else {
                    pVVar11 = (Vector4T*)&field_528;
                }
                pMVar9 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_01);
                pMVar9->SetTint(pVVar11);
                this_06 = (ModelUpdateManager*)pMVar9->Instance();
                this_06->AddToUpdateList(this_01);
            }
        }
    }

    // 0x1003f6e90, 96 bytes, placed by class name
    // PathingEntity::SetupTint(unsigned int, unsigned int, unsigned int, unsigned int)
    void PathingEntity::SetupTint(uint param_1, uint param_2, uint param_3, uint param_4) {
        undefined8 local_28[2];

        field_544 = param_1;
        field_548 = param_2;
        local_28[0] = math::Colour3FromR8G8B8A8(param_3);
        (&field_528, (Vector3T*)local_28, (float)param_4 * 0.0078125)->Set();
    }

    // 0x1003f6ef0, 176 bytes, placed by class name
    // PathingEntity::GatherDrawableElements(graphics::DrawableQueue&, graphics::RT7Core&, math::Matrix44T<float> const&, graphics::SceneViewData const&, graphics::EffectManager const&)
    void PathingEntity::GatherDrawableElements(DrawableQueue* param_1, RT7Core* param_2, Matrix44T* param_3,
                                               SceneViewData* param_4, EffectManager* param_5) {
        byte bVar2;
        int iVar3;
        Vector3T* pVVar4;

        if ((((*(code*)field_0[35])() != '\0') && (m_worldPriority != -1)) && (m_hiddenByOtherEntity == '\0')) {
            bVar2 = IsNonCentredEntity(this);
            iVar3 = GetGridSize(this);
            pVVar4 = (Vector3T*)GetWorldPosition();
            (field_864, pVVar4, (uint)bVar2 + iVar3, (uint)bVar2 + iVar3)->SetPointLightBounds();
            (field_864, param_1, param_2, param_4, param_5)->GatherDrawableElements();
        }
    }

    // 0x1003f6fa0, 128 bytes, placed by class name
    // PathingEntity::IsNonCentredEntity()
    ulong PathingEntity::IsNonCentredEntity() {
        uint uVar1;
        Layout* this_00;
        vector* pvVar2;
        float* pfVar3;
        type* in_RSI;
        undefined8 unaff_R14;
        ulong uVar4;

        this_00 = (Layout*)GetWorldPosition();
        uVar1 = GetGridSize(this);
        pvVar2 = eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
        uVar4 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
        if ((uVar1 & 1) == 0) {
            if ((((int)*(float*)pvVar2 & 127U) != 0) ||
                (pfVar3 = (float*)this_00->second(), ((int)*pfVar3 & 127U) != 0))
                goto LAB_1003f7008;
        } else if ((((int)*(float*)pvVar2 & 127U) != 64) ||
                   (pfVar3 = (float*)this_00->second(), ((int)*pfVar3 & 127U) != 64))
            goto LAB_1003f7008;
        uVar4 = 0;
    LAB_1003f7008:
        return uVar4 & 4294967295;
    }

    // 0x1003f7020, 1328 bytes, placed by class name
    // PathingEntity::AddPickableEntity(game::World&, math::Matrix44T<float> const&)
    void PathingEntity::AddPickableEntity(World* param_1, Matrix44T* param_2) {
        undefined1* this_00;
        PathingEntity* pPVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        SceneManager* pSVar5;
        Minimap* this_01;
        GraphNode* pGVar6;
        AABB* pAVar7;
        Matrix44T* pMVar8;
        long* plVar9;
        shared_ptr<game::World>* this_02;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_03;
        CoordMapSquare* pCVar10;
        CoordMapSquare* this_04;
        vector* pvVar11;
        float* pfVar12;
        char* pcVar13;
        uint uVar14;
        Matrix44T* pMVar15;
        uint uVar16;
        undefined4 uVar17;
        float fVar18;
        shared_ptr local_1c8[2];
        Vector2T<int> local_1a8[8];
        undefined8 local_1a0[2];
        allocator local_190[8];
        undefined1 local_188[16];
        Matrix44T* local_178;
        PathingEntity* local_170;
        Matrix44T* local_168;
        shared_ptr local_160[18];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar2 = (*(code*)field_0[35])();
        if (cVar2 != '\0') {
            pSVar5 = (SceneManager*)param_1->size();
            this_01 = (Minimap*)pSVar5->GetGameSceneRect();
            local_168 = (Matrix44T*)&field_76;
            local_178 = (Matrix44T*)param_1->GetLastCameraProjectionMatrix();
            local_188._8_8_ = param_1->GetLastViewProjectionMatrix();
            iVar3 = this_01->GetPos();
            local_170 = this;
            iVar4 = this_01->GetLevel();
            pGVar6 = (GraphNode*)local_170->GetNode();
            pAVar7 = (AABB*)pGVar6->GetWorldAABB();
            local_168->FillFromAABB(local_178, local_188._8_8_, iVar3, iVar4, pAVar7);
            this_00 = &local_170->field_100;
            local_168 = (Matrix44T*)param_1->GetLastCameraViewMatrix();
            local_178 = (Matrix44T*)param_1->GetLastCameraProjectionMatrix();
            local_188._8_8_ = param_1->GetLastViewProjectionMatrix();
            iVar3 = this_01->GetPos();
            iVar4 = this_01->GetLevel();
            pGVar6 = (GraphNode*)local_170->GetNode();
            pAVar7 = (AABB*)pGVar6->GetWorldAABB();
            pPVar1 = local_170;
            pMVar15 = local_168;
            cVar2 = this_00->Set(local_168, local_178, local_188._8_8_, iVar3, iVar4, pAVar7);
            if (cVar2 != '\0') {
                if (game::World::m_debugPicking != '\0') {
                    pGVar6 = (GraphNode*)pPVar1->GetNode();
                    pMVar8 = (Matrix44T*)pGVar6->GetWorldAABB();
                    plVar9 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                    if (plVar9 != (long*)0) {
                        new (local_160) oldscape::sidebars::SideBarData(-12566273, 3);
                        (**(code**)(*plVar9 + 72))(plVar9, pMVar8, local_160);
                        pMVar15 = pMVar8;
                    }
                    math::Vector2T<int>::Vector2T(local_1a8);
                    this_02 = (shared_ptr<game::World>*)local_170->GetWorld();
                    this_03 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                         eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                         eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                                  shared_ptr<game::World>::operator->(this_02);
                    pSVar5 = (SceneManager*)eastl::hashtable<
                        long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                        eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                        eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                        eastl::prime_rehash_policy, false, true, true>::size(this_03);
                    pCVar10 = (CoordMapSquare*)pSVar5->GetGameSceneRect();
                    iVar3 = pCVar10->GetX();
                    local_168._0_4_ = (float)iVar3;
                    this_04 = (CoordMapSquare*)this_00->SSOBeginPtr(pMVar15);
                    iVar3 = this_04->GetX();
                    local_168._0_4_ = (float)iVar3 + local_168._0_4_;
                    pvVar11 = local_1a8->SSOBeginPtr(pMVar15);
                    *(float*)pvVar11 = local_168._0_4_;
                    iVar3 = pCVar10->GetZ();
                    local_168._0_4_ = (float)iVar3;
                    pCVar10 = (CoordMapSquare*)this_00->SSOBeginPtr(pMVar15);
                    iVar3 = pCVar10->GetZ();
                    local_168._0_4_ = (float)iVar3 + local_168._0_4_;
                    pfVar12 = (float*)local_1a8->y();
                    *pfVar12 = local_168._0_4_;
                    iVar3 = this_00->GetPos();
                    plVar9 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                    if (plVar9 != (long*)0) {
                        local_168._0_4_ = (float)iVar3;
                        new (local_160) oldscape::sidebars::SideBarData(1077952767, 0);
                        (**(code**)(*plVar9 + 160))(local_168._0_4_, plVar9, local_1a8, 1, local_160);
                    }
                    new (local_160) eastl::fixed_string<char, 256, true, eastl::allocator>();
                    pPVar1 = local_170;
                    pGVar6 = (GraphNode*)local_170->GetNode();
                    pAVar7 = (AABB*)pGVar6->GetWorldAABB();
                    uVar17 = pAVar7->GetWidth();
                    local_168 = (Matrix44T*)CONCAT44(local_168._4_4_, uVar17);
                    pGVar6 = (GraphNode*)pPVar1->GetNode();
                    pAVar7 = (AABB*)pGVar6->GetWorldAABB();
                    uVar17 = pAVar7->GetHeight();
                    local_178 = (Matrix44T*)CONCAT44(local_178._4_4_, uVar17);
                    pGVar6 = (GraphNode*)pPVar1->GetNode();
                    pAVar7 = (AABB*)pGVar6->GetWorldAABB();
                    uVar16 = (uint)local_168._0_4_;
                    uVar14 = (uint)local_178._0_4_;
                    fVar18 = (float)pAVar7->GetLength();
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                        sprintf((char*)local_160, "Pick[PathingEntity] [aabb %d x %d x %d]", (ulong)uVar16,
                                (ulong)uVar14, (ulong)(uint)(int)fVar18);
                    plVar9 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                    if (plVar9 != (long*)0) {
                        pGVar6 = (GraphNode*)pPVar1->GetNode();
                        pAVar7 = (AABB*)pGVar6->GetWorldAABB();
                        local_1a0[0] = pAVar7->GetCentrePos();
                        pcVar13 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        eastl::allocator::allocator(local_190, "EASTL basic_string");
                        new (local_1c8) eastl::string(pcVar13, local_190);
                        new (local_188) oldscape::sidebars::SideBarData(1077952767, 0);
                        (**(code**)(*plVar9 + 136))(plVar9, local_1a0, local_1c8, local_188);
                        local_1c8->~basic_string();
                    }
                    /* WARNING: Subroutine does not return */
                    local_160->~fixed_string();
                }
                local_1c8->shared_from_this();
                shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider,
                                                                            void>(
                    (shared_ptr<oldscape::RSevenDebugPresetProvider>*)local_160, local_1c8);
                param_1->AddPickableEntity(local_160);
                local_160->~shared_ptr();
                local_1c8->~shared_ptr();
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003f7550, 304 bytes, placed by class name
    // PathingEntity::CanRender() const
    undefined8 PathingEntity::CanRender() {
        uint uVar1;
        char cVar2;
        int iVar4;
        int iVar5;
        int iVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        Model* this_01;
        shared_ptr* this_02;
        World* pWVar7;
        RemoveRoof* this_03;
        Vector3T* pVVar8;
        undefined1 local_48[32];

        this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_864->GetCurrentModel();
        this_01 = (Model*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        if (((this_01 != (Model*)0) && (cVar2 = (*(code*)field_0[40])(this), cVar2 == '\0')) &&
            (iVar4 = this_01->GetTotalBatchCount(), iVar4 != 0)) {
            this_02 = (shared_ptr*)GetWorld();
            if (!shared_ptr::operator_cast_to_bool(this_02)) {
                return 0;
            }
            pWVar7 = (World*)shared_ptr<game::World>::operator->((shared_ptr<game::World>*)this_02);
            cVar2 = pWVar7->IsRemoveRoofSelective();
            if (cVar2 == '\0') {
                iVar4 = GetDuration();
                iVar5 = GetWrapMode();
                pWVar7 = (World*)shared_ptr<game::World>::operator->((shared_ptr<game::World>*)this_02);
                iVar6 = pWVar7->GetMaxRenderLevel();
                cVar2 = game::LinkConstants::IsAffectedByMaxRenderLevel(iVar4, iVar5, iVar6);
            } else {
                pWVar7 = (World*)shared_ptr<game::World>::operator->((shared_ptr<game::World>*)this_02);
                this_03 = (RemoveRoof*)pWVar7->GetRemoveRoof();
                cVar2 = this_03->AnyRoofRemoved();
                if (cVar2 == '\0') {
                    return 1;
                }
                uVar1 = field_68;
                pVVar8 = (Vector3T*)GetWorldPosition();
                new (local_48) game::CoordFine(uVar1, pVVar8);
                new ((local_48 + 16)) game::CoordGrid(local_48);
                cVar2 = this_03->IsRoofRemoved((CoordGrid*)(local_48 + 16));
            }
            if (cVar2 == '\0') {
                return 1;
            }
        }
        return 0;
    }

    // 0x1003f7680, 128 bytes, placed by class name
    // PathingEntity::TestIntersection(math::Vector3T<float> const&, math::Vector3T<float> const&, int) const
    void PathingEntity::TestIntersection(Vector3T* param_1, Vector3T* param_2, int param_3) {
        undefined8* puVar1;
        AABB* pAVar2;
        GraphNode* this_00;
        Matrix44T* pMVar3;
        undefined8 local_40;
        undefined4 local_38;
        undefined8 local_30;
        float local_24;

        local_24 = 0.0;
        local_30 = math::operator-(param_2, param_1);
        puVar1 = (undefined8*)local_30.Normalize();
        local_40 = *puVar1;
        local_38 = *(undefined4*)(puVar1 + 1);
        pAVar2 = (AABB*)GetAABB();
        this_00 = (GraphNode*)GetNode();
        pMVar3 = (Matrix44T*)this_00->GetWorldTransformationMatrix();
        math::TestIntersection(&local_24, param_1, (Vector3T*)&local_40, pAVar2, pMVar3);
    }

    // 0x1003f7720, 80 bytes, placed by class name
    // PathingEntity::ResetHitmarksAndHeadbars()
    void PathingEntity::ResetHitmarksAndHeadbars() {
        undefined1 local_20[8];

        std::make_unique<HitmarksAndHeadbars, game::ConfigProvider_const&>((ConfigProvider*)local_20);
        std::unique_ptr<HitmarksAndHeadbars, std::default_delete<HitmarksAndHeadbars>>::operator=(
            (unique_ptr<HitmarksAndHeadbars, std::default_delete<HitmarksAndHeadbars>>*)&field_3784,
            (unique_ptr*)local_20);
        local_20->~unique_ptr();
    }

    // 0x1003f7800, 96 bytes, placed by class name
    // PathingEntity::AddHitmark(int, int, int, int, unsigned int, unsigned int)
    void PathingEntity::AddHitmark(int param_1, int param_2, int param_3, int param_4, uint param_5, uint param_6) {
        HitmarksAndHeadbars* this_00;

        this_00 = (HitmarksAndHeadbars*)
                      std::unique_ptr<HitmarksAndHeadbars, std::default_delete<HitmarksAndHeadbars>>::operator->(
                          (unique_ptr<HitmarksAndHeadbars, std::default_delete<HitmarksAndHeadbars>>*)&field_3784);
        this_00->AddHitmark(field_224, param_1, param_2, param_3, param_4, param_5, param_6);
    }

    // 0x1003f7870, 112 bytes, placed by class name
    // PathingEntity::AddHeadbar(int, int, unsigned int, int, int, int, int, unsigned int)
    void PathingEntity::AddHeadbar(int param_1, int param_2, uint param_3, int param_4, int param_5, int param_6,
                                   int param_7, uint param_8) {
        HitmarksAndHeadbars* this_00;

        this_00 = (HitmarksAndHeadbars*)
                      std::unique_ptr<HitmarksAndHeadbars, std::default_delete<HitmarksAndHeadbars>>::operator->(
                          (unique_ptr<HitmarksAndHeadbars, std::default_delete<HitmarksAndHeadbars>>*)&field_3784);
        this_00->AddHeadbar(field_224, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
    }

    // 0x1003f78e0, 48 bytes, placed by class name
    // PathingEntity::ClearHeadbar(int)
    void PathingEntity::ClearHeadbar(int param_1) {
        HitmarksAndHeadbars* this_00;

        this_00 = (HitmarksAndHeadbars*)
                      std::unique_ptr<HitmarksAndHeadbars, std::default_delete<HitmarksAndHeadbars>>::operator->(
                          (unique_ptr<HitmarksAndHeadbars, std::default_delete<HitmarksAndHeadbars>>*)&field_3784);
        this_00->ClearHeadbar(param_1);
    }

    // 0x1003f7910, 240 bytes, placed by class name
    // PathingEntity::GetLoadProgress() const
    float PathingEntity::GetLoadProgress() {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        World* pWVar1;
        char cVar2;
        byte bVar3;
        byte bVar4;
        Model* this_01;
        float fVar5;

        cVar2 = field_864->IsLoaded();
        if (cVar2 == '\0') {
            return 0.0;
        }
        this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_864->GetCurrentModel();
        this_01 = (Model*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        if (this_01 == (Model*)0) {
            return 1.0;
        }
        pWVar1 = (World*)shared_ptr<game::World>::operator->((shared_ptr<game::World>*)field_176);
        bVar3 = pWVar1->GetLoadingIncludesTextures();
        pWVar1 = (World*)shared_ptr<game::World>::operator->((shared_ptr<game::World>*)field_176);
        bVar4 = pWVar1->GetLoadingIncludesShaders();
        if ((bVar3 == 0) || (cVar2 = this_01->TexturesReady(), cVar2 == '\0')) {
            fVar5 = 1.0;
        } else {
            fVar5 = 2.0;
        }
        if ((bVar4 != 0) && (cVar2 = this_01->ShadersReady(), cVar2 != '\0')) {
            fVar5 = fVar5 + 1.0;
        }
        return fVar5 / (float)((uint)bVar3 + (uint)bVar4 + 1);
    }

    // 0x1003f7a00, 160 bytes, placed by class name
    // PathingEntity::DebugRenderRouting(unsigned int)
    void PathingEntity::DebugRenderRouting(uint param_1) {
        undefined1* this_00;
        long* plVar1;
        World* pWVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined1 local_40[16];

        this_00 = field_176;
        if (this_00->operator_cast_to_bool()) {
            new (local_40) game::CoordFine();
            GetPositionFine(this, (CoordFine*)local_40);
            plVar1 = (long*)std::unique_ptr<EntityRoute, std::default_delete<EntityRoute>>::operator->(
                (unique_ptr<EntityRoute, std::default_delete<EntityRoute>>*)(field_552 + 160));
            pWVar2 = (World*)shared_ptr<game::World>::operator->((shared_ptr<game::World>*)this_00);
            uVar3 = pWVar2->GetHeightMap();
            pWVar2 = (World*)shared_ptr<game::World>::operator->((shared_ptr<game::World>*)this_00);
            uVar4 = pWVar2->GetLinkMap();
            (**(code**)(*plVar1 + 64))(plVar1, (CoordFine*)local_40, uVar3, uVar4, param_1);
        }
    }

    // 0x1003f7aa0, 144 bytes, placed by class name
    // PathingEntity::DebugRenderFacing()
    void PathingEntity::DebugRenderFacing() {
        undefined1* this_00;
        World* pWVar1;
        HeightMap* pHVar2;
        LinkMap* pLVar3;
        undefined1 local_38[16];

        this_00 = field_176;
        if (this_00->operator_cast_to_bool()) {
            new (local_38) game::CoordFine();
            GetPositionFine(this, (CoordFine*)local_38);
            pWVar1 = (World*)shared_ptr<game::World>::operator->((shared_ptr<game::World>*)this_00);
            pHVar2 = (HeightMap*)pWVar1->GetHeightMap();
            pWVar1 = (World*)shared_ptr<game::World>::operator->((shared_ptr<game::World>*)this_00);
            pLVar3 = (LinkMap*)pWVar1->GetLinkMap();
            (field_552, (CoordFine*)local_38, pHVar2, pLVar3)->RenderDebug();
        }
    }

    // 0x1003f7b30, 960 bytes, placed by class name
    // PathingEntity::DebugRenderPosition(unsigned int)
    void PathingEntity::DebugRenderPosition(uint param_1) {
        ulong uVar1;
        long* plVar3;
        undefined8 uVar4;
        char* pcVar5;
        float fVar6;
        undefined4 in_XMM1_Da;
        undefined1 local_1e8[32];
        allocator local_1c8[16];
        undefined1 local_1b8[40];
        undefined1 local_190[8];
        SideBarData local_188;
        undefined8 local_178;
        undefined4 local_170;
        ulong local_168;
        undefined4 local_160;
        ulong local_158[2];
        fixed_string<char, 256, true, eastl::allocator> local_148[296];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        new (local_190) oldscape::sidebars::SideBarData(param_1 & 16777215 | 536870912, 1);
        local_168 = (*(code*)field_0[18])(this);
        local_158[1]._0_4_ = field_728;
        local_158[0] = *(ulong*)&field_720;
        local_160 = in_XMM1_Da;
        new (local_1e8) game::CoordFine(field_68, (Vector3T*)&local_168);
        new ((local_1e8 + 16)) game::CoordFine(field_68, (Vector3T*)local_158);
        plVar3 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar3 != (long*)0) {
            (**(code**)(*plVar3 + 24))(plVar3, &local_168, local_158, local_190);
        }
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_148);
        uVar4 = ((local_1e8 + 16))->ToString();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)local_148, "Server\n%s", uVar4);
        plVar3 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar3 != (long*)0) {
            pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::allocator::allocator(local_1c8, "EASTL basic_string");
            new ((local_1b8 + 8)) eastl::string(pcVar5, local_1c8);
            new (&local_188) oldscape::sidebars::SideBarData(-16728064, 1);
            (**(code**)(*plVar3 + 136))(plVar3, local_158, local_1b8 + 8, &local_188);
            ((local_1b8 + 8))->~basic_string();
        }
        local_188._8_4_ = (undefined4)local_158[1];
        local_188.field_0 = (undefined4)local_158[0];
        local_188.field_4 = local_158[0]._4_4_;
        uVar4 = local_188._0_8_;
        local_188.field_4 = (int)(local_158[0] >> 32);
        fVar6 = -(float)local_188.field_4;
        local_188._0_8_ = uVar4;
        new (local_1c8) math::PlaneT<float>(PTR_UP_100ee66d0, fVar6);
        local_188.field_4 = 0;
        plVar3 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar3 != (long*)0) {
            (**(code**)(*plVar3 + 104))(plVar3, &local_188, local_1c8, 64, 64, local_190);
        }
        if (math::operator!=((Vector3T*)&local_168, (Vector3T*)local_158)) {
            uVar4 = local_1e8->ToString();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)local_148, "Apparent\n%s", uVar4);
            plVar3 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar3 != (long*)0) {
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                new (&local_178) eastl::allocator("EASTL basic_string");
                new ((local_1b8 + 8)) eastl::string(pcVar5, (allocator*)&local_178);
                new (local_1b8) oldscape::sidebars::SideBarData(-4194304, 1);
                (**(code**)(*plVar3 + 136))(plVar3, &local_168, local_1b8 + 8, local_1b8);
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
            plVar3 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar3 != (long*)0) {
                (**(code**)(*plVar3 + 104))(plVar3, &local_178, local_1b8 + 8, 64, 64, local_190);
            }
        }
        /* WARNING: Subroutine does not return */
        local_148->~fixed_string();
    }

} // namespace jag
