// libs/game/runetek5/scene/entities/CombinedLocationSection.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "CombinedLocationSection.h"

namespace jag::game {
    // 0x1039b4ec8, 16 bytes, __common; set at startup by ___cxx_global_var_init.77
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> CombinedLocationSection::NullSection;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    CombinedLocationSection::IsAnimatable() const;

    // 0x100324d50: the linker folded this into oldscape::graphics::NXTPixToolkit::GetPix3D(), which has identical code
    shared_ptr CombinedLocationSection::GetLocationType() const;

    // 0x100324d50: the linker folded this into oldscape::graphics::NXTPixToolkit::GetPix3D(), which has identical code
    CombinedLocationSection::GetParentLocationType() const;

    // 0x100449940, 480 bytes, base-object constructor, placed by class name and debug map
    // CombinedLocationSection::CombinedLocationSection(graphics::GraphNode*, shared_ptr<World> const&, int, int, int, shared_ptr<LocType> const&, LocData const&, bool, int, int, math::AABB const&, int)
    void CombinedLocationSection::CombinedLocationSection(GraphNode* param_1, shared_ptr* param_2, int param_3,
                                                          int param_4, int param_5, shared_ptr* param_6,
                                                          LocData* param_7, bool param_8, int param_9, int param_10,
                                                          AABB* param_11, int param_12) {
        undefined1* this_00;
        undefined1 uVar1;
        bool bVar2;
        byte bVar3;
        RotTransScale* pRVar5;
        LocType* pLVar6;

        new (this) LocationInterface(3, param_1, param_2, 12, param_3);
        new (this) MakeSharedPool<CombinedLocationSection, 512>();
        field_0 = &PTR__CombinedLocationSection_100f00430;
        field_8 = &PTR__CombinedLocationSection_100f005c8;
        new (field_216, param_3, param_4, param_5) oldscape::rs2lib::worldmap::LocationData();
        this_00 = m_locationType;
        new (this_00) shared_ptr<oldscape::dash3d::Decor>(param_6);
        uVar1 = param_7->GetShape();
        m_shape = uVar1;
        uVar1 = param_7->GetRot();
        m_rotation90 = uVar1;
        pRVar5 = (RotTransScale*)param_7->y();
        new (&field_252, pRVar5) math::RotTransScale();
        field_300 = param_8;
        field_302 = (short)param_9;
        field_304 = (short)param_10;
        m_hidden = 0;
        field_307 = 0;
        m_attachedWallWidth = (short)param_12;
        new (m_highlightState) EntityHighlightState();
        if ((short)param_9 != param_9) {
            /* WARNING: Subroutine does not return */
            LogAssert("heightMapFineOffset >= std::numeric_limits<int16>::min() && heightMapFineOffset <= "
                      "std::numeric_limits<int16>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/CombinedLocationSection.cpp",
                      43, (char*)0);
        }
        if ((short)param_10 != param_10) {
            /* WARNING: Subroutine does not return */
            LogAssert("heightMapFineOffsetGroundDecor >= std::numeric_limits<int16>::min() && "
                      "heightMapFineOffsetGroundDecor <= std::numeric_limits<int16>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/CombinedLocationSection.cpp",
                      44, (char*)0);
        }
        pLVar6 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
        if (pLVar6->GetRaiseObjectGroundDecor(m_shape) != param_10) {
            /* WARNING: Subroutine does not return */
            LogAssert("heightMapFineOffsetGroundDecor == m_locationType->GetRaiseObjectGroundDecor(m_shape)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/CombinedLocationSection.cpp",
                      45, (char*)0);
        }
        SetAABB(param_11);
        bVar2 = operator==((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
        bVar3 = true;
        if (!bVar2) {
            pLVar6 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
            bVar3 = pLVar6->HasParticles();
            bVar3 = bVar3 ^ 1;
        }
        SetNDCProjectionTestEnabled((bool)bVar3);
    }

    // 0x100449b80, 80 bytes, complete-object constructor, placed by class name and debug map
    // CombinedLocationSection::CombinedLocationSection(graphics::GraphNode*, shared_ptr<World> const&, int, int, int, shared_ptr<LocType> const&, LocData const&, bool, int, int, math::AABB const&, int)
    void CombinedLocationSection::CombinedLocationSection(GraphNode* param_1, shared_ptr* param_2, int param_3,
                                                          int param_4, int param_5, shared_ptr* param_6,
                                                          LocData* param_7, bool param_8, int param_9, int param_10,
                                                          AABB* param_11, int param_12) {
        CombinedLocationSection(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9,
                                param_10, param_11, param_12);
    }

    // 0x100449bd0, 192 bytes, base-object constructor, placed by class name and debug map
    // CombinedLocationSection::CombinedLocationSection()
    void CombinedLocationSection::CombinedLocationSection() {
        new (this) LocationInterface(3, 12);
        new (this) MakeSharedPool<CombinedLocationSection, 512>();
        field_0 = &PTR__CombinedLocationSection_100f00430;
        field_8 = &PTR__CombinedLocationSection_100f005c8;
        new (field_216) game::CoordGrid();
        new (m_locationType, (_func_decltype_nullptr*)3) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        m_shape = 0;
        m_rotation90 = 0;
        new (&field_252) math::RotTransScale();
        field_300 = 0;
        field_302 = 0;
        field_304 = 0;
        m_hidden = 0;
        field_307 = 0;
        m_attachedWallWidth = 0;
        new (m_highlightState) EntityHighlightState();
    }

    // 0x100449d50, 16 bytes, complete-object constructor, placed by class name and debug map
    // CombinedLocationSection::CombinedLocationSection(): jumps straight to the base-object constructor

    // 0x100449d60, 288 bytes, placed by class name and debug map
    // CombinedLocationSection::UpdateHeightMap(HeightChangeType)
    undefined8 CombinedLocationSection::UpdateHeightMap(int param_2) {
        undefined1* this_00;
        int iVar1;
        int iVar2;
        int iVar4;
        int iVar5;
        int iVar6;
        LocType* pLVar7;
        shared_ptr<World>* this_01;
        World* this_02;
        HeightMap* this_03;

        if (param_2 != 0) {
            this_00 = m_locationType;
            pLVar7 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
            if (pLVar7->RaiseEntities(m_shape, field_300) != '\0') {
                this_01 = (shared_ptr<World>*)GetWorld();
                this_02 = (World*)shared_ptr<World>::operator->(this_01);
                this_03 = (HeightMap*)this_02->GetHeightMap();
                iVar4 = GetHeightMapLevel();
                iVar1 = *(int*)(field_216 + 4);
                iVar2 = *(int*)(field_216 + 8);
                pLVar7 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
                iVar5 = pLVar7->GetGridWidth(m_rotation90);
                pLVar7 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
                iVar6 = pLVar7->GetGridLength(m_rotation90);
                if (param_2 == 1) {
                    this_03->AddLocationHeightOffset(iVar4, iVar1, iVar2, iVar5, iVar6, (int)field_304, (int)field_302);
                } else {
                    this_03->RemoveLocationHeightOffset(iVar4, iVar1, iVar2, iVar5, iVar6, (int)field_304,
                                                        (int)field_302);
                }
            }
        }
        return 1;
    }

    // 0x100449e80, 1168 bytes, placed by class name and debug map
    // CombinedLocationSection::AddPickableEntity(World&, math::Matrix44T<float> const&)
    void CombinedLocationSection::AddPickableEntity(World* param_1, Matrix44T* param_2) {
        CommandLine* this_00;
        char cVar1;
        int iVar2;
        int iVar3;
        uint uVar4;
        LocType* this_01;
        SceneManager* pSVar5;
        Minimap* this_02;
        GraphNode* pGVar6;
        AABB* pAVar7;
        shared_ptr<World>* this_03;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_04;
        CoordMapSquare* pCVar8;
        CoordMapSquare* this_05;
        vector* pvVar9;
        float* pfVar10;
        long* plVar11;
        GameToken* this_06;
        char* pcVar12;
        Matrix44T* pMVar13;
        shared_ptr local_1d0[2];
        Vector2T<int> local_1b0[8];
        undefined8 local_1a8[2];
        allocator local_198[8];
        undefined1 local_190[16];
        CommandLine* local_180;
        Matrix44T* local_178;
        Matrix44T* local_170;
        Matrix44T* local_168;
        shared_ptr local_160[18];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((m_hidden == '\0') && (field_307 == '\0')) {
            local_190._8_8_ = m_locationType;
            this_01 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)local_190._8_8_);
            cVar1 = this_01->IsActive();
            if (cVar1 != '\0') {
                pSVar5 = (SceneManager*)param_1->size();
                this_02 = (Minimap*)pSVar5->GetGameSceneRect();
                local_168 = (Matrix44T*)&field_76;
                local_178 = (Matrix44T*)param_1->GetLastCameraProjectionMatrix();
                local_170 = (Matrix44T*)param_1->GetLastViewProjectionMatrix();
                iVar2 = this_02->GetPos();
                iVar3 = this_02->GetLevel();
                pGVar6 = (GraphNode*)GetNode();
                pAVar7 = (AABB*)pGVar6->GetWorldAABB();
                local_168->FillFromAABB(local_178, local_170, iVar2, iVar3, pAVar7);
                local_168 = (Matrix44T*)param_1->GetLastCameraViewMatrix();
                local_178 = (Matrix44T*)param_1->GetLastCameraProjectionMatrix();
                local_170 = (Matrix44T*)param_1->GetLastViewProjectionMatrix();
                iVar2 = this_02->GetPos();
                iVar3 = this_02->GetLevel();
                pGVar6 = (GraphNode*)GetNode();
                pAVar7 = (AABB*)pGVar6->GetWorldAABB();
                pMVar13 = local_168;
                local_180 = (CommandLine*)&field_100;
                cVar1 = (&field_100, local_168, local_178, local_170, iVar2, iVar3, pAVar7)->Set();
                if (cVar1 != '\0') {
                    if (World::m_debugPicking != '\0') {
                        math::Vector2T<int>::Vector2T(local_1b0);
                        this_03 = (shared_ptr<World>*)GetWorld();
                        this_04 =
                            (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                       eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                       eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                       eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                                shared_ptr<World>::operator->(this_03);
                        pSVar5 = (SceneManager*)eastl::hashtable<
                            long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>::size(this_04);
                        pCVar8 = (CoordMapSquare*)pSVar5->GetGameSceneRect();
                        iVar2 = pCVar8->GetX();
                        this_00 = local_180;
                        local_168._0_4_ = (float)iVar2;
                        this_05 = (CoordMapSquare*)local_180->SSOBeginPtr(pMVar13);
                        iVar2 = this_05->GetX();
                        local_168._0_4_ = (float)iVar2 + local_168._0_4_;
                        pvVar9 = local_1b0->SSOBeginPtr(pMVar13);
                        *(float*)pvVar9 = local_168._0_4_;
                        iVar2 = pCVar8->GetZ();
                        local_168._0_4_ = (float)iVar2;
                        pCVar8 = (CoordMapSquare*)this_00->SSOBeginPtr(pMVar13);
                        iVar2 = pCVar8->GetZ();
                        local_168._0_4_ = (float)iVar2 + local_168._0_4_;
                        pfVar10 = (float*)local_1b0->y();
                        *pfVar10 = local_168._0_4_;
                        iVar2 = this_00->GetPos();
                        plVar11 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                        if (plVar11 != (long*)0) {
                            local_168._0_4_ = (float)iVar2;
                            new (local_160) oldscape::sidebars::SideBarData(1090518784, 0);
                            (**(code**)(*plVar11 + 160))(local_168._0_4_, plVar11, local_1b0, 1, local_160);
                        }
                        new (local_160) eastl::fixed_string<char, 256, true, eastl::allocator>();
                        this_06 = (GameToken*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)local_190._8_8_);
                        uVar4 = this_06->GetStatus();
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                            sprintf((char*)local_160, "Pick[CombinedLocationSection ID:%d]", (ulong)uVar4);
                        plVar11 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                        if (plVar11 != (long*)0) {
                            pGVar6 = (GraphNode*)GetNode();
                            pAVar7 = (AABB*)pGVar6->GetWorldAABB();
                            local_1a8[0] = pAVar7->GetCentrePos();
                            pcVar12 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            eastl::allocator::allocator(local_198, "EASTL basic_string");
                            new (local_1d0) eastl::string(pcVar12, local_198);
                            new (local_190) oldscape::sidebars::SideBarData(-256, 0);
                            (**(code**)(*plVar11 + 136))(plVar11, local_1a8, local_1d0, local_190);
                            local_1d0->~basic_string();
                        }
                        /* WARNING: Subroutine does not return */
                        local_160->~fixed_string();
                    }
                    local_1d0->shared_from_this();
                    shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider,
                                                                                void>(
                        (shared_ptr<oldscape::RSevenDebugPresetProvider>*)local_160, local_1d0);
                    param_1->AddPickableEntity(local_160);
                    local_160->~shared_ptr();
                    local_1d0->~shared_ptr();
                }
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10044a310, 64 bytes, placed by class name and debug map
    // CombinedLocationSection::UsesTrianglePicking() const
    bool CombinedLocationSection::UsesTrianglePicking() {
        bool bVar1;
        LocType* this_00;

        bVar1 = m_locationType->operator_cast_to_bool();
        if (bVar1) {
            this_00 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)m_locationType);
            bVar1 = this_00->GetCustomBounding() == 0;
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x10044a350, 96 bytes, placed by class name and debug map
    // CombinedLocationSection::PickTest(graphics::PickingHelper&)
    undefined8 CombinedLocationSection::PickTest(PickingHelper* param_1) {
        CombinedLocation* this_00;
        undefined8 uVar2;

        if ((*(code*)field_0[15])() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("UsesTrianglePicking()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/CombinedLocationSection.cpp",
                      142, (char*)0);
        }
        this_00 = (CombinedLocation*)GetOwner(this);
        if (this_00 == (CombinedLocation*)0) {
            uVar2 = 0;
        } else {
            uVar2 = this_00->PickTestSection(this, param_1);
        }
        return uVar2;
    }

    // 0x10044a3b0, 80 bytes, placed by class name and debug map
    // CombinedLocationSection::GetOwner() const
    undefined8 CombinedLocationSection::GetOwner() {
        long lVar1;
        GraphNode* pGVar2;
        Text* this_00;

        lVar1 = GetNode();
        if (lVar1 != 0) {
            pGVar2 = (GraphNode*)GetNode();
            lVar1 = pGVar2->GetParent();
            if (lVar1 != 0) {
                pGVar2 = (GraphNode*)GetNode();
                this_00 = (Text*)pGVar2->GetParent();
                return this_00->GetLinkObjCount();
            }
        }
        return 0;
    }

    // 0x10044a400, 64 bytes, placed by class name and debug map
    // CombinedLocationSection::UsesFastPickingTests() const
    undefined4 CombinedLocationSection::UsesFastPickingTests() {
        LocType* this_00;
        bool bVar1;
        undefined3 extraout_var;
        undefined4 uVar2;

        bVar1 = m_locationType->operator_cast_to_bool();
        uVar2 = CONCAT31(extraout_var, 1);
        if (bVar1) {
            this_00 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)m_locationType);
            uVar2 = this_00->UseFastPickingTests();
        }
        return uVar2;
    }

    // 0x10044a440, 64 bytes, placed by class name and debug map
    // CombinedLocationSection::NotifyInteracted(unsigned int)
    void CombinedLocationSection::NotifyInteracted(uint param_1) {
        CombinedLocation* this_00;

        this_00 = (CombinedLocation*)GetOwner(this);
        if (this_00 != (CombinedLocation*)0) {
            this_00->FlagHighlightingDirty();
        }
        EntityHighlightState::NotifyInteracted((int)this + 312);
    }

    // 0x10044a490, 64 bytes, placed by class name and debug map
    // CombinedLocationSection::NotifyMouseover(unsigned int)
    void CombinedLocationSection::NotifyMouseover(uint param_1) {
        CombinedLocation* this_00;

        this_00 = (CombinedLocation*)GetOwner(this);
        if (this_00 != (CombinedLocation*)0) {
            this_00->FlagHighlightingDirty();
        }
        new (m_highlightState, param_1) oldscape::ServerConnectionWorkItem();
    }

    // 0x10044a4d0, 336 bytes, placed by class name and debug map
    // CombinedLocationSection::NotifyPickable(unsigned int, bool, float)
    void CombinedLocationSection::NotifyPickable(uint param_1, bool param_2, float param_3) {
        bool bVar1;
        byte bVar2;
        byte bVar3;
        int* piVar4;
        shared_ptr* this_00;
        shared_ptr<World>* psVar5;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar6;
        SceneManager* pSVar7;
        EntityHighlightGlobalState* pEVar8;
        LocType* this_01;
        CombinedLocation* this_02;

        piVar4 = (int*)EntityHighlightVisualConfig::GetDefault(5);
        if (*piVar4 == 2) {
            bVar2 = 1;
        } else {
            if (*piVar4 == 1) {
                this_00 = (shared_ptr*)GetWorld();
                bVar1 = shared_ptr::operator_cast_to_bool(this_00);
                if (bVar1) {
                    psVar5 = (shared_ptr<World>*)GetWorld();
                    phVar6 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                        eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                        eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                        eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                                 shared_ptr<World>::operator->(psVar5);
                    pSVar7 = (SceneManager*)eastl::hashtable<
                        long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                        eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                        eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                        eastl::prime_rehash_policy, false, true, true>::size(phVar6);
                    pEVar8 = (EntityHighlightGlobalState*)pSVar7->GetEntityHighlightGlobalState();
                    bVar2 = pEVar8->GetRadialHighlightVisible(param_3);
                    goto LAB_10044a54d;
                }
            }
            bVar2 = 0;
        }
    LAB_10044a54d:
        if (EntityHighlightGlobalState::m_allowExamineOnlyHighlights == '\0') {
            bVar1 = m_locationType->operator_cast_to_bool();
            bVar3 = 1;
            if (bVar1) {
                this_01 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)m_locationType);
                bVar3 = this_01->IsExamineOnly();
                bVar3 = bVar3 ^ 1;
            }
            bVar2 = bVar2 & bVar3;
        }
        if (bVar2 != 0) {
            this_02 = (CombinedLocation*)GetOwner(this);
            if (this_02 != (CombinedLocation*)0) {
                this_02->FlagHighlightingDirty();
            }
            if (param_2) {
                new (m_highlightState, param_1) oldscape::ServerConnectionWorkItem();
            } else {
                psVar5 = (shared_ptr<World>*)GetWorld();
                phVar6 =
                    (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                               eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                               eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                               eastl::prime_rehash_policy, false, true, true>*)shared_ptr<World>::operator->(psVar5);
                pSVar7 = (SceneManager*)eastl::hashtable<
                    long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                    eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                    eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                    eastl::prime_rehash_policy, false, true, true>::size(phVar6);
                pEVar8 = (EntityHighlightGlobalState*)pSVar7->GetEntityHighlightGlobalState();
                (m_highlightState, pEVar8, param_1)->TryKeepVisible();
            }
            if (param_3 != -1.0) {
                *(float*)m_highlightState = param_3;
            }
        }
    }

    // 0x10045ff70, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.77
    void ___cxx_global_var_init_77(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&CombinedLocationSection::NullSection)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5240, &CombinedLocationSection::NullSection, 4294967296);
    }

} // namespace jag::game
