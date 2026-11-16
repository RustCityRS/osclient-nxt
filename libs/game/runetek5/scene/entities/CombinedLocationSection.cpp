// libs/game/runetek5/scene/entities/CombinedLocationSection.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "CombinedLocationSection.h"

namespace jag::game {
    // 0x1039b4ec8, set at startup by ___cxx_global_var_init.77
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> CombinedLocationSection::NullSection =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100029ea0: CombinedLocationSection::IsAnimatable() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100324d50: CombinedLocationSection::GetLocationType() const has the same machine code as oldscape::graphics::NXTPixToolkit::GetPix3D()

    // 0x100324d50: CombinedLocationSection::GetParentLocationType() const has the same machine code as oldscape::graphics::NXTPixToolkit::GetPix3D()

    // 0x100449940
    CombinedLocationSection::CombinedLocationSection(graphics::GraphNode* graphNode, const shared_ptr<World>& world,
                                                     int arg3, int arg4, int arg5, const shared_ptr<LocType>& locType,
                                                     const LocData& locData, bool arg8, int arg9, int arg10,
                                                     const math::AABB& aabb, int arg12)
        : LocationInterface(3, graphNode, world, 12, arg3), MakeSharedPool<CombinedLocationSection, 512>() {
        field_8 = &PTR__CombinedLocationSection_100f005c8;
        new (field_216) oldscape::rs2lib::worldmap::LocationData(arg3, arg4, arg5);
        uint8_t* this_00 = m_locationType;
        new (this_00) shared_ptr(locType);
        uint8_t bVar1 = locData.GetShape();
        m_shape = bVar1;
        bVar1 = locData.GetRot();
        m_rotation90 = bVar1;
        auto rotTransScale = locData.y();
        new (&field_252) math::RotTransScale(*rotTransScale);
        field_300 = arg8;
        field_302 = (short)arg9;
        field_304 = (short)arg10;
        m_hidden = 0;
        field_307 = 0;
        m_attachedWallWidth = (short)arg12;
        new (m_highlightState) EntityHighlightState();
        if ((short)arg9 != arg9) {
            LogAssert("heightMapFineOffset >= std::numeric_limits<int16>::min() && heightMapFineOffset <= "
                      "std::numeric_limits<int16>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/CombinedLocationSection.cpp",
                      43, nullptr);
        }
        if ((short)arg10 != arg10) {
            LogAssert("heightMapFineOffsetGroundDecor >= std::numeric_limits<int16>::min() && "
                      "heightMapFineOffsetGroundDecor <= std::numeric_limits<int16>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/CombinedLocationSection.cpp",
                      44, nullptr);
        }
        LocType* pLVar4 = (LocType*)(*this_00).operator->();
        if (pLVar4->GetRaiseObjectGroundDecor((unsigned int)m_shape) != arg10) {
            LogAssert("heightMapFineOffsetGroundDecor == m_locationType->GetRaiseObjectGroundDecor(m_shape)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/CombinedLocationSection.cpp",
                      45, nullptr);
        }
        SetAABB(aabb);
        bool bVar2 = *this_00 == nullptr;
        bVar1 = true;
        if (!bVar2) {
            pLVar4 = (LocType*)(*this_00).operator->();
            bVar1 = pLVar4->HasParticles();
            bVar1 = bVar1 ^ 1;
        }
        SetNDCProjectionTestEnabled((bool)bVar1);
    }

    // 0x100449bd0
    CombinedLocationSection::CombinedLocationSection()
        : LocationInterface(3, 12), MakeSharedPool<CombinedLocationSection, 512>() {
        field_8 = &PTR__CombinedLocationSection_100f005c8;
        new (field_216) game::CoordGrid();
        new (m_locationType) shared_ptr();
        m_shape = 0;
        m_rotation90 = 0;
        new (&field_252) math::RotTransScale();
        field_300 = false;
        field_302 = 0;
        field_304 = 0;
        m_hidden = 0;
        field_307 = 0;
        m_attachedWallWidth = 0;
        new (m_highlightState) EntityHighlightState();
    }

    // 0x100449d60
    uint64_t CombinedLocationSection::UpdateHeightMap(HeightChangeType heightChangeType) {
        uint8_t* this_00;
        int arg2;
        int arg3;
        int arg1;
        int arg4;
        int arg5;
        LocType* pLVar2;
        shared_ptr<World>* this_01;
        HeightMap* this_03;

        if (heightChangeType != 0) {
            this_00 = m_locationType;
            pLVar2 = (LocType*)(*this_00).operator->();
            if (pLVar2->RaiseEntities((unsigned int)m_shape, field_300) != '\0') {
                this_01 = (shared_ptr<World>*)GetWorld();
                this_03 = ((World*)(*this_01).operator->())->GetHeightMap();
                arg1 = GetHeightMapLevel();
                arg2 = *(int*)(field_216 + 4);
                arg3 = *(int*)(field_216 + 8);
                pLVar2 = (LocType*)(*this_00).operator->();
                arg4 = pLVar2->GetGridWidth((unsigned int)m_rotation90);
                pLVar2 = (LocType*)(*this_00).operator->();
                arg5 = pLVar2->GetGridLength((unsigned int)m_rotation90);
                if (heightChangeType == 1) {
                    this_03->AddLocationHeightOffset(arg1, arg2, arg3, arg4, arg5, (int)field_304, (int)field_302);
                } else {
                    this_03->RemoveLocationHeightOffset(arg1, arg2, arg3, arg4, arg5, (int)field_304, (int)field_302);
                }
            }
        }
        return 1;
    }

    // 0x100449e80
    void CombinedLocationSection::AddPickableEntity(World& world, const math::Matrix44T<float>& matrix44) {
        CommandLine* this_00;
        int iVar2;
        int arg4;
        unsigned int uVar3;
        SceneManager* pSVar4;
        Minimap* this_02;
        GraphNode* pGVar5;
        AABB* pAVar6;
        shared_ptr<World>* this_03;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_04;
        CoordMapSquare* pCVar7;
        float* pfVar8;
        long* plVar9;
        char* str;
        eastl::string local_1d0;
        Vector2T<int> local_1b0;
        uint64_t local_1a8[2];
        uint8_t local_190[16];
        CommandLine* local_180;
        Matrix44T<float>* local_178;
        Matrix44T<float>* local_170;
        Capsule2D* local_168;
        SideBarData local_160;

        if ((m_hidden == '\0') && (field_307 == '\0')) {
            local_190._8_8_ = m_locationType;
            if (((LocType*)(*local_190._8_8_).operator->())->IsActive()) {
                pSVar4 = (SceneManager*)world.size();
                this_02 = (Minimap*)pSVar4->GetGameSceneRect();
                local_168 = (Capsule2D*)&field_76;
                local_178 = world.GetLastCameraProjectionMatrix();
                local_170 = world.GetLastViewProjectionMatrix();
                iVar2 = this_02->GetPos();
                arg4 = this_02->GetLevel();
                pGVar5 = GetNode();
                pAVar6 = (AABB*)pGVar5->GetWorldAABB();
                local_168->FillFromAABB(*local_178, *local_170, iVar2, arg4, *pAVar6);
                local_168 = (Capsule2D*)world.GetLastCameraViewMatrix();
                local_178 = world.GetLastCameraProjectionMatrix();
                local_170 = world.GetLastViewProjectionMatrix();
                iVar2 = this_02->GetPos();
                uVar3 = this_02->GetLevel();
                pGVar5 = GetNode();
                pGVar5->GetWorldAABB();
                local_180 = (CommandLine*)&field_100;
                if (math::Sphere2D::Set(field_100, *local_168, *local_178, (int)local_170, iVar2,
                                        *((AABB*)(unsigned long)uVar3))) {
                    if (World::m_debugPicking != '\0') {
                        local_1b0 = math::Vector2T();
                        this_03 = (shared_ptr<World>*)GetWorld();
                        this_04 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                             eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                             eastl::equal_to<long long>, eastl::hash<long long>,
                                             eastl::mod_range_hashing, eastl::default_ranged_hash,
                                             eastl::prime_rehash_policy, false, true, true>*)(*this_03)
                                      .operator->();
                        pSVar4 = (SceneManager*)this_04->size();
                        pCVar7 = (CoordMapSquare*)pSVar4->GetGameSceneRect();
                        iVar2 = pCVar7->GetX();
                        this_00 = local_180;
                        local_168._0_4_ = (float)iVar2;
                        iVar2 = ((CoordMapSquare*)local_180->SSOBeginPtr())->GetX();
                        local_168._0_4_ = (float)iVar2 + local_168._0_4_;
                        pfVar8 = (float*)local_1b0.SSOBeginPtr();
                        *pfVar8 = local_168._0_4_;
                        iVar2 = pCVar7->GetZ();
                        local_168._0_4_ = (float)iVar2;
                        pCVar7 = (CoordMapSquare*)this_00->SSOBeginPtr();
                        iVar2 = pCVar7->GetZ();
                        local_168._0_4_ = (float)iVar2 + local_168._0_4_;
                        pfVar8 = (float*)local_1b0.y();
                        *pfVar8 = local_168._0_4_;
                        iVar2 = this_00->GetPos();
                        plVar9 = DebugPrimitiveCollectorBasic::GetCollector("");
                        if (plVar9 != nullptr) {
                            local_168._0_4_ = (float)iVar2;
                            local_160 = oldscape::sidebars::SideBarData(1090518784, 0);
                            (**(void (**)(...))(*plVar9 + 160))(local_168._0_4_, plVar9, &local_1b0, 1, &local_160);
                        }
                        local_160 = eastl::fixed_string<char, 256>();
                        uVar3 = ((GameToken*)(*local_190._8_8_).operator->())->GetStatus();
                        local_160.sprintf("Pick[CombinedLocationSection ID:%d]", (unsigned long)uVar3);
                        plVar9 = DebugPrimitiveCollectorBasic::GetCollector("");
                        if (plVar9 != nullptr) {
                            pGVar5 = GetNode();
                            pAVar6 = (AABB*)pGVar5->GetWorldAABB();
                            local_1a8[0] = pAVar6->GetCentrePos();
                            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            local_1d0 = eastl::string(str);
                            new (local_190) oldscape::sidebars::SideBarData(-256, 0);
                            (**(void (**)(...))(*plVar9 + 136))(plVar9, local_1a8, &local_1d0, local_190);
                        }
                    }
                    local_1d0.shared_from_this();
                    local_160.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_1d0);
                    world.AddPickableEntity(local_160);
                }
            }
        }
    }

    // 0x10044a310
    bool CombinedLocationSection::UsesTrianglePicking() const {
        bool bVar3;

        if (m_locationType->operator_cast_to_bool() == '\0') {
            bVar3 = false;
        } else {
            bVar3 = ((LocType*)(*m_locationType).operator->())->GetCustomBounding() == 0;
        }
        return bVar3;
    }

    // 0x10044a350
    uint64_t CombinedLocationSection::PickTest(graphics::PickingHelper& pickingHelper) {
        uint64_t uVar2;

        if (UsesTrianglePicking() == '\0') {
            LogAssert("UsesTrianglePicking()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/CombinedLocationSection.cpp",
                      142, nullptr);
        }
        auto this_00 = GetOwner();
        if (this_00 == nullptr) {
            uVar2 = 0;
        } else {
            uVar2 = this_00->PickTestSection(this, pickingHelper);
        }
        return uVar2;
    }

    // 0x10044a3b0
    uint64_t CombinedLocationSection::GetOwner() const {
        auto pGVar1 = GetNode();
        if (pGVar1 != nullptr) {
            pGVar1 = GetNode();
            if (pGVar1->GetParent() != 0) {
                pGVar1 = GetNode();
                return ((Text*)pGVar1->GetParent())->GetLinkObjCount();
            }
        }
        return 0;
    }

    // 0x10044a400
    bool CombinedLocationSection::UsesFastPickingTests() const {
        bool cVar1 = m_locationType->operator_cast_to_bool();
        uint32_t uVar2 = 1;
        if (cVar1) {
            uVar2 = ((LocType*)(*m_locationType).operator->())->UseFastPickingTests();
        }
        return uVar2;
    }

    // 0x10044a440
    void CombinedLocationSection::NotifyInteracted(unsigned int arg1) {
        auto this_00 = GetOwner();
        if (this_00 != nullptr) {
            this_00->FlagHighlightingDirty();
        }
        m_highlightState->NotifyInteracted(arg1);
    }

    // 0x10044a490
    void CombinedLocationSection::NotifyMouseover(unsigned int arg1) {
        auto this_00 = GetOwner();
        if (this_00 != nullptr) {
            this_00->FlagHighlightingDirty();
        }
        new (m_highlightState) oldscape::ServerConnectionWorkItem(arg1);
    }

    // 0x10044a4d0
    void CombinedLocationSection::NotifyPickable(unsigned int arg1, bool arg2, float arg3) {
        bool cVar1;
        uint8_t bVar2;
        uint8_t bVar3;
        shared_ptr<World>* psVar5;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar6;
        SceneManager* pSVar7;
        EntityHighlightGlobalState* pEVar8;
        CombinedLocation* this_02;

        auto piVar4 = 5->GetDefault(arg1);
        if (*piVar4 == 2) {
            bVar2 = 1;
        } else {
            if (*piVar4 == 1) {
                cVar1 = (GetWorld())->operator_cast_to_bool();
                if (cVar1) {
                    psVar5 = (shared_ptr<World>*)GetWorld();
                    phVar6 =
                        (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                   eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                   eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)(*psVar5)
                            .operator->();
                    pSVar7 = (SceneManager*)phVar6->size();
                    pEVar8 = (EntityHighlightGlobalState*)pSVar7->GetEntityHighlightGlobalState();
                    bVar2 = pEVar8->GetRadialHighlightVisible(arg3);
                    goto LAB_10044a54d;
                }
            }
            bVar2 = 0;
        }
    LAB_10044a54d:
        if (EntityHighlightGlobalState::m_allowExamineOnlyHighlights == '\0') {
            cVar1 = m_locationType->operator_cast_to_bool();
            bVar3 = 1;
            if (cVar1) {
                bVar3 = ((LocType*)(*m_locationType).operator->())->IsExamineOnly();
                bVar3 = bVar3 ^ 1;
            }
            bVar2 = bVar2 & bVar3;
        }
        if (bVar2 != 0) {
            this_02 = (CombinedLocation*)GetOwner();
            if (this_02 != nullptr) {
                this_02->FlagHighlightingDirty();
            }
            if (arg2) {
                new (m_highlightState) oldscape::ServerConnectionWorkItem(arg1);
            } else {
                psVar5 = (shared_ptr<World>*)GetWorld();
                phVar6 =
                    (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                               eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                               eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                               eastl::prime_rehash_policy, false, true, true>*)(*psVar5)
                        .operator->();
                pSVar7 = (SceneManager*)phVar6->size();
                pEVar8 = (EntityHighlightGlobalState*)pSVar7->GetEntityHighlightGlobalState();
                m_highlightState->TryKeepVisible(*pEVar8, arg1);
            }
            if (arg3 != -1.0) {
                *(float*)m_highlightState = arg3;
            }
        }
    }

} // namespace jag::game
