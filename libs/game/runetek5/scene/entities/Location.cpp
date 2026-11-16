// libs/game/runetek5/scene/entities/Location.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "Location.h"

namespace jag::game {
    // 0x100f38be8
    bool Location::m_ShowLocations = 1;

    // 0x100f38be9
    bool Location::m_enableFadeIn = 1;

    // 0x1039b4e68, set at startup by ___cxx_global_var_init.25
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> Location::NullLocation =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x1039b4e78
    bool Location::m_debugPrimitiveText;

    // 0x1039b4e79
    bool Location::m_debugPrimitiveTextOnMouseover;

    // 0x1039b4e7a
    int16_t Location::m_debugPrimitiveAABBOnHighlight;

    // 0x10002d860: Location::IsAnimatable() const has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x1000fa850: Location::GetServerPosition() const has the same machine code as oldscape::graphics::NXTPixToolkit::getWorldRenderer()

    // 0x10016ea80: Location::GetParentLocationType() const has the same machine code as oldscape::minimenu::Minimenu::GetPlayerOps() const

    // 0x1001e0d60: Location::VFXData::~VFXData() has the same machine code as hal::audio::AudioAPI::~AudioAPI()

    // 0x1003f5b50: Location::GetID() const has the same machine code as BASType::GetHillRotateZLimit() const

    // 0x100414b10: Location::SetLocationLOD(LODLevel) has the same machine code as LocationContainer::SetHasStartedBuild(bool)

    // 0x10042a990
    Location::Location(graphics::GraphNode* graphNode, const shared_ptr<World>& world, int arg3, int arg4,
                       const LocData& locData, bool arg6, bool arg7, int arg8, int arg9, int arg10, int arg11,
                       const shared_ptr<graphics::Model>& model)
        : LocationInterface(1, graphNode, world, 0, arg3), MakeSharedPool<Location, 256>() {
        shared_ptr<graphics::Model>* this_01;
        NXTPixToolkit* this_02;
        AABB* this_03;

        field_8 = &PTR__Location_100effd90;
        field_216 = nullptr;
        m_pPlayerVarDomain = nullptr;
        m_iD = arg4;
        m_locationLOD = true;
        field_237 = '\0';
        new (m_parentLocationType) shared_ptr();
        uint8_t* local_78 = m_locationType;
        uint8_t* local_80 = m_parentLocationType;
        new (local_78) shared_ptr();
        uint8_t* local_70 = &field_272;
        new (local_70) LocType::MultiLocTypeCache();
        new (field_352) LocData(locData);
        field_404 = arg6;
        field_405 = arg7;
        field_406 = 0;
        uint8_t* local_68 = &field_408;
        new (local_68) shared_ptr();
        new (&field_424) oldscape::rs2lib::worldmap::LocationData(arg3, arg8, arg9);
        field_436 = arg10;
        field_440 = arg11;
        field_444 = -1;
        m_builtGridSize = 1;
        field_452 = 1;
        m_attachedWallWidth = -1;
        m_isWDDBothOffsetMember = false;
        m_hidden = 0;
        field_462 = 0;
        *(uint64_t*)&field_464 = 1;
        new (field_472) shared_ptr();
        field_488 = arg4;
        uint8_t* local_60 = field_472;
        new (field_496) shared_ptr();
        uint8_t* local_50 = field_512;
        uint8_t* local_58 = field_496;
        new (local_50) shared_ptr();
        new (&field_528) math::Matrix44T<float>();
        field_592 = '\0';
        new (&field_608) math::Matrix44T<float>();
        field_672 = false;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_90;
        uint8_t* this_00 = &field_680;
        new (this_00) BuildRequest<graphics::Model, BuildModelMain>(model, local_90);
        uint8_t* local_48 = &field_712;
        new (local_48) BuildRequest<graphics::Model, BuildModelMain>();
        uint8_t* local_40 = &field_744;
        new (local_40) BuildRequest<graphics::Model, BuildModelMain>();
        uint8_t* local_38 = field_776;
        new (local_38) shared_ptr();
        *(uint16_t*)&field_792 = 0;
        new (field_796) EntityHighlightState();
        field_796[16] = 0;
        field_816.unique_ptr<true, void>();
        field_824 = -1;
        field_828 = 0;
        field_832 = 0;
        field_836 = 0;
        field_840 = 0;
        new (&field_848) eastl::vector<Location::VFXData>();
        if (this_00->IsTaskDone()) {
            this_01 = (shared_ptr<graphics::Model>*)this_00->SSOBeginPtr();
            this_02 = (NXTPixToolkit*)(*this_01).operator->();
            this_03 = (AABB*)this_02->GetScreen();
            if (this_03->IsValid()) {
                SetAABB(*this_03);
            }
        }
        field_468 = 0;
    }

    // 0x10042b010
    Location::Location(graphics::GraphNode* graphNode, const shared_ptr<World>& world, int arg3, int arg4,
                       const LocData& locData, bool arg6, bool arg7, int arg8, int arg9, int arg10, int arg11,
                       const shared_ptr<ChangeLocationRequest>& changeLocationRequest,
                       const shared_ptr<LocTypeCustomisation>& locTypeCustomisation)
        : LocationInterface(1, graphNode, world, 0, arg3), MakeSharedPool<Location, 256>() {
        field_8 = &PTR__Location_100effd90;
        field_216 = nullptr;
        m_pPlayerVarDomain = nullptr;
        m_iD = arg4;
        m_locationLOD = true;
        field_237 = '\0';
        new (m_parentLocationType) shared_ptr();
        new (m_locationType) shared_ptr();
        new (&field_272) LocType::MultiLocTypeCache();
        new (field_352) LocData(locData);
        field_404 = arg6;
        field_405 = arg7;
        field_406 = 0;
        new (&field_408) shared_ptr(locTypeCustomisation);
        new (&field_424) oldscape::rs2lib::worldmap::LocationData(arg3, arg8, arg9);
        field_436 = arg10;
        field_440 = arg11;
        field_444 = -1;
        m_builtGridSize = 1;
        field_452 = 1;
        m_attachedWallWidth = -1;
        m_isWDDBothOffsetMember = false;
        m_hidden = 0;
        field_462 = 0;
        *(uint64_t*)&field_464 = 1;
        new (field_472) shared_ptr();
        field_488 = arg4;
        new (field_496) shared_ptr(changeLocationRequest);
        new (field_512) shared_ptr();
        new (&field_528) math::Matrix44T<float>();
        field_592 = '\0';
        new (&field_608) math::Matrix44T<float>();
        field_672 = false;
        new (&field_680) BuildRequest<graphics::Model, BuildModelMain>();
        new (&field_712) BuildRequest<graphics::Model, BuildModelMain>();
        new (&field_744) BuildRequest<graphics::Model, BuildModelMain>();
        new (field_776) shared_ptr();
        *(uint16_t*)&field_792 = 0;
        new (field_796) EntityHighlightState();
        field_796[16] = 0;
        field_816.unique_ptr<true, void>();
        field_824 = -1;
        field_828 = 0;
        field_832 = 0;
        field_836 = 0;
        field_840 = 0;
        new (&field_848) eastl::vector<Location::VFXData>();
        field_468 = 1;
    }

    // 0x10042b370
    Location::Location(graphics::GraphNode* graphNode, const shared_ptr<World>& world, int arg3, int arg4,
                       const LocData& locData, bool arg6, bool arg7, int arg8, int arg9, int arg10, int arg11,
                       int arg12, int arg13, bool arg14)
        : LocationInterface(1, graphNode, world, 0, arg3), MakeSharedPool<Location, 256>() {
        field_8 = &PTR__Location_100effd90;
        field_216 = nullptr;
        m_pPlayerVarDomain = nullptr;
        m_iD = arg4;
        m_locationLOD = true;
        field_237 = '\0';
        new (m_parentLocationType) shared_ptr();
        new (m_locationType) shared_ptr();
        new (&field_272) LocType::MultiLocTypeCache();
        new (field_352) LocData(locData);
        field_404 = arg6;
        field_405 = arg7;
        field_406 = 0;
        new (&field_408) shared_ptr();
        new (&field_424) oldscape::rs2lib::worldmap::LocationData(arg3, arg8, arg9);
        field_436 = arg10;
        field_440 = arg11;
        field_444 = -1;
        m_builtGridSize = 1;
        field_452 = 1;
        m_attachedWallWidth = arg13;
        m_isWDDBothOffsetMember = arg14;
        m_hidden = 0;
        field_462 = 0;
        *(uint64_t*)&field_464 = 1;
        new (field_472) shared_ptr();
        field_488 = arg4;
        new (field_496) shared_ptr();
        new (field_512) shared_ptr();
        new (&field_528) math::Matrix44T<float>();
        field_592 = '\0';
        new (&field_608) math::Matrix44T<float>();
        field_672 = false;
        new (&field_680) BuildRequest<graphics::Model, BuildModelMain>();
        new (&field_712) BuildRequest<graphics::Model, BuildModelMain>();
        new (&field_744) BuildRequest<graphics::Model, BuildModelMain>();
        new (field_776) shared_ptr();
        *(uint16_t*)&field_792 = 0;
        new (field_796) EntityHighlightState();
        field_796[16] = 0;
        field_816.unique_ptr<true, void>();
        field_824 = -1;
        field_828 = 0;
        field_832 = 0;
        field_836 = 0;
        field_840 = 0;
        new (&field_848) eastl::vector<Location::VFXData>();
        field_72 = arg12;
        field_468 = 1;
    }

    // 0x10042b6e0
    Location::~Location() {
        field_8 = &PTR__Location_100effd90;
        Destruct();
        field_848.~vector();
        field_816.~unique_ptr();
        field_776->~shared_ptr();
        field_744.~ActiveComponent();
        field_712.~ActiveComponent();
        field_680.~ActiveComponent();
        field_512->~shared_ptr();
        field_496->~shared_ptr();
        field_472->~shared_ptr();
        field_408.~shared_ptr();
        field_272.~MultiLocTypeCache();
        m_locationType->~shared_ptr();
        m_parentLocationType->~shared_ptr();
    }

    // 0x10042b8b0
    void Location::Hide() {
        ClearAnimationState();
        if (m_hidden != '\0') {
            LogAssert("!m_hidden",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/Location.cpp",
                      155, "hide() - calling code must ensure method is not called on hidden locations.");
        }
        m_hidden = 1;
        if (field_468 != 0) {
            UpdateHeightMap(2);
        }
    }

    // 0x10042b910
    void Location::ClearAnimationState() {
        shared_ptr<graphics::Model>* this_02;

        if ((&field_816)->operator_cast_to_bool()) {
            ((AnimatedModel*)field_816.operator->())->ResetOverrideAnimation();
        }
        if ((field_680.SSOBeginPtr())->operator_cast_to_bool()) {
            this_02 = (shared_ptr<graphics::Model>*)field_680.SSOBeginPtr();
            ((Model*)(*this_02).operator->())->ClearAnimationState();
        }
    }

    // 0x10042b980
    unsigned long Location::UpdateHeightMap(HeightChangeType heightChangeType) {
        uint8_t* this_01;
        uint8_t* this_02;
        unsigned int uVar1;
        unsigned int uVar2;
        uint8_t bVar4;
        int arg6;
        int iVar5;
        int iVar6;
        int iVar7;
        LocType* pLVar8;
        World* pWVar9;
        HeightMap* pHVar10;
        shared_ptr<graphics::Model>* psVar11;
        Model* pMVar12;
        NXTPixToolkit* pNVar13;
        AABB* pAVar14;
        Vector2T<int>* pVVar15;
        float* pfVar16;
        uint64_t unaff_RBX;
        uint64_t uVar18;
        shared_ptr<LocType>* this_04;
        int iVar19;

        unsigned long uVar17 = (((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)1);
        if (heightChangeType == 0)
            goto LAB_10042badf;
        auto this_03 = GetWorld();
        uint8_t* this_00 = m_locationType;
        char cVar3 = this_00->operator_cast_to_bool();
        if (cVar3) {
            this_01 = &field_680;
            cVar3 = this_01->IsTaskRunning();
            if ((!cVar3) && (cVar3 = shared_ptr::operator_cast_to_bool(this_03), cVar3)) {
                pLVar8 = (LocType*)(*this_00).operator->();
                this_02 = field_352;
                bVar4 = this_02->GetShape();
                cVar3 = pLVar8->RaiseEntities((unsigned int)bVar4, field_405);
                this_04 = (shared_ptr<LocType>*)this_00;
                if (!cVar3) {
                    this_04 = (shared_ptr<LocType>*)m_parentLocationType;
                    pLVar8 = (LocType*)(*this_04).operator->();
                    bVar4 = this_02->GetShape();
                    cVar3 = pLVar8->RaiseEntities((unsigned int)bVar4, field_405);
                    if (cVar3)
                        goto LAB_10042ba68;
                } else {
                LAB_10042ba68:
                    pLVar8 = (LocType*)(*this_04).operator->();
                    bVar4 = this_02->GetShape();
                    arg6 = pLVar8->GetRaiseObjectGroundDecor((unsigned int)bVar4);
                    if (heightChangeType == 2) {
                        pWVar9 = (World*)(*this_03).operator->();
                        pHVar10 = pWVar9->GetHeightMap();
                        cVar3 = this_01->IsTaskDone();
                        if (!cVar3) {
                            cVar3 = '\0';
                        } else {
                            psVar11 = (shared_ptr<graphics::Model>*)this_01->SSOBeginPtr();
                            pMVar12 = (Model*)(*psVar11).operator->();
                            cVar3 = pMVar12->IsLoaded();
                        }
                        if ((arg6 != 0) || (cVar3)) {
                            iVar5 = GetHeightMapLevel();
                            uVar1 = field_428;
                            uVar2 = field_432;
                            pLVar8 = (LocType*)(*this_00).operator->();
                            bVar4 = this_02->GetRot();
                            iVar6 = pLVar8->GetGridWidth((unsigned int)bVar4);
                            pLVar8 = (LocType*)(*this_00).operator->();
                            bVar4 = this_02->GetRot();
                            iVar7 = pLVar8->GetGridLength((unsigned int)bVar4);
                            iVar19 = 0;
                            uVar18 = (uint64_t)((unsigned long)pLVar8 >> 8);
                            if (cVar3) {
                                psVar11 = (shared_ptr<graphics::Model>*)this_01->SSOBeginPtr();
                                pNVar13 = (NXTPixToolkit*)(*psVar11).operator->();
                                pAVar14 = (AABB*)pNVar13->GetScreen();
                                cVar3 = pAVar14->IsValid();
                                if (cVar3) {
                                    psVar11 = (shared_ptr<graphics::Model>*)this_01->SSOBeginPtr();
                                    pNVar13 = (NXTPixToolkit*)(*psVar11).operator->();
                                    pNVar13 = (NXTPixToolkit*)pNVar13->GetScreen();
                                    pVVar15 = (Vector2T<int>*)pNVar13->GetScreen();
                                    pfVar16 = (float*)pVVar15->y();
                                    iVar19 = (int)*pfVar16;
                                }
                            }
                            pHVar10->RemoveLocationHeightOffset(iVar5, uVar1, uVar2, iVar6, iVar7, arg6, iVar19);
                        LAB_10042bd47:
                            uVar17 = (((uint64_t)uVar18 << 8) | (uint8_t)1);
                            goto LAB_10042badf;
                        }
                    } else if (heightChangeType == 1) {
                        pWVar9 = (World*)(*this_03).operator->();
                        pHVar10 = pWVar9->GetHeightMap();
                        cVar3 = this_01->IsTaskDone();
                        if (!cVar3) {
                            cVar3 = '\0';
                        } else {
                            psVar11 = (shared_ptr<graphics::Model>*)this_01->SSOBeginPtr();
                            pMVar12 = (Model*)(*psVar11).operator->();
                            cVar3 = pMVar12->IsLoaded();
                        }
                        if ((arg6 != 0) || (cVar3)) {
                            iVar5 = GetHeightMapLevel();
                            uVar1 = field_428;
                            uVar2 = field_432;
                            pLVar8 = (LocType*)(*this_00).operator->();
                            bVar4 = this_02->GetRot();
                            iVar6 = pLVar8->GetGridWidth((unsigned int)bVar4);
                            pLVar8 = (LocType*)(*this_00).operator->();
                            bVar4 = this_02->GetRot();
                            iVar7 = pLVar8->GetGridLength((unsigned int)bVar4);
                            iVar19 = 0;
                            uVar18 = (uint64_t)((unsigned long)pLVar8 >> 8);
                            if (cVar3) {
                                psVar11 = (shared_ptr<graphics::Model>*)this_01->SSOBeginPtr();
                                pNVar13 = (NXTPixToolkit*)(*psVar11).operator->();
                                pAVar14 = (AABB*)pNVar13->GetScreen();
                                cVar3 = pAVar14->IsValid();
                                if (cVar3) {
                                    psVar11 = (shared_ptr<graphics::Model>*)this_01->SSOBeginPtr();
                                    pNVar13 = (NXTPixToolkit*)(*psVar11).operator->();
                                    pNVar13 = (NXTPixToolkit*)pNVar13->GetScreen();
                                    pVVar15 = (Vector2T<int>*)pNVar13->GetScreen();
                                    pfVar16 = (float*)pVVar15->y();
                                    iVar19 = (int)*pfVar16;
                                }
                            }
                            pHVar10->AddLocationHeightOffset(iVar5, uVar1, uVar2, iVar6, iVar7, arg6, iVar19);
                            goto LAB_10042bd47;
                        }
                    }
                }
                uVar17 = (((uint64_t)((int64_t)((unsigned long)this_00 >> 8)) << 8) | (uint8_t)1);
                goto LAB_10042badf;
            }
        }
        uVar17 = 0;
    LAB_10042badf:
        return uVar17 & 4294967295;
    }

    // 0x10042bd50
    void Location::Unhide() {
        if (m_hidden == '\0') {
            LogAssert("m_hidden",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/Location.cpp",
                      166, "unhide() - calling code must ensure method is only called on hidden locations.");
        }
        m_hidden = 0;
        if (field_468 != 0) {
            UpdateHeightMap(1);
        }
        BeginPlayingDefaultAnimation();
    }

    // 0x10042bdc0
    void Location::BeginPlayingDefaultAnimation() {
        int arg1;

        if ((&field_816)->operator_cast_to_bool() != '\0') {
            arg1 = GetDefaultAnimationToPlay();
            if (arg1 != -1) {
                ((AnimatedModel*)field_816.operator->())->RequestDefaultAnimation(arg1, false, false);
            }
        }
    }

    // 0x10042be50
    uint64_t Location::GetDefaultAnimationToPlay() const {
        LocType* pLVar3;

        bool cVar1 = m_locationType->operator_cast_to_bool();
        uint64_t uVar2 = 4294967295;
        if (cVar1) {
            pLVar3 = (LocType*)(*m_locationType).operator->();
            uVar2 = pLVar3->GetDefaultAnimation();
            if ((int)uVar2 == -1) {
                pLVar3 = (LocType*)(*m_parentLocationType).operator->();
                uVar2 = pLVar3->GetDefaultAnimation();
            }
        }
        return uVar2;
    }

    // 0x10042beb0
    void Location::BeginPlayingOverrideAnimation() {
        int iVar1 = GetDefaultAnimationToPlay();
        int arg2 = GetOverrideAnimationToPlay();
        if (arg2 != iVar1) {
            ((AnimatedModel*)field_816.operator->())->RequestOverrideAnimation(false, arg2, 0, false);
        }
    }

    // 0x10042bf10
    unsigned long Location::GetOverrideAnimationToPlay() const {
        bool cVar1;
        LocType* pLVar3;

        unsigned long uVar2 = (unsigned long)(unsigned int)field_824;
        if (field_824 == 4294967295) {
            cVar1 = m_locationType->operator_cast_to_bool();
            uVar2 = 4294967295;
            if (cVar1) {
                pLVar3 = (LocType*)(*m_locationType).operator->();
                uVar2 = pLVar3->GetAnimation();
            }
        }
        if ((int)uVar2 == -1) {
            cVar1 = m_parentLocationType->operator_cast_to_bool();
            uVar2 = 4294967295;
            if (cVar1) {
                pLVar3 = (LocType*)(*m_parentLocationType).operator->();
                uVar2 = pLVar3->GetAnimation();
            }
        }
        return uVar2;
    }

    // 0x10042bf90
    void Location::ActivateRoofRemove() {
        if (field_462 != '\0') {
            LogAssert(
                "!m_roofRemoved",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/entities/"
                "Location.cpp",
                215, "activateRoofRemove() - calling code must ensure method is not called on roof removed locations.");
        }
        field_462 = 1;
        if (field_468 != 0) {
            UpdateHeightMap(2);
        }
    }

    // 0x10042bff0
    void Location::DeactivateRoofRemove() {
        if (field_462 == '\0') {
            LogAssert(
                "m_roofRemoved",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/entities/"
                "Location.cpp",
                226,
                "deactivateRoofRemove() - calling code must ensure method is only called on roof removed locations.");
        }
        field_462 = 0;
        if (field_468 != 0) {
            UpdateHeightMap(1);
        }
    }

    // 0x10042c050
    void Location::ClearJobResources() {
        field_712.Clear();
        field_744.Clear();
        field_776->reset();
    }

    // 0x10042c110
    void Location::RequestOverrideAnimation(int arg1, int arg2, unsigned int arg3, unsigned int arg4) {
        field_824 = arg1;
        field_828 = arg2;
        field_832 = arg3;
        field_836 = arg4;
        MarkAsNoLongerAtTargetLOD();
    }

    // 0x10042c140
    unsigned long Location::UpdateAudio() {
        int* piVar1;
        uint8_t* this_01;
        int arg1;
        uint32_t uVar3;
        int iVar4;
        int iVar5;
        LocType* pLVar6;
        SoundInstance* this_02;
        uint64_t uVar7;
        uint64_t uVar8;
        unsigned long uVar9;

        uint8_t*** this_00 = &field_8;
        bool cVar2 = this_00->UpdateAudio();
        if (cVar2) {
            this_01 = m_locationType;
            cVar2 = this_01->operator_cast_to_bool();
            if (cVar2) {
                pLVar6 = (LocType*)(*this_01).operator->();
                arg1 = pLVar6->GetBackgroundSound();
                if (arg1 < 0) {
                    this_00->StopSounds(1, 0.15);
                } else {
                    this_02 = this_00->GetSoundInstance(arg1);
                    if (this_02 != nullptr) {
                        cVar2 = this_02->IsAudible();
                        uVar9 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)1);
                        if (!cVar2) {
                            this_02->Suspend(0.0);
                        }
                        goto LAB_10042c1bd;
                    }
                    this_00->StopSounds(1, 0.15);
                    pLVar6 = (LocType*)(*this_01).operator->();
                    uVar7 = pLVar6->GenerateBackgroundSoundRandomRate();
                    pLVar6 = (LocType*)(*this_01).operator->();
                    uVar3 = pLVar6->GetBackgroundSoundVolume();
                    pLVar6 = (LocType*)(*this_01).operator->();
                    iVar4 = pLVar6->GetBackgroundSoundDropoffRange();
                    pLVar6 = (LocType*)(*this_01).operator->();
                    iVar5 = pLVar6->GetBackgroundSoundRange();
                    uVar8 = GetWorldPosition();
                    piVar1 = &field_68;
                    this = (Location*)field_8;
                    (*(void (*)(...))field_16)(this_00, arg1, uVar3, 1, iVar4 << 7, iVar5 << 7, uVar8,
                                               18446744073709551615, 15, 1, *piVar1, uVar7);
                }
                uVar9 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)1);
                goto LAB_10042c1bd;
            }
        }
        uVar9 = 0;
    LAB_10042c1bd:
        return uVar9 & 4294967295;
    }

    // 0x10042c440
    void Location::UpdateRandomSounds(unsigned int arg1) {
        int iVar2;
        int arg2;
        unsigned int uVar3;
        unsigned int arg4;
        unsigned int arg5;
        unsigned int arg6;
        unsigned int arg7;
        unsigned int arg8;
        unsigned int arg9;
        LocType* pLVar4;
        Array<VarValue>* this_01;
        int* piVar5;
        Vector3T<float>* vector3;

        uint8_t* this_00 = m_locationType;
        if (this_00->operator_cast_to_bool()) {
            field_840 = field_840 - arg1;
            pLVar4 = (LocType*)(*this_00).operator->();
            this_01 = (Array<VarValue>*)pLVar4->GetRandomSounds();
            if (((int)field_840 < 1) && (this_01 != nullptr)) {
                if (!(this_01->empty())) {
                    if (!(field_8.HasSoundInstance(2))) {
                        iVar2 = this_01->end();
                        iVar2 = math::Rand(iVar2 - 1);
                        piVar5 = (int*)(*this_01)[(long)iVar2];
                        iVar2 = *piVar5;
                        pLVar4 = (LocType*)(*this_00).operator->();
                        arg2 = pLVar4->GetBackgroundSoundVolume();
                        pLVar4 = (LocType*)(*this_00).operator->();
                        uVar3 = pLVar4->GetRandomSoundShape();
                        pLVar4 = (LocType*)(*this_00).operator->();
                        arg4 = pLVar4->GetBackgroundSoundDropoffRange();
                        pLVar4 = (LocType*)(*this_00).operator->();
                        arg5 = pLVar4->GetBackgroundSoundRange();
                        pLVar4 = (LocType*)(*this_00).operator->();
                        arg6 = pLVar4->GetBackgroundSoundRateMin();
                        pLVar4 = (LocType*)(*this_00).operator->();
                        arg7 = pLVar4->GetBackgroundSoundRateMax();
                        pLVar4 = (LocType*)(*this_00).operator->();
                        arg8 = pLVar4->GetRandomSoundMin();
                        pLVar4 = (LocType*)(*this_00).operator->();
                        arg9 = pLVar4->GetRandomSoundMax();
                        vector3 = (Vector3T<float>*)GetWorldPosition();
                        uVar3 =
                            AddRandomSound(iVar2, arg2, uVar3, arg4, arg5, arg6, arg7, arg8, arg9, *vector3, field_68);
                        field_840 = uVar3;
                    }
                }
            }
        }
    }

    // 0x10042c7b0
    unsigned long Location::NeedsAnimatedModel() const {
        int iVar2;
        shared_ptr<graphics::Model>* this_00;
        uint64_t unaff_R15;
        unsigned long uVar4;

        if (m_locationType->end() == 0) {
            LogAssert("m_locationType.get()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/Location.cpp",
                      365, "Location: needsAnimatedModel() called without valid location type available");
        }
        bool cVar1 = field_680.IsTaskDone();
        if (cVar1) {
            this_00 = (shared_ptr<graphics::Model>*)field_680.SSOBeginPtr();
            cVar1 = ((Model*)(*this_00).operator->())->IsLoaded();
            if (cVar1) {
                iVar2 = GetOverrideAnimationToPlay();
                uVar4 = (((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)1);
                if (iVar2 == -1) {
                    cVar1 = ((LocType*)(*m_locationType).operator->())->HasParticles();
                    if (!cVar1) {
                        cVar1 = (&field_816)->operator_cast_to_bool();
                        if (cVar1) {
                            cVar1 = ((AnimatedModel*)field_816.operator->())->InUse();
                            if (cVar1)
                                goto LAB_10042c896;
                        }
                        uVar4 = 0;
                    }
                }
            LAB_10042c896:
                return uVar4 & 4294967295;
            }
        }
        LogAssert("m_model.IsTaskDone() && m_model.GetAsset()->IsLoaded()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/entities/"
                  "Location.cpp",
                  366, "Location: needsAnimatedMode() called without valid model available");
    }

    // 0x10042c910
    bool Location::GetDefaultModel(AnimatedModelPair& animatedModelPair, int arg2) {
        uint32_t in_register_00000034;
        shared_ptr<graphics::Model>* shared_ptr;

        shared_ptr = (shared_ptr<graphics::Model>*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        auto psVar1 = animatedModelPair[28].field_8.SSOBeginPtr();
        *shared_ptr = *psVar1;
        psVar1 = (shared_ptr<graphics::Model>*)((animatedModelPair + 31))->SSOBeginPtr();
        (*(shared_ptr + 16)) = *psVar1;
        return shared_ptr->end() != 0;
    }

    // 0x10042c970
    unsigned long Location::Build(graphics::RT7Core& rt7Core, Js5ResourceProvider& js5ResourceProvider,
                                  ConfigProvider& configProvider, AssetBuilder& assetBuilder, unsigned int arg5,
                                  PlayerVarDomain* playerVarDomain) {
        uint8_t* uint8_t;
        unique_ptr* this_00;
        unsigned int uVar1;
        bool bVar2;
        uint8_t bVar4;
        uint8_t uVar5;
        uint32_t uVar6;
        int iVar7;
        int arg3;
        shared_ptr<LocType>* locType;
        LocType* pLVar9;
        long lVar11;
        World* pWVar12;
        SceneViewData* this_01;
        QuaternionT<float>* pQVar13;
        AnimatedModel* pAVar14;
        unsigned long uVar15;
        GraphNode* pGVar16;
        Text* pTVar17;
        LocationContainer* pLVar18;
        ChangeLocationRequest* pCVar19;
        shared_ptr* psVar20;
        shared_ptr<graphics::Model>* psVar21;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_05;
        LocData* pLVar22;
        ObjAppearanceData* this_06;
        int* arg6;
        CommandLine* this_07;
        uint32_t in_register_00000084;
        PlayerVarDomain* pPVar23;
        AssetBuilder* pAVar24;
        LocData* this_08;
        PlayerVarDomain* in_stack_00000008;
        Matrix44T<float> aMStack_12f;
        Vector3T<float>* in_stack_fffffffffffffed8;
        ColourHSL local_e8;
        int local_d8[4];
        LocShapes local_c0;
        float local_bc;
        int local_b8;
        LocType* local_b0;
        LocType* local_a8;
        HeightMap* local_a0;
        LinkMap* local_98;
        shared_ptr* local_90;
        CoordGrid local_88;
        uint64_t local_78;
        uint32_t local_70;
        AssetBuilder* local_68;
        long local_60;
        GraphNode* local_58;
        int local_4c;
        int local_48;
        LocShape local_44;
        ConfigProvider* local_40;
        LocData* local_38;

        auto plVar8 = GraphicsApp::Instance();
        char cVar3 = (**(void (**)(...))(*plVar8 + 224))(plVar8);
        if (!cVar3) {
            LogAssert("GraphicsApp::Instance()->IsInsideMainLogic()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/Location.cpp",
                      402, nullptr);
        }
        cVar3 = graphics::Model::IsReadyToConstruct(js5ResourceProvider);
        if (cVar3) {
            this_08 = (LocData*)(rt7Core.m_immediateThreadPool + 96);
            local_68 = (AssetBuilder*)(((uint64_t)in_register_00000084 << 32) | (uint32_t)arg5);
            local_40 = (ConfigProvider*)assetBuilder;
            cVar3 = this_08->operator_cast_to_bool();
            if (!cVar3) {
                pPVar23 = nullptr;
                locType = local_40->GetConfig<LocType>(*(int*)(rt7Core.m_immediateThreadPool + 88), nullptr);
                *this_08 = *locType;
                cVar3 = this_08->operator_cast_to_bool();
                if (!cVar3)
                    goto LAB_10042d28c;
            }
            pLVar9 = (LocType*)(*this_08).operator->();
            cVar3 = pLVar9->IsMultiLoc();
            psVar20 = (shared_ptr*)(rt7Core.m_immediateThreadPool + 112);
            if (!cVar3) {
                *psVar20 = *this_08;
            } else {
                local_60 = psVar20->end();
                local_38 = this_08;
                if ((uint8_t*)((rt7Core.m_immediateThreadPool + 128))
                        ->GetMultiLoc(*psVar20, *this_08, in_stack_00000008, local_40) == DataStatus::MISSING) {
                    bVar4 = rt7Core.GetTargetLOD();
                    rt7Core.SetCurrentLOD((unsigned int)bVar4);
                    pPVar23 = (PlayerVarDomain*)(((uint64_t)((int64_t)((unsigned long)in_stack_00000008 >> 8)) << 8) |
                                                 (uint8_t)1);
                    bVar2 = false;
                } else {
                    cVar3 = shared_ptr::operator_cast_to_bool(psVar20);
                    if (!cVar3) {
                        bVar2 = false;
                        pPVar23 = nullptr;
                    } else {
                        lVar11 = psVar20->end();
                        bVar2 = true;
                        if (local_60 != lVar11) {
                            ((rt7Core.m_postProcessManager + 400))->clear();
                        }
                        pPVar23 = in_stack_00000008;
                    }
                }
                this_08 = local_38;
                if (!bVar2)
                    goto LAB_10042d28c;
            }
            pLVar9 = (LocType*)(*this_08).operator->();
            cVar3 = pLVar9->IsActive();
            if (!cVar3) {
                rt7Core.SetOccludesView(true);
            }
            cVar3 = shared_ptr::operator_cast_to_bool(psVar20);
            if (!cVar3) {
                bVar4 = rt7Core.GetTargetLOD();
                rt7Core.SetCurrentLOD((unsigned int)bVar4);
            } else {
                local_90 = psVar20;
                local_98 = (LinkMap*)rt7Core.GetWorld();
                local_60 = (((uint64_t)local_60._4_4_ << 32) | (uint32_t)(*(int*)&rt7Core.field_428 << 7));
                local_4c = *(int*)&rt7Core.field_432 << 7;
                pLVar9 = (LocType*)(*this_08).operator->();
                uint8_t = &rt7Core.field_352;
                bVar4 = uint8_t->GetRot();
                uVar6 = pLVar9->GetGridWidth((unsigned int)bVar4);
                local_58 = (GraphNode*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)uVar6);
                pLVar9 = (LocType*)(*this_08).operator->();
                bVar4 = uint8_t->GetRot();
                iVar7 = pLVar9->GetGridLength((unsigned int)bVar4);
                local_38 = (LocData*)uint8_t;
                if (*(int*)&rt7Core.field_444 == -1) {
                    local_48 = iVar7;
                    local_b0 = (LocType*)(*this_08).operator->();
                    local_a8 = (LocType*)this_08->end();
                    pWVar12 = (World*)(*local_98).operator->();
                    local_a0 = pWVar12->GetHeightMap();
                    iVar7 = rt7Core.GetHeightMapLevel((int)local_60, local_4c);
                    uVar1 = *(unsigned int*)&rt7Core.field_428;
                    local_44 = *(LocShape*)&rt7Core.field_432;
                    bVar4 = local_38->GetRot();
                    pLVar22 = local_38;
                    iVar7 = local_b0->GetLocationHeight(*local_a8, *local_a0, iVar7, uVar1, local_44,
                                                        (unsigned int)bVar4, rt7Core.field_405 == '\0');
                    *(int*)&rt7Core.field_444 = iVar7;
                    if (iVar7 != -1) {
                        iVar7 = (unsigned int)local_58 * 128;
                        local_48 = local_48 << 7;
                        local_58 = rt7Core.GetNode();
                        this_01 = (SceneViewData*)(*local_90).operator->();
                        local_b0 = (LocType*)this_01->GetStippleNearClipParams();
                        uVar5 = pLVar22->GetShape();
                        local_a0 = (HeightMap*)(((uint64_t)local_a0._1_7_ << 8) | (uint8_t)uVar5);
                        uVar5 = pLVar22->GetRot();
                        local_44 = (((uint32_t)local_44._1_3_ << 8) | (uint8_t)uVar5);
                        local_a8 = (LocType*)(((uint64_t)local_a8._4_4_ << 32) |
                                              (uint32_t)(*(uint32_t*)(rt7Core.m_postProcessManager + 8)));
                        bVar4 = rt7Core.m_postProcessManager[12];
                        cVar3 = local_38->y();
                        local_c0.GetShapeOffsetAndRotation(local_bc, local_b8, *((int*)((unsigned long)local_a0 & 255)),
                                                           local_44 & 255, (Rotation90)local_a8, (unsigned int)bVar4,
                                                           (bool)(cVar3 + ' '), *in_stack_fffffffffffffed8);
                        local_88 = math::Vector3T();
                        local_88.field_0 = (unsigned int)((float)(iVar7 / 2) + (float)(*(int*)&rt7Core.field_436 << 7));
                        local_88.field_4 = (unsigned int)(float)*(int*)&rt7Core.field_444;
                        local_88.field_8 =
                            (unsigned int)((float)(local_48 / 2) + (float)(*(int*)&rt7Core.field_440 << 7));
                        pQVar13 = (QuaternionT<float>*)local_38->y();
                        new (&local_78) math::Vector3T();
                        pLVar22 = local_38;
                        new (&aMStack_12f + 7) math::Matrix44T<float>(*pQVar13, local_78);
                        uVar6 = 0;
                        local_e8 = math::ColourHSL((float)(int)local_bc, 0.0, (float)local_b8);
                        local_78 = (&aMStack_12f + 7)->TransformVector(local_e8);
                        local_70 = uVar6;
                        local_88 += local_78;
                        local_88 += *local_b0;
                        lVar11 = pLVar22->y();
                        local_88 += (*((lVar11 + 16)));
                        pGVar16 = local_58;
                        local_58->SetTranslation(local_88);
                        new (&local_78) math::QuaternionT<float>();
                        local_78.FromAxisAngle(*PTR_UP_100ee66d0, local_c0.field_0);
                        pQVar13 = (QuaternionT<float>*)pLVar22->y();
                        *local_d8** pQVar13;
                        local_78 = *local_d8;
                        pGVar16->SetRotation(local_78);
                        lVar11 = pLVar22->y();
                        pGVar16->SetScale(*((lVar11 + 32)));
                    }
                }
                if (*(int*)&rt7Core.field_444 != -1) {
                    if (*(int*)&rt7Core.field_72 == -1) {
                        pLVar9 = (LocType*)(*local_90).operator->();
                        pWVar12 = (World*)(*local_98).operator->();
                        local_98 = pWVar12->GetLinkMap();
                        uVar6 = rt7Core.GetDuration();
                        local_90 = (shared_ptr*)(((uint64_t)local_90._4_4_ << 32) | (uint32_t)uVar6);
                        uVar1 = *(unsigned int*)&rt7Core.field_428;
                        local_58 =
                            (GraphNode*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)(*(uint32_t*)&rt7Core.field_432));
                        bVar4 = local_38->GetRot();
                        cVar3 = pLVar9->GetMaxRemoveRoofLevel(*local_98, (int)local_90, uVar1, (unsigned int)local_58,
                                                              (unsigned int)bVar4);
                        *(int*)&rt7Core.field_72 = (int)cVar3;
                    }
                    pAVar24 = local_68;
                    cVar3 = BuildModel((Location*)rt7Core, (RT7Core*)js5ResourceProvider, local_68, (int)local_60,
                                       local_4c);
                    if (cVar3) {
                        cVar3 =
                            BuildAnimatedModel((Location*)rt7Core, (RT7Core*)js5ResourceProvider, local_40, pAVar24);
                        if (cVar3) {
                            if (rt7Core.m_postProcessManager[13] == '\0') {
                                cVar3 = UpdateHeightMap((Location*)rt7Core,
                                                        *(HeightChangeType*)(rt7Core.m_postProcessManager + 16));
                                if (!cVar3)
                                    goto LAB_10042d289;
                            }
                            if (*(int*)(rt7Core.m_postProcessManager + 16) != 0) {
                                *(int*)(rt7Core.m_postProcessManager + 20) = *(int*)(rt7Core.m_postProcessManager + 16);
                                *(uint32_t*)(rt7Core.m_postProcessManager + 16) = 0;
                            }
                            pAVar24 = (AssetBuilder*)(rt7Core.m_postProcessManager + 48);
                            cVar3 = pAVar24->operator_cast_to_bool();
                            if (cVar3) {
                                this_00 = (unique_ptr*)(rt7Core.m_postProcessManager + 368);
                                cVar3 = std::unique_ptr::operator_cast_to_bool(this_00);
                                if (cVar3) {
                                    uVar6 = ((GraphicsApp*)GraphicsApp::Instance())->GetFrameCount();
                                    local_40 = (ConfigProvider*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)uVar6);
                                    pAVar14 = (AnimatedModel*)(*this_00).operator->();
                                    uVar1 = (unsigned int)playerVarDomain;
                                    local_68 = pAVar24;
                                    pAVar14->Build((unsigned int)local_40, (unsigned int)playerVarDomain, false, 0);
                                    pAVar14 = (AnimatedModel*)(*this_00).operator->();
                                    pAVar24 = local_68;
                                    uVar15 = pAVar14->IsReady((unsigned int)local_40, uVar1);
                                    if ((char)uVar15 == '\0') {
                                        pPVar23 = (PlayerVarDomain*)((uVar15 >> 8 & 16777215) << 8);
                                        goto LAB_10042d28c;
                                    }
                                }
                            }
                            psVar20 = (shared_ptr*)(rt7Core.m_postProcessManager + 64);
                            cVar3 = shared_ptr::operator_cast_to_bool(psVar20);
                            if (cVar3) {
                                pGVar16 = rt7Core.GetNode();
                                pTVar17 = (Text*)pGVar16->GetParent();
                                pLVar18 = (LocationContainer*)pTVar17->GetLinkObjCount();
                                pCVar19 = (ChangeLocationRequest*)**psVar20;
                                pLVar18->HideLocation(*pCVar19);
                            }
                            local_40 = (ConfigProvider*)psVar20;
                            cVar3 = pAVar24->operator_cast_to_bool();
                            if (cVar3) {
                                if ((rt7Core.m_immediateThreadPool[93] != '\0') || (m_enableFadeIn == '\0')) {
                                    psVar20 = (shared_ptr*)((rt7Core.m_postProcessManager + 232))->SSOBeginPtr();
                                    cVar3 = shared_ptr::operator_cast_to_bool(psVar20);
                                    if (!cVar3) {
                                        LogAssert("m_model.GetAsset()",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/game/runetek5/scene/entities/Location.cpp",
                                                  591, nullptr);
                                    }
                                    psVar21 = (shared_ptr<graphics::Model>*)((rt7Core.m_postProcessManager + 232))
                                                  ->SSOBeginPtr();
                                    ((Model*)(*psVar21).operator->())->SetFadeTime(0);
                                }
                                local_78 = (((uint64_t)local_78._4_4_ << 32) | (uint32_t)2);
                                local_d8[0] = ((HeadbarType*)(*pAVar24).operator->())->GetStickTime();
                                local_88.field_0 = 4294967295;
                                this_05 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator,
                                                               0>*)(*pAVar24)
                                              .operator->();
                                pLVar22 = (LocData*)this_05->second();
                                this_06 = (ObjAppearanceData*)(*pAVar24).operator->();
                                arg6 = (int*)this_06->GetOffset();
                                local_e8.field_0 = 0.0;
                                MakeSharedPool<ChangeLocationRequest, 128>::MakeShared<
                                    ChangeLocationRequestType, int, int, CoordGrid const&, LocData const&, int>(
                                    (ChangeLocationRequestType*)(&aMStack_12f + 7), (int*)&local_78, local_d8,
                                    &local_88, pLVar22, arg6);
                                *local_40 = (*((&aMStack_12f + 7)));
                                ((&aMStack_12f + 7))->~shared_ptr();
                                pGVar16 = rt7Core.GetNode();
                                pTVar17 = (Text*)pGVar16->GetParent();
                                pLVar18 = (LocationContainer*)pTVar17->GetLinkObjCount();
                                pCVar19 = (ChangeLocationRequest*)pAVar24->end();
                                pLVar18->DeleteLocation(*pCVar19, rt7Core);
                                pAVar24->reset();
                            }
                            pLVar22 = local_38;
                            psVar21 =
                                (shared_ptr<graphics::Model>*)((rt7Core.m_postProcessManager + 232))->SSOBeginPtr();
                            this_07 = (CommandLine*)(*psVar21).operator->();
                            iVar7 = rt7Core.GetHeightMapLevel((int)local_60, local_4c);
                            this_07->SetSelectionStart(iVar7);
                            psVar21 =
                                (shared_ptr<graphics::Model>*)((rt7Core.m_postProcessManager + 232))->SSOBeginPtr();
                            local_40 = (ConfigProvider*)(*psVar21).operator->();
                            local_68 = (AssetBuilder*)rt7Core.GetWorldPosition();
                            pLVar9 = (LocType*)(*this_08).operator->();
                            bVar4 = pLVar22->GetRot();
                            iVar7 = pLVar9->GetGridWidth((unsigned int)bVar4);
                            pLVar9 = (LocType*)(*this_08).operator->();
                            bVar4 = pLVar22->GetRot();
                            arg3 = pLVar9->GetGridLength((unsigned int)bVar4);
                            local_40->SetPointLightBounds(*local_68, iVar7, arg3);
                            bVar4 = rt7Core.GetTargetLOD();
                            rt7Core.SetCurrentLOD((unsigned int)bVar4);
                            BuildVFX((Location*)rt7Core, (RT7Core*)js5ResourceProvider);
                            pPVar23 =
                                (PlayerVarDomain*)(((uint64_t)((uint64_t)(uint32_t)((unsigned int)iVar7 >> 8)) << 8) |
                                                   (uint8_t)1);
                            goto LAB_10042d28c;
                        }
                    }
                }
            }
        }
    LAB_10042d289:
        pPVar23 = nullptr;
    LAB_10042d28c:
        return (unsigned long)pPVar23 & 4294967041;
    }

    // 0x10042d530
    unsigned long Location::BuildModel(graphics::RT7Core& rt7Core, AssetBuilder& assetBuilder, int arg3, int arg4) {
        uint8_t* puVar1;
        uint8_t* this_00;
        bool arg6;
        unsigned int uVar2;
        bool cVar3;
        RT7Core* rt7Core_00;
        uint64_t this_01;
        uint8_t uVar5;
        uint8_t bVar6;
        Rotation90 RVar7;
        int iVar8;
        int arg4_00;
        uint32_t uVar9;
        shared_ptr<graphics::Model>* psVar10;
        Model* pMVar11;
        BuildTerrainMain* this_02;
        AssetJob* pAVar12;
        LoginManager* this_04;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_05;
        LocType* pLVar13;
        AABB* this_06;
        LocTypeCustomisation* locTypeCustomisation;
        uint8_t* puVar15;
        shared_ptr<World>* psVar16;
        HeightMap* heightMap;
        Logger* pLVar17;
        GraphNode* pGVar18;
        Text* pTVar19;
        LocationContainer* pLVar20;
        ChangeLocationRequest* pCVar21;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_10;
        LocData* locData;
        ObjAppearanceData* this_11;
        int* arg6_00;
        Rotation90* rotation90;
        NXTPixToolkit* this_12;
        World* pWVar22;
        shared_ptr<graphics::Model>* psVar23;
        unsigned long uVar25;
        unsigned int uVar26;
        uint32_t uVar27;
        int local_158[6];
        ChangeLocationRequestType local_140;
        int local_124;
        LocType* local_118;
        int local_110[4];
        LocType* local_100;
        LocType* local_f0;
        LocType* local_e8;
        uint8_t local_e0[16];
        LogStream local_c8;

        uint8_t* puVar24 = (uint8_t*)(unsigned long)(unsigned int)arg3;
        RT7Core* local_120 = rt7Core;
        ScopedGPUMemoryZone local_d0("BuildLocation");
        local_e0._8_8_ = &field_680;
        bool cVar4 = local_e0._8_8_->IsTaskDone();
        if (!cVar4) {
        LAB_10042d5ba:
            puVar1 = m_locationType;
            this_02 = (BuildTerrainMain*)(*puVar1).operator->();
            cVar4 = ((Array<VarValue>*)this_02->GetRequestData())->empty();
            if (!cVar4) {
                puVar24 = field_776;
                cVar4 = puVar24->operator_cast_to_bool();
                if (!cVar4) {
                    local_f0 = (LocType*)(*puVar1).operator->();
                    this_00 = field_352;
                    uVar5 = this_00->GetShape();
                    local_e8 = (LocType*)(((uint64_t)local_e8._1_7_ << 8) | (uint8_t)uVar5);
                    local_100 = (LocType*)assetBuilder;
                    RVar7 = this_00->GetRot();
                    arg6 = field_404;
                    local_e0._8_8_ = puVar1;
                    locTypeCustomisation = (LocTypeCustomisation*)field_408.end();
                    this_01 = local_e0._8_8_;
                    pLVar13 = local_100;
                    rt7Core_00 = local_120;
                    local_120 = (RT7Core*)&field_712;
                    puVar15 = (uint8_t*)local_f0->GetModels(rt7Core_00, *local_100, field_712,
                                                            (unsigned int)(uint8_t)local_e8, RVar7 & 255, arg6,
                                                            locTypeCustomisation, 8192);
                    uVar27 = (uint32_t)((unsigned long)locTypeCustomisation >> 32);
                    if (puVar15 == DataStatus::NOTLOADED)
                        goto LAB_10042dd8c;
                    if (puVar15 == DataStatus::MISSING) {
                        pLVar17 = logger::default_logger();
                        local_c8 = logger::LogStream(LOGGER_SCENE);
                        uVar9 = ((GameToken*)(*this_01).operator->())->GetStatus();
                        ((uint8_t)pLVar17)
                            ->Log(nullptr, (LogLevel)&local_c8, 3, 14428624, 1316,
                                  "Missing models for location type %d", (((uint64_t)uVar27 << 32) | (uint32_t)uVar9));
                        puVar24 = field_512;
                        cVar4 = puVar24->operator_cast_to_bool();
                        if (cVar4) {
                            pGVar18 = GetNode();
                            pTVar19 = (Text*)pGVar18->GetParent();
                            pLVar20 = (LocationContainer*)pTVar19->GetLinkObjCount();
                            pCVar21 = (ChangeLocationRequest*)puVar24->end();
                            pLVar20->HideLocation(*pCVar21);
                        }
                        puVar1 = field_496;
                        cVar4 = puVar1->operator_cast_to_bool();
                        if (cVar4) {
                            local_158[0] = 2;
                            local_110[0] = ((HeadbarType*)(*puVar1).operator->())->GetStickTime();
                            local_e0._0_4_ = 4294967295;
                            this_10 =
                                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*puVar1)
                                    .operator->();
                            locData = (LocData*)this_10->second();
                            this_11 = (ObjAppearanceData*)(*puVar1).operator->();
                            arg6_00 = (int*)this_11->GetOffset();
                            local_e0._4_4_ = 0;
                            MakeSharedPool<ChangeLocationRequest, 128>::MakeShared<
                                ChangeLocationRequestType, int, int, CoordGrid const&, LocData const&, int>(
                                &local_140, local_158, local_110, (CoordGrid*)local_e0, locData, arg6_00);
                            *puVar24 = local_140;
                            pGVar18 = GetNode();
                            pTVar19 = (Text*)pGVar18->GetParent();
                            pLVar20 = (LocationContainer*)pTVar19->GetLinkObjCount();
                            pCVar21 = (ChangeLocationRequest*)puVar1->end();
                            pLVar20->DeleteLocation(*pCVar21, this);
                            puVar1->reset();
                        }
                        bVar6 = GetTargetLOD();
                        SetCurrentLOD((unsigned int)bVar6);
                        uVar25 = 0;
                        goto LAB_10042dd8e;
                    }
                    local_f0 = (LocType*)this_00;
                    iVar8 = ((LocType*)(*this_01).operator->())->GetHillChangeType();
                    if (iVar8 - 1U < 3) {
                        local_e8 = (LocType*)(*local_e0._8_8_).operator->();
                        local_118 = (LocType*)m_parentLocationType->end();
                        local_124 = field_444;
                        psVar16 = (shared_ptr<World>*)GetWorld();
                        pWVar22 = (World*)(*psVar16).operator->();
                        heightMap = pWVar22->GetHeightMap();
                        arg4_00 = GetHeightMapLevel(arg3, arg4);
                        uVar26 = field_428;
                        uVar2 = field_432;
                        bVar6 = local_f0->GetRot();
                        pLVar13 = local_100;
                        uVar5 = local_e8->GetLocationOnFlatGround(*local_118, local_124, *heightMap, arg4_00, uVar26,
                                                                  uVar2, (unsigned int)bVar6, field_405 == false);
                        field_406 = uVar5;
                    } else {
                        field_406 = 0;
                    }
                    local_140 = Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>();
                    new (local_158) Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>();
                    if ((field_406 == '\0') && (iVar8 != 0)) {
                        local_100 = (LocType*)(*local_e0._8_8_).operator->();
                        local_e8 = (LocType*)m_parentLocationType->end();
                        psVar16 = (shared_ptr<World>*)GetWorld();
                        pWVar22 = (World*)(*psVar16).operator->();
                        local_118 = (LocType*)pWVar22->GetHeightMap();
                        iVar8 = GetHeightMapLevel(arg3, arg4);
                        uVar26 = field_428;
                        uVar2 = field_432;
                        bVar6 = local_f0->GetRot();
                        cVar4 = local_100->GetHillData(local_140, *local_158, *local_e8, *local_118, iVar8, uVar26,
                                                       uVar2, (unsigned int)bVar6, field_405 == false);
                        if (cVar4)
                            goto LAB_10042db9c;
                    } else {
                    LAB_10042db9c:
                        local_e0._0_4_ = 8192;
                        rotation90 = (Rotation90*)local_120->SSOBeginPtr();
                        uVar5 = local_f0->GetRot();
                        local_e0[4] = uVar5;
                        bucket_make_shared<BuildSingleLocationMain, int, shared_ptr<LocType>&, shared_ptr<LocType>&,
                                           shared_ptr<graphics::Model> const&, Rotation90, int&,
                                           Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>,
                                           Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>>(
                            local_110, (shared_ptr<LocType>*)local_e0, (shared_ptr<LocType>*)local_e0._8_8_,
                            (shared_ptr<graphics::Model>*)m_parentLocationType, rotation90, (int*)(local_e0 + 4),
                            (Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>*)&field_444, &local_140);
                        *puVar24 = *local_110;
                        new (local_110) shared_ptr(puVar24);
                        pLVar13->SubmitJob(*local_110);
                    }
                    uVar25 = 0;
                    goto LAB_10042dd8e;
                }
                pAVar12 = (AssetJob*)(*puVar24).operator->();
                cVar4 = pAVar12->IsFinished();
                if (cVar4) {
                    pAVar12 = (AssetJob*)(*puVar24).operator->();
                    cVar4 = pAVar12->IsSuccessful();
                    if (!cVar4) {
                        puVar24->reset();
                    } else {
                        this_04 = (LoginManager*)(*puVar24).operator->();
                        this_05 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                      this_04->GetDevCredentialsOutputDirectory();
                        psVar10 = (shared_ptr<graphics::Model>*)this_05->end();
                        if (psVar10 == nullptr) {
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "game/runetek5/scene/entities/Location.cpp",
                                            1407, nullptr);
                        }
                        if (psVar10[16] != (shared_ptr<graphics::Model>)0) {
                            field_528 = (*((psVar10 + 32)));
                            field_592 = '\x01';
                        }
                        if (field_792 != '\0') {
                            cVar4 = (&field_816)->operator_cast_to_bool();
                            if (cVar4) {
                                field_816.reset(nullptr);
                            }
                        }
                        field_792 = '\0';
                        local_e0._8_8_->SetConstructedObj(*psVar10);
                        psVar10->reset();
                        pLVar13 = (LocType*)(*puVar1).operator->();
                        if (pLVar13->GetCustomBounding() == 0) {
                            psVar23 = (shared_ptr<graphics::Model>*)local_e0._8_8_->SSOBeginPtr();
                            this_12 = (NXTPixToolkit*)(*psVar23).operator->();
                            this_06 = (AABB*)this_12->GetScreen();
                        } else {
                            pLVar13 = (LocType*)(*puVar1).operator->();
                            this_06 = (AABB*)pLVar13->GetCustomBounding();
                        }
                        cVar4 = this_06->IsValid();
                        if (!cVar4) {
                            RemoveAABB();
                        } else {
                            SetAABB(*this_06);
                        }
                        pLVar13 = (LocType*)(*puVar1).operator->();
                        bVar6 = pLVar13->HasParticles();
                        SetNDCProjectionTestEnabled((bool)(bVar6 ^ 1));
                        ClearJobResources();
                        cVar4 = field_176->operator_cast_to_bool();
                        if (!cVar4) {
                        LAB_10042dd33:
                            BlockFadeIn();
                        } else {
                            pWVar22 = (World*)(*field_176).operator->();
                            cVar4 = pWVar22->GetMainSceneDrawn();
                            if (!cVar4)
                                goto LAB_10042dd33;
                        }
                        cVar3 = m_enableFadeIn;
                        cVar4 = field_237;
                        psVar23 = (shared_ptr<graphics::Model>*)local_e0._8_8_->SSOBeginPtr();
                        if ((!cVar4) && (cVar3)) {
                            pMVar11 = (Model*)(*psVar23).operator->();
                            uVar26 = 300;
                        } else {
                            pMVar11 = (Model*)(*psVar23).operator->();
                            uVar26 = 0;
                        }
                        pMVar11->SetFadeTime(uVar26);
                        if (psVar10 != nullptr)
                            goto LAB_10042d5e9;
                    }
                }
            LAB_10042dd8c:
                uVar25 = 0;
                goto LAB_10042dd8e;
            }
            local_e0._8_8_->Clear();
        } else {
            psVar10 = (shared_ptr<graphics::Model>*)local_e0._8_8_->SSOBeginPtr();
            pMVar11 = (Model*)(*psVar10).operator->();
            cVar4 = pMVar11->IsLoaded();
            if ((!cVar4) || (field_792 != '\0'))
                goto LAB_10042d5ba;
        }
    LAB_10042d5e9:
        uVar25 = (((uint64_t)((int64_t)((unsigned long)puVar24 >> 8)) << 8) | (uint8_t)1);
    LAB_10042dd8e:
        return uVar25 & 4294967295;
    }

    // 0x10042de60
    unsigned long Location::BuildAnimatedModel(graphics::RT7Core& rt7Core, ConfigProvider& configProvider,
                                               AssetBuilder& assetBuilder) {
        bool arg6;
        LocShape LVar2;
        Rotation90 RVar3;
        shared_ptr<graphics::Model>* psVar4;
        Model* pMVar5;
        LocTypeCustomisation* locTypeCustomisation;
        uint8_t* puVar6;
        LocType* pLVar7;
        long lVar8;
        AnimatedModel* pAVar9;
        uint8_t* unaff_R14;
        unsigned long uVar10;
        enable_shared_from_this<PathingEntity> local_70;
        bool local_4c[4];
        LocType* local_48;
        ConfigProvider* local_40;
        function<void_(int, int, int, int, int, int)> local_31;

        char cVar1 = NeedsAnimatedModel();
        if (!cVar1) {
            field_816.reset(nullptr);
            uVar10 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
            goto LAB_10042e14e;
        }
        uint8_t* this_00 = &field_744;
        ConfigProvider* local_60 = configProvider;
        cVar1 = this_00->IsTaskDone();
        RT7Core* local_58 = rt7Core;
        if (!cVar1) {
        LAB_10042ded1:
            local_48 = (LocType*)(*m_locationType).operator->();
            LVar2 = field_352->GetShape();
            local_40 = (ConfigProvider*)assetBuilder;
            RVar3 = field_352->GetRot();
            arg6 = field_404;
            locTypeCustomisation = (LocTypeCustomisation*)field_408.end();
            assetBuilder = (AssetBuilder*)local_40;
            puVar6 = (uint8_t*)local_48->GetModels(local_58, *local_40, *this_00, LVar2 & 255, RVar3 & 255, arg6,
                                                   locTypeCustomisation, 8192);
            unaff_R14 = this_00;
            if (puVar6 == DataStatus::NOTLOADED) {
                uVar10 = 0;
                goto LAB_10042e14e;
            }
        } else {
            cVar1 = this_00->IsEmpty();
            if (cVar1)
                goto LAB_10042ded1;
            psVar4 = (shared_ptr<graphics::Model>*)this_00->SSOBeginPtr();
            pMVar5 = (Model*)(*psVar4).operator->();
            cVar1 = pMVar5->GetConstructedState();
            if (cVar1 != '\x03')
                goto LAB_10042ded1;
        }
        cVar1 = this_00->IsTaskDone();
        uVar10 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
        if (cVar1) {
            psVar4 = (shared_ptr<graphics::Model>*)this_00->SSOBeginPtr();
            pMVar5 = (Model*)(*psVar4).operator->();
            cVar1 = pMVar5->GetConstructedState();
            if (cVar1 == '\x03') {
                pLVar7 = (LocType*)&field_816;
                local_40 = (ConfigProvider*)this_00;
                cVar1 = pLVar7->operator_cast_to_bool();
                if (!cVar1) {
                    local_48 = pLVar7;
                    psVar4 = (shared_ptr<graphics::Model>*)local_40->SSOBeginPtr();
                    pMVar5 = (Model*)(*psVar4).operator->();
                    cVar1 = pMVar5->IsTransformed();
                    if (cVar1) {
                        LogAssert("!m_originalModel.GetAsset()->IsTransformed()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "scene/entities/Location.cpp",
                                  1500, nullptr);
                    }
                    local_4c[0] = true;
                    local_4c[1] = false;
                    local_4c[2] = false;
                    local_4c[3] = false;
                    local_40 = (ConfigProvider*)m_locationType;
                    pLVar7 = (LocType*)(*local_40).operator->();
                    local_31 = (function<void_(int, int, int, int, int, int)>)pLVar7->UseRandomAnimFrame();
                    std::make_unique<LocationAnimatedModel, graphics::RT7Core&, AssetBuilder&, ConfigProvider&,
                                     graphics::AnimationLoopBehaviour, bool,
                                     std::function<void(int, int, int, int, int, int)>&, Location&>(
                        local_70, *local_58, assetBuilder, *local_60, *local_4c, local_31, field_128);
                    pLVar7 = local_48;
                    *local_48 = local_70;
                    local_70.shared_from_this();
                    lVar8 = (*pLVar7).operator->();
                    ((lVar8 + 8))->operator=(&local_70);
                    pLVar7 = (LocType*)(*local_40).operator->();
                    cVar1 = pLVar7->IsHighDetailOnly();
                    pLVar7 = local_48;
                    if (!cVar1) {
                        BeginPlayingDefaultAnimation();
                        if (field_824 == -1) {
                            BeginPlayingOverrideAnimation();
                        }
                    }
                }
                if (field_824 != -1) {
                    pAVar9 = (AnimatedModel*)(*pLVar7).operator->();
                    pAVar9->SetOverrideSourceTicks(field_832, field_836);
                    pAVar9 = (AnimatedModel*)(*pLVar7).operator->();
                    pAVar9->RequestOverrideAnimation(false, field_824, field_828, false);
                    field_824 = -1;
                    field_832 = 0;
                    field_836 = 0;
                }
                psVar4 = (shared_ptr<graphics::Model>*)field_680.SSOBeginPtr();
                pMVar5 = (Model*)**psVar4;
                UpdateLocalRenderEnv(*pMVar5);
            }
        }
    LAB_10042e14e:
        return uVar10 & 4294967295;
    }

    // 0x10042e420
    void Location::BuildVFX(graphics::RT7Core& rt7Core) {
        uint8_t bVar2;
        ObjType* this_01;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_02;
        RawData* rawData;
        LocType* this_03;
        GraphNode* pGVar3;
        Matrix44T<float>* pMVar4;
        ReturnValue local_d8;
        uint8_t local_90[32];
        ReturnValue local_70;
        shared_ptr<LocType>* local_58;
        RawData* local_50;
        LocData* local_48;

        vector<Location::VFXData>* local_40 = (vector<Location::VFXData>*)&field_848;
        if (local_40->empty()) {
            local_58 = (shared_ptr<LocType>*)m_locationType;
            this_01 = (ObjType*)(*local_58).operator->();
            this_02 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)this_01->GetOffset2D();
            rawData = (RawData*)this_02->data();
            local_50 = (RawData*)this_02->end();
            if (rawData != local_50) {
                local_48 = (LocData*)field_352;
                do {
                    this_03 = (LocType*)(*local_58).operator->();
                    pGVar3 = GetNode();
                    pMVar4 = pGVar3->GetWorldTransformationMatrix();
                    bVar2 = local_48->GetRot();
                    local_d8 = this_03->GetLocationWorldMatrix(*pMVar4, (unsigned int)bVar2);
                    new (local_90) VFXData();
                    pGVar3 = GetNode();
                    pMVar4 = pGVar3->GetWorldTransformationMatrix();
                    make_shared<graphics::VFXAttachmentInfo, graphics::VFXAttachmentInfo::RawData const&,
                                math::Matrix44T<float>&>(&local_70, rawData, pMVar4);
                    (*((local_90 + 16))) = local_70;
                    local_70 = ((ParticleManager*)rt7Core.GetParticleManager())->RegisterSystem(*((local_90 + 16)));
                    *local_90 = local_70;
                    if (local_90->operator_cast_to_bool()) {
                        local_40->push_back(*local_90);
                    }
                    rawData = (RawData*)&rawData[1].field_8;
                } while (rawData != local_50);
            }
        }
    }

    // 0x10042e5e0
    void Location::Destruct() {
        if (field_468 != 0) {
            UpdateHeightMap(2);
        }
        field_848.clear();
        field_680.Clear();
        field_712.Clear();
        field_744.Clear();
        field_472->reset();
        m_locationType->reset();
        ClearAnimationState();
        (*(void (*)(...))field_8[3])(&field_8);
    }

    // 0x10042e750
    void Location::MainLogic(graphics::RT7Core& rt7Core, unsigned int arg2, const math::Matrix44T<float>& matrix44) {
        int iVar4;
        unsigned int uVar5;
        int iVar6;
        GameToken* pGVar8;
        BuildTerrainMain* this_01;
        shared_ptr<graphics::Model>* psVar9;
        Model* pMVar10;
        GraphicsApp* pGVar11;
        AnimatedModel* pAVar12;
        Matrix44T<float> local_88;

        uint8_t* puVar1 = m_parentLocationType;
        char cVar3 = puVar1->operator_cast_to_bool();
        if (!cVar3) {
            return;
        }
        if (m_hidden != '\0') {
            return;
        }
        uint8_t* puVar2 = field_472;
        field_272.GetMultiLoc(*puVar2, *puVar1, m_pPlayerVarDomain, field_216);
        cVar3 = ((LocType*)(*puVar1).operator->())->IsMultiLoc();
        if (cVar3) {
            cVar3 = puVar2->operator_cast_to_bool();
            if (!cVar3) {
                Destruct();
                *m_locationType = *puVar2;
                field_488 = -1;
                BlockFadeIn();
            } else {
                iVar6 = field_488;
                pGVar8 = (GameToken*)(*puVar2).operator->();
                iVar4 = pGVar8->GetStatus();
                if (iVar6 == iVar4) {
                    cVar3 = field_680.IsEmpty();
                    if (!cVar3)
                        goto LAB_10042e8b6;
                    this_01 = (BuildTerrainMain*)(*puVar2).operator->();
                    cVar3 = ((Array<VarValue>*)this_01->GetRequestData())->empty();
                    if (cVar3)
                        goto LAB_10042e8b6;
                } else {
                    field_680.Clear();
                    ClearJobResources();
                }
                field_792 = '\x01';
                *m_locationType = *puVar2;
                pGVar8 = (GameToken*)(*puVar2).operator->();
                iVar6 = pGVar8->GetStatus();
                field_488 = iVar6;
                MarkAsNoLongerAtTargetLOD();
                BlockFadeIn();
                field_848.clear();
            }
        }
    LAB_10042e8b6:
        cVar3 = field_592;
        if (cVar3) {
            local_88 matrix44;
            field_608 = local_88;
        }
        unsigned int uVar7 = arg2;
        field_672 = cVar3;
        Matrix44T<float>* local_40 = (Matrix44T<float>*)&field_608;
        if (!cVar3) {
            local_40 = matrix44;
        }
        puVar1 = &field_680;
        cVar3 = puVar1->IsTaskDone();
        if ((cVar3) && (cVar3 = puVar1->IsEmpty(), !cVar3)) {
            psVar9 = (shared_ptr<graphics::Model>*)puVar1->SSOBeginPtr();
            pMVar10 = (Model*)**psVar9;
            UpdateLocalRenderEnv(*pMVar10);
            pGVar11 = (GraphicsApp*)GraphicsApp::Instance();
            uVar5 = pGVar11->GetLogicTick();
            UpdateHighlighting(uVar5);
        }
        puVar2 = &field_816;
        cVar3 = puVar2->operator_cast_to_bool();
        if (cVar3) {
            iVar6 = GetOverrideAnimationToPlay();
            iVar4 = GetDefaultAnimationToPlay();
            pAVar12 = (AnimatedModel*)(*puVar2).operator->();
            cVar3 = pAVar12->IsDefaultAnimationInUse();
            if ((!cVar3) && (iVar4 != -1)) {
                pAVar12 = (AnimatedModel*)(*puVar2).operator->();
                pAVar12->RequestDefaultAnimation(iVar4, false, false);
            }
            pAVar12 = (AnimatedModel*)(*puVar2).operator->();
            cVar3 = pAVar12->IsOverrideAnimationInUse();
            if (((!cVar3) && (iVar6 != -1)) && (iVar6 != iVar4)) {
                pAVar12 = (AnimatedModel*)(*puVar2).operator->();
                pAVar12->RequestOverrideAnimation(false, iVar6, 0, false);
            }
            pAVar12 = (AnimatedModel*)(*puVar2).operator->();
            cVar3 = pAVar12->InUse();
            if (((!cVar3) && (cVar3 = puVar1->IsTaskDone(), cVar3)) && (cVar3 = puVar1->IsEmpty(), !cVar3)) {
                psVar9 = (shared_ptr<graphics::Model>*)puVar1->SSOBeginPtr();
                pMVar10 = (Model*)(*psVar9).operator->();
                pMVar10->ClearAnimationState();
            }
            pGVar11 = (GraphicsApp*)GraphicsApp::Instance();
            uVar5 = pGVar11->GetFrameCount();
            pAVar12 = (AnimatedModel*)(*puVar2).operator->();
            uVar7 = arg2;
            pAVar12->Build(uVar5, arg2, false, 0);
            pAVar12 = (AnimatedModel*)(*puVar2).operator->();
            pAVar12->UpdateParticles(*local_40, uVar5);
        }
        auto this_03 = puVar1->SSOBeginPtr();
        shared_ptr* this_05 = this_03;
        cVar3 = shared_ptr::operator_cast_to_bool(this_03);
        if (cVar3) {
            ((ModelUpdateManager*)this_05->Instance())->AddToUpdateList(*this_03);
        }
        UpdateAudio();
        uVar7 = TicksSinceLastCall(uVar7);
        UpdateRandomSounds(uVar7);
    }

    // 0x10042eb20
    void Location::UpdateLocalRenderEnv(graphics::Model& model) {
        int arg1;
        int arg2;
        shared_ptr<World>* this_00;
        World* this_01;
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;

        if (m_parentLocationType->operator_cast_to_bool() != '\0') {
            this_00 = (shared_ptr<World>*)GetWorld();
            this_01 = (World*)(*this_00).operator->();
            arg1 = field_424.GetMapSquareX();
            arg2 = field_424.GetMapSquareZ();
            midiPlayerMainThread =
                (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)this_01->GetMapSquare(arg1, arg2);
            if (*midiPlayerMainThread != nullptr) {
                ((IrradianceEffect*)model.GetIrradianceEffect())
                    ->SetCoefficients(((MapSquare*)(*midiPlayerMainThread).operator->())->GetIrradianceSHConsts());
            }
        }
    }

    // 0x10042ebd0
    void Location::UpdateHighlighting(unsigned int arg1) {
        uint8_t bVar2;
        unsigned int uVar3;
        AnimatedModel* this_00;
        shared_ptr* this_01;
        Model* this_07;
        EntityHighlightVisualConfig* this_09;
        float arg2;
        float local_5c;
        float local_58[4];
        Vector4T<float> local_48;

        bool cVar1 = (&field_816)->operator_cast_to_bool();
        if (!cVar1) {
            this_01 = (shared_ptr*)field_680.SSOBeginPtr();
        } else {
            this_00 = (AnimatedModel*)field_816.operator->();
            this_01 = (shared_ptr*)this_00->GetCurrentModel();
        }
        cVar1 = (GetWorld())->operator_cast_to_bool();
        if ((!cVar1) || (cVar1 = shared_ptr::operator_cast_to_bool(this_01), !cVar1))
            goto LAB_10042ecb9;
        auto this_03 = GetWorld();
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_04 =
            (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                       eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                       eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                       eastl::prime_rehash_policy, false, true, true>*)(*this_03)
                .operator->();
        auto this_05 = this_04->size();
        auto this_06 = this_05->GetEntityHighlightGlobalState();
        cVar1 = this_06->IsEnabled();
        if (!cVar1) {
        LAB_10042eca9:
            this_07 = (Model*)(*this_01).operator->();
        } else {
            uVar3 = GetHighlightType();
            if (uVar3 == 8) {
                bVar2 = field_796->WasInteractedWithRecently();
                uVar3 = (unsigned int)(bVar2 ^ 1) * 3 + 5;
            }
            if (uVar3 == 8)
                goto LAB_10042eca9;
            local_5c = 1.0;
            if ((EntityHighlightGlobalState::m_allowExamineOnlyHighlights == '\0') && (field_796[16] == '\0')) {
                cVar1 = m_locationType->operator_cast_to_bool();
                if (cVar1) {
                    cVar1 = ((LocType*)(*m_locationType).operator->())->IsExamineOnly();
                    local_5c = 0.0;
                    if (!cVar1) {
                        local_5c = 1.0;
                    }
                }
            }
            this_09 = (EntityHighlightVisualConfig*)((EntityHighlightVisualConfig*)(unsigned long)uVar3)
                          ->GetDefault((EntityHighlightType)arg1);
            if (this_09->field_0 == 2) {
                new (field_796) oldscape::ServerConnectionWorkItem(arg1);
            }
            arg2 = (float)FrameTime::GetFrameDelta();
            field_796->Update(*this_06, arg2, arg1);
            new (local_58) EntityHighlightVisualData();
            cVar1 = this_09->Evaluate(*field_796, *this_06, *local_58, local_5c);
            this_07 = (Model*)(*this_01).operator->();
            if (cVar1) {
                this_07->SetHighlight(local_58[0], local_48);
                goto LAB_10042ecb9;
            }
        }
        this_07->ClearHighlight();
    LAB_10042ecb9:
    }

    // 0x10042eec0
    void Location::GatherDrawableElements(graphics::DrawableQueue& drawableQueue, graphics::RT7Core& rt7Core,
                                          const math::Matrix44T<float>& matrix44,
                                          const graphics::SceneViewData& sceneViewData,
                                          const graphics::EffectManager& effectManager) {
        uint8_t bVar2;
        int arg2;
        int arg3;
        unsigned int arg2_00;
        AnimatedModel* pAVar3;
        LocType* pLVar4;
        shared_ptr<graphics::Model>* this_02;
        Model* pMVar5;
        shared_ptr<graphics::ModularParticleSystem>* this_03;
        VFXAttachmentInfo* this_05;
        ObjType* this_06;
        Array<graphics::VFXAttachmentInfo::RawData>* this_07;
        long* plVar8;
        unsigned long uVar9;
        unsigned long arg1;
        ReturnValue local_b8;
        AnimatedModel* local_48;
        LocData* local_40;

        Matrix44T<float>* local_38 = matrix44;
        bool cVar1 = CanRender();
        if (!cVar1) {
            return;
        }
        cVar1 = FilterRenderPasses(sceneViewData);
        if (!cVar1) {
            return;
        }
        cVar1 = IsLocationRoofRemoved(sceneViewData);
        if (cVar1) {
            return;
        }
        if (m_ShowLocations == '\0')
            goto LAB_10042f1fc;
        uint8_t* puVar10 = &field_816;
        cVar1 = puVar10->operator_cast_to_bool();
        Location* local_70 = this;
        SceneViewData* local_68 = sceneViewData;
        if (!cVar1) {
        LAB_10042f03e:
            cVar1 = field_680.IsTaskDone();
            if (!cVar1) {
                LogAssert("m_model.IsTaskDone()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "entities/Location.cpp",
                          897, nullptr);
            }
            this_02 = (shared_ptr<graphics::Model>*)field_680.SSOBeginPtr();
            pMVar5 = (Model*)(*this_02).operator->();
            cVar1 = pMVar5->IsLoaded();
            if (!cVar1) {
                LogAssert("model->IsLoaded()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "entities/Location.cpp",
                          899, nullptr);
            }
            pMVar5 = (Model*)(*this_02).operator->();
            pMVar5->SetWorldTransform(*local_38);
            pMVar5 = (Model*)(*this_02).operator->();
            pMVar5->GatherDrawableElements(drawableQueue, rt7Core, sceneViewData, effectManager);
            graphics::Model::DeferredRenderKeepAlive(*this_02);
        } else {
            pAVar3 = (AnimatedModel*)(*puVar10).operator->();
            cVar1 = (pAVar3->GetCurrentModel())->operator_cast_to_bool();
            if (!cVar1)
                goto LAB_10042f03e;
            local_48 = (AnimatedModel*)(*puVar10).operator->();
            local_40 = (LocData*)GetWorldPosition();
            pLVar4 = (LocType*)(*m_parentLocationType).operator->();
            bVar2 = field_352->GetRot();
            arg2 = pLVar4->GetGridWidth((unsigned int)bVar2);
            pLVar4 = (LocType*)(*m_parentLocationType).operator->();
            bVar2 = field_352->GetRot();
            sceneViewData = local_68;
            arg3 = pLVar4->GetGridLength((unsigned int)bVar2);
            local_48->SetPointLightBounds(*local_40, arg2, arg3);
            pAVar3 = (AnimatedModel*)(*puVar10).operator->();
            arg2_00 = ((GraphicsApp*)GraphicsApp::Instance())->GetFrameCount();
            pAVar3->SetWorldTransform(*local_38, arg2_00);
            pAVar3 = (AnimatedModel*)(*puVar10).operator->();
            pAVar3->GatherDrawableElements(drawableQueue, rt7Core, sceneViewData, effectManager);
        }
        this = local_70;
        Matrix44T<float>* pMVar7 = (Matrix44T<float>*)&local_70->field_848;
        if (pMVar7->size() != 0) {
            puVar10 = m_locationType;
            local_40 = (LocData*)field_352;
            arg1 = 0;
            local_48 = (AnimatedModel*)puVar10;
            local_38 = pMVar7;
            do {
                this_03 = (shared_ptr<graphics::ModularParticleSystem>*)(*pMVar7)[arg1];
                pLVar4 = (LocType*)(*puVar10).operator->();
                pMVar7 = GetNode()->GetWorldTransformationMatrix();
                bVar2 = local_40->GetRot();
                this = local_70;
                local_b8 = pLVar4->GetLocationWorldMatrix(*pMVar7, (unsigned int)bVar2);
                this_05 = (VFXAttachmentInfo*)(*((this_03 + 16))).operator->();
                this_06 = (ObjType*)(*puVar10).operator->();
                this_07 = (Array<graphics::VFXAttachmentInfo::RawData>*)this_06->GetOffset2D();
                this_05->Update((RawData*)(*this_07)[arg1], &local_b8);
                sceneViewData = local_68;
                plVar8 = ((ModularParticleSystem*)(*this_03).operator->())->GetDrawable();
                (**(void (**)(...))(*plVar8 + 16))(plVar8, drawableQueue, rt7Core, sceneViewData, effectManager);
                pMVar7 = local_38;
                arg1 = arg1 + 1;
                uVar9 = local_38->size();
            } while (arg1 < uVar9);
        }
    LAB_10042f1fc:
        DebugPrimitiveOutput(sceneViewData);
    }

    // 0x10042f220
    uint64_t Location::FilterRenderPasses(const graphics::SceneViewData& sceneViewData) const {
        uint8_t bVar2;
        LocType* this_00;

        char cVar1 = sceneViewData.HasRenderPass(2);
        if ((cVar1) && ((field_405 != false || (cVar1 = field_352->GetShape(), cVar1 == '\x16')))) {
            return 0;
        }
        cVar1 = sceneViewData.HasShadowPass();
        if (cVar1) {
            this_00 = (LocType*)(*m_locationType).operator->();
            bVar2 = field_352->GetShape();
            cVar1 = this_00->CastsShadows((unsigned int)bVar2);
            if (!cVar1) {
                return 0;
            }
            cVar1 = field_352->GetShape();
            if (cVar1 == '\x16') {
                return 0;
            }
        }
        return 1;
    }

    // 0x10042f2b0
    bool Location::IsLocationRoofRemoved(const graphics::SceneViewData& sceneViewData) {
        shared_ptr<World>* this_00;
        World* this_01;
        RemoveRoof* this_02;
        uint64_t uVar2;

        bool cVar1 = sceneViewData.HasRenderPass(4);
        if ((!cVar1) && (cVar1 = sceneViewData.HasRenderPass(8), !cVar1)) {
            uVar2 = 0;
        } else {
            this_00 = (shared_ptr<World>*)GetWorld();
            this_01 = (World*)**this_00;
            this_02 = (RemoveRoof*)this_01->GetRemoveRoof();
            cVar1 = this_02->AnyRoofRemoved();
            if ((!cVar1) || (cVar1 = this_01->IsRemoveRoofSelective(), !cVar1)) {
                uVar2 = IsLocationRoofRemovedNonSelective(sceneViewData, *this_01);
            } else {
                uVar2 = IsLocationRoofRemovedSelective(*this_02, *this_01);
            }
        }
        return uVar2;
    }

    // 0x10042f4c0
    void Location::DebugPrimitiveOutput(const graphics::SceneViewData& sceneViewData) const {
        bool cVar1;
        long* plVar6;
        GraphNode* pGVar7;
        uint64_t uVar8;
        GameToken* pGVar10;
        GeometryBatch* pGVar11;
        char* pcVar12;
        float fVar13;
        uint8_t local_300[24];
        unsigned int local_2e8;
        unsigned int local_2e4;
        unsigned int local_2e0;
        unsigned int local_2d0;
        unsigned int local_2cc;

        if (((m_debugPrimitiveAABBOnHighlight != '\0') && (fVar13 = (float)field_796->GetAlpha(), 0.0 < fVar13)) &&
            (plVar6 = DebugPrimitiveCollectorBasic::GetCollector(""), plVar6 != nullptr)) {
            pGVar7 = GetNode();
            uVar8 = pGVar7->GetWorldAABB();
            local_260 = oldscape::sidebars::SideBarData(301989887, 2);
            (**(void (**)(...))(*plVar6 + 72))(plVar6, uVar8, &local_260);
        }
        if (((m_debugPrimitiveText == '\0') &&
             ((m_debugPrimitiveTextOnMouseover == '\0' || (cVar1 = PickTestDebugCursor(), !cVar1)))) ||
            (cVar1 = sceneViewData.HasRenderPass(4), !cVar1)) {
            return;
        }
        auto this_01 = GetServerPosition();
        unsigned int uVar4 = this_01->GetLocalX();
        unsigned int uVar5 = this_01->GetLocalZ();
        SideBarData local_260;
        pGVar7 = GetNode();
        local_300._16_8_ = pGVar7->GetWorldTranslation();
        uint8_t* this_00 = m_parentLocationType;
        LocType* pLVar9 = (LocType*)(*this_00).operator->();
        uint8_t uVar2 = pLVar9->IsMultiLoc();
        local_2cc = (((uint32_t)local_2cc._1_3_ << 8) | (uint8_t)uVar2);
        pLVar9 = (LocType*)(*this_00).operator->();
        pLVar9->GetMultiLocValue(local_2d0, local_2e8, local_2e4, local_2e0, m_pPlayerVarDomain, field_216);
        local_260.sprintf("[LOC] [%d,%d,%d] ", (unsigned long)this_01->field_0, (unsigned long)uVar4,
                          (unsigned long)uVar5);
        unsigned int local_2dc = uVar5;
        uVar5 = GetHeightMapLevel();
        if (uVar5 != this_01->field_0) {
            local_260.append_sprintf("(lvl %d) ", (unsigned long)uVar5);
        }
        cVar1 = field_472->operator_cast_to_bool();
        shared_ptr* local_2d8 = (shared_ptr*)field_472;
        if (!cVar1) {
            local_2d8 = (shared_ptr*)this_00;
        }
        cVar1 = shared_ptr::operator_cast_to_bool(local_2d8);
        if (!cVar1) {
            uVar5 = this_01->field_0;
            local_2cc = uVar4;
            pGVar10 = (GameToken*)(*m_locationType).operator->();
            uVar4 = pGVar10->GetStatus();
            pGVar11 = (GeometryBatch*)(*m_locationType).operator->();
            pGVar11->GetVertexDataBufferPos();
            uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_260.sprintf("[%d,%d,%d] %d, [%s]", (unsigned long)uVar5, (unsigned long)local_2cc,
                              (unsigned long)local_2dc, (unsigned long)uVar4, uVar8);
        } else {
            pGVar10 = (GameToken*)(*local_2d8).operator->();
            uVar4 = pGVar10->GetStatus();
            local_260.append_sprintf("%d", (unsigned long)uVar4);
            pGVar11 = (GeometryBatch*)(*local_2d8).operator->();
            pGVar11->GetVertexDataBufferPos();
            pcVar12 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            if ((pcVar12 != nullptr) && (*pcVar12 != '\0')) {
                local_260.append_sprintf("(%s)", pcVar12);
            }
            if ((char)local_2cc != '\0') {
                if (local_2e0 == 4294967295) {
                    local_260.append_sprintf("\nMulti Var %d=%d", (unsigned long)local_2e8, (unsigned long)local_2d0);
                } else {
                    local_260.append_sprintf("\nMulti Varbit %d[in %d]=%d)", (unsigned long)local_2e4,
                                             (unsigned long)local_2e0, (unsigned long)local_2d0);
                }
            }
            if (*this_00 != *local_2d8) {
                pGVar10 = (GameToken*)(*this_00).operator->();
                uVar4 = pGVar10->GetStatus();
                local_260.append_sprintf("\nParentType=%d", (unsigned long)uVar4);
                pGVar11 = (GeometryBatch*)(*this_00).operator->();
                cVar1 = ((basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)
                             pGVar11->GetVertexDataBufferPos())
                            ->empty();
                if (!cVar1) {
                    pGVar11 = (GeometryBatch*)(*this_00).operator->();
                    pGVar11->GetVertexDataBufferPos();
                    uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    local_260.append_sprintf("(%s)", uVar8);
                }
            }
        }
        new (local_300) CoordFine(this_01->field_0, local_300._16_8_);
        fixed_string<char, 64> local_2c8;
        pcVar12 = local_300->ToString<64, true>(local_2c8);
        local_260.append_sprintf("\nNode Position:%s", pcVar12);
    }

    // 0x10042ffd0
    void Location::AddPickableEntity(World& world, const math::Matrix44T<float>& matrix44) {
        uint8_t* this_00;
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
        eastl::string local_1c8;
        Vector2T<int> local_1a8;
        uint64_t local_1a0[2];
        SideBarData local_188;
        int local_17c;
        Matrix44T<float>* local_178;
        World* local_170;
        Capsule2D* local_168;
        SideBarData local_160;

        if (CanRender()) {
            if (field_472->operator_cast_to_bool()) {
                if (((LocType*)(*field_472).operator->())->IsActive()) {
                    pSVar4 = (SceneManager*)world.size();
                    this_02 = (Minimap*)pSVar4->GetGameSceneRect();
                    local_168 = (Capsule2D*)&field_76;
                    local_170 = (World*)world.GetLastCameraProjectionMatrix();
                    local_178 = world.GetLastViewProjectionMatrix();
                    iVar2 = this_02->GetPos();
                    arg4 = this_02->GetLevel();
                    pGVar5 = GetNode();
                    pAVar6 = (AABB*)pGVar5->GetWorldAABB();
                    local_168->FillFromAABB(*local_170, *local_178, iVar2, arg4, *pAVar6);
                    this_00 = &field_100;
                    local_168 = (Capsule2D*)world.GetLastCameraViewMatrix();
                    local_170 = (World*)world.GetLastCameraProjectionMatrix();
                    local_178 = world.GetLastViewProjectionMatrix();
                    local_17c = this_02->GetPos();
                    uVar3 = this_02->GetLevel();
                    pGVar5 = GetNode();
                    pGVar5->GetWorldAABB();
                    if (math::Sphere2D::Set(*this_00, *local_168, *local_170, (int)local_178, local_17c,
                                            *((AABB*)(unsigned long)uVar3))) {
                        if (World::m_debugPicking != '\0') {
                            local_170 = world;
                            local_1a8 = math::Vector2T();
                            this_03 = (shared_ptr<World>*)GetWorld();
                            this_04 =
                                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                           eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                           eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                           eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                           true>*)(*this_03)
                                    .operator->();
                            pSVar4 = (SceneManager*)this_04->size();
                            pCVar7 = (CoordMapSquare*)pSVar4->GetGameSceneRect();
                            iVar2 = pCVar7->GetX();
                            local_168._0_4_ = (float)iVar2;
                            iVar2 = ((CoordMapSquare*)this_00->SSOBeginPtr())->GetX();
                            local_168._0_4_ = (float)iVar2 + local_168._0_4_;
                            pfVar8 = (float*)local_1a8.SSOBeginPtr();
                            *pfVar8 = local_168._0_4_;
                            iVar2 = pCVar7->GetZ();
                            local_168._0_4_ = (float)iVar2;
                            pCVar7 = (CoordMapSquare*)this_00->SSOBeginPtr();
                            iVar2 = pCVar7->GetZ();
                            local_168._0_4_ = (float)iVar2 + local_168._0_4_;
                            pfVar8 = (float*)local_1a8.y();
                            *pfVar8 = local_168._0_4_;
                            iVar2 = this_00->GetPos();
                            plVar9 = DebugPrimitiveCollectorBasic::GetCollector("");
                            if (plVar9 != nullptr) {
                                local_168._0_4_ = (float)iVar2;
                                local_160 = oldscape::sidebars::SideBarData(1073741952, 0);
                                (**(void (**)(...))(*plVar9 + 160))(local_168._0_4_, plVar9, &local_1a8, 1, &local_160);
                            }
                            local_160 = eastl::fixed_string<char, 256>();
                            uVar3 = ((GameToken*)(*m_locationType).operator->())->GetStatus();
                            local_160.sprintf("Pick[Location ID:%d]", (unsigned long)uVar3);
                            plVar9 = DebugPrimitiveCollectorBasic::GetCollector("");
                            if (plVar9 != nullptr) {
                                pGVar5 = GetNode();
                                pAVar6 = (AABB*)pGVar5->GetWorldAABB();
                                local_1a0[0] = pAVar6->GetCentrePos();
                                str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                local_1c8 = eastl::string(str);
                                local_188 = oldscape::sidebars::SideBarData(-2147418368, 0);
                                (**(void (**)(...))(*plVar9 + 136))(plVar9, local_1a0, &local_1c8, &local_188);
                            }
                        }
                        local_1c8.shared_from_this();
                        local_160.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_1c8);
                        world.AddPickableEntity(local_160);
                    }
                }
            }
        }
    }

    // 0x1004304e0
    bool Location::CanRender() const {
        uint8_t* this_00;
        uint8_t* this_01;
        unsigned int arg1;
        unsigned int arg2;
        shared_ptr<graphics::Model>* psVar3;
        Model* pMVar4;
        AnimatedModel* this_03;
        GraphicsApp* pGVar5;

        bool cVar1 = m_parentLocationType->operator_cast_to_bool();
        if ((cVar1) && (m_hidden == '\0')) {
            cVar1 = m_locationType->operator_cast_to_bool();
            if (cVar1) {
                this_00 = &field_680;
                cVar1 = this_00->IsTaskDone();
                if (cVar1) {
                    psVar3 = (shared_ptr<graphics::Model>*)this_00->SSOBeginPtr();
                    pMVar4 = (Model*)(*psVar3).operator->();
                    cVar1 = pMVar4->IsReadyToRender();
                    if (cVar1) {
                        this_01 = &field_816;
                        cVar1 = this_01->operator_cast_to_bool();
                        if (!cVar1) {
                            psVar3 = (shared_ptr<graphics::Model>*)this_00->SSOBeginPtr();
                            pMVar4 = (Model*)(*psVar3).operator->();
                            if (pMVar4->GetTotalBatchCount() == 0) {
                                return 0;
                            }
                        }
                        cVar1 = ((LocType*)(*m_locationType).operator->())->IsRuneTek5Only();
                        if (!cVar1) {
                            cVar1 = field_496->operator_cast_to_bool();
                            if ((!cVar1) || (cVar1 = NeedsAnimatedModel(), !cVar1)) {
                                return 1;
                            }
                            cVar1 = this_01->operator_cast_to_bool();
                            if (cVar1) {
                                this_03 = (AnimatedModel*)(*this_01).operator->();
                                pGVar5 = (GraphicsApp*)GraphicsApp::Instance();
                                arg1 = pGVar5->GetFrameCount();
                                pGVar5 = (GraphicsApp*)GraphicsApp::Instance();
                                arg2 = pGVar5->GetLogicTick();
                                cVar1 = this_03->IsReady(arg1, arg2);
                                if (cVar1) {
                                    return 1;
                                }
                            }
                        }
                    }
                }
            }
        }
        return 0;
    }

    // 0x1004306c0
    bool Location::IsLocationRoofRemovedSelective(RemoveRoof& removeRoof, const World& world) {
        uint8_t* this_01;
        uint8_t bVar2;
        unsigned int uVar4;
        int iVar5;
        int iVar6;
        unsigned long uVar8;
        LocType* pLVar9;
        int iVar10;
        unsigned int arg3;

        uint64_t uVar7 = removeRoof.IsRoofRemoved(field_68, field_428, field_432);
        uint32_t uVar3 = (uint32_t)(((uint64_t)((int64_t)((unsigned long)uVar7 >> 8)) << 8) | (uint8_t)1);
        bool bVar11 = true;
        if ((uint8_t)uVar7 != 0) {
            uVar8 = world.GetLinkMap()->GetTileLinkZero(field_424);
            bVar11 = (uVar8 & 8) == 0;
        }
        if ((bVar11 & (uint8_t)uVar7) != 0) {
            return uVar3;
        }
        uint8_t* this_00 = field_352;
        char cVar1 = this_00->GetShape();
        if ((cVar1 == '\n') || (cVar1 = this_00->GetShape(), cVar1 == '\v')) {
            this_01 = m_locationType;
            pLVar9 = (LocType*)(*this_01).operator->();
            bVar2 = this_00->GetRot();
            uVar4 = pLVar9->GetGridWidth((unsigned int)bVar2);
            if (uVar4 < 2) {
                pLVar9 = (LocType*)(*this_01).operator->();
                bVar2 = this_00->GetRot();
                uVar4 = pLVar9->GetGridLength((unsigned int)bVar2);
                if (uVar4 < 2) {
                    return 0;
                }
                if (bVar11 != true) {
                    return 0;
                }
            } else if (bVar11 == false) {
                return 0;
            }
            pLVar9 = (LocType*)(*this_01).operator->();
            bVar2 = this_00->GetRot();
            iVar5 = pLVar9->GetGridWidth((unsigned int)bVar2);
            pLVar9 = (LocType*)(*this_01).operator->();
            bVar2 = this_00->GetRot();
            iVar6 = pLVar9->GetGridLength((unsigned int)bVar2);
            uVar4 = field_428;
            if (uVar4 < uVar4 + iVar5) {
                do {
                    arg3 = field_432;
                    iVar10 = 5;
                    bVar11 = arg3 < arg3 + iVar6;
                    if (bVar11) {
                        cVar1 = removeRoof.IsRoofRemoved(field_68, uVar4, arg3);
                        while (!cVar1) {
                            arg3 = arg3 + 1;
                            bVar11 = arg3 < field_432 + iVar6;
                            if (!bVar11) {
                                iVar10 = 5;
                                if (!bVar11)
                                    goto LAB_100430886;
                                goto LAB_1004308af;
                            }
                            cVar1 = removeRoof.IsRoofRemoved(field_68, uVar4, arg3);
                        }
                        iVar10 = 1;
                    }
                    if (bVar11)
                        goto LAB_1004308af;
                LAB_100430886:
                    uVar4 = uVar4 + 1;
                } while (uVar4 < field_428 + iVar5);
            } else {
                iVar10 = 2;
            LAB_1004308af:
                if (iVar10 != 2) {
                    return uVar3;
                }
            }
        }
        return 0;
    }

    // 0x1004308e0
    bool Location::IsLocationRoofRemovedNonSelective(const graphics::SceneViewData& sceneViewData, World& world) {
        uint8_t* this_00;
        uint8_t* this_01;
        uint8_t bVar2;
        int iVar3;
        unsigned int uVar4;
        unsigned int uVar5;
        uint32_t uVar6;
        LinkMap* this_03;
        LocType* pLVar7;
        unsigned int arg2_00;
        unsigned int local_34;

        bool cVar1 = sceneViewData.HasRenderPass(5);
        if (!cVar1) {
            cVar1 = sceneViewData.HasShadowPass();
            iVar3 = 4;
            if ((!cVar1) && (cVar1 = sceneViewData.HasRenderPass(2), !cVar1)) {
                iVar3 = world.GetMaxRenderLevel();
            }
        } else {
            iVar3 = ((Minimap*)sceneViewData.GetRenderPass(5))->GetLevel();
        }
        int arg1 = field_68;
        int arg2 = GetWrapMode();
        cVar1 = LinkConstants::IsAffectedByMaxRenderLevel(arg1, arg2, iVar3);
        if (!cVar1) {
            uVar6 = 0;
        } else {
            this_03 = world.GetLinkMap();
            local_34 = this_03->GetTileLinkZero(field_68, field_428, field_432);
            arg2_00 = field_428;
            this_00 = m_locationType;
            this_01 = field_352;
            pLVar7 = (LocType*)(*this_00).operator->();
            bVar2 = this_01->GetRot();
            iVar3 = pLVar7->GetGridWidth((unsigned int)bVar2);
            uVar4 = iVar3 + arg2_00;
            if (arg2_00 < uVar4) {
                do {
                    uVar4 = field_432;
                    pLVar7 = (LocType*)(*this_00).operator->();
                    bVar2 = this_01->GetRot();
                    iVar3 = pLVar7->GetGridWidth((unsigned int)bVar2);
                    uVar5 = iVar3 + uVar4;
                    for (; uVar4 < uVar5; uVar4 = uVar4 + 1) {
                        if ((arg2_00 != field_428) || (uVar4 != field_432)) {
                            uVar5 = this_03->GetTileLinkZero(field_68, arg2_00, uVar4);
                            local_34 = local_34 & uVar5;
                        }
                        uVar5 = field_432;
                        pLVar7 = (LocType*)(*this_00).operator->();
                        bVar2 = this_01->GetRot();
                        iVar3 = pLVar7->GetGridWidth((unsigned int)bVar2);
                        uVar5 = iVar3 + uVar5;
                    }
                    arg2_00 = arg2_00 + 1;
                    uVar4 = field_428;
                    pLVar7 = (LocType*)(*this_00).operator->();
                    bVar2 = this_01->GetRot();
                    iVar3 = pLVar7->GetGridWidth((unsigned int)bVar2);
                    uVar4 = iVar3 + uVar4;
                } while (arg2_00 < uVar4);
            }
            uVar6 = (((uint32_t)((int32_t)(uVar4 >> 8)) << 8) | (uint8_t)((local_34 & 8) == 0));
        }
        return uVar6;
    }

    // 0x100431070
    bool Location::UsesTrianglePicking() const {
        bool bVar3;

        if (m_locationType->operator_cast_to_bool() == '\0') {
            bVar3 = false;
        } else {
            bVar3 = ((LocType*)(*m_locationType).operator->())->GetCustomBounding() == 0;
        }
        return bVar3;
    }

    // 0x1004310b0
    bool Location::UsesFastPickingTests() const {
        bool cVar1 = m_locationType->operator_cast_to_bool();
        uint32_t uVar2 = 1;
        if (cVar1) {
            uVar2 = ((LocType*)(*m_locationType).operator->())->UseFastPickingTests();
        }
        return uVar2;
    }

    // 0x100431100
    unsigned long Location::PickTest(graphics::PickingHelper& pickingHelper) {
        bool arg4;
        AnimatedModel* this_00;
        shared_ptr* this_01;
        GeometryBatchInstance* this_02;
        Matrix44T<float>* matrix44;
        Model* this_03;
        vector<std::unique_ptr<graphics::GeometryBatchInstance,
                               MakeUniquePool<graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>>*
            geometryBatchInstances;
        unsigned long uVar2;

        if (!(UsesTrianglePicking())) {
            LogAssert("UsesTrianglePicking()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/Location.cpp",
                      1574, nullptr);
        }
        if (!((&field_816)->operator_cast_to_bool())) {
            if (field_680.IsTaskDone()) {
                this_01 = (shared_ptr*)field_680.SSOBeginPtr();
                goto LAB_10043117c;
            }
        } else {
            this_00 = (AnimatedModel*)field_816.operator->();
            this_01 = (shared_ptr*)this_00->GetCurrentModel();
        LAB_10043117c:
            if (shared_ptr::operator_cast_to_bool(this_01)) {
                this_02 = (GeometryBatchInstance*)(*this_01).operator->();
                matrix44 = (Matrix44T<float>*)this_02->GetMaterial();
                this_03 = (Model*)(*this_01).operator->();
                geometryBatchInstances =
                    (vector<
                        std::unique_ptr<graphics::GeometryBatchInstance,
                                        MakeUniquePool<graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>>*)
                        this_03->GetBatchList();
                arg4 = (bool)UsesFastPickingTests();
                uVar2 = pickingHelper.PickTest(*matrix44, *geometryBatchInstances, false, arg4, -1);
                goto LAB_1004311e5;
            }
        }
        uVar2 = 0;
    LAB_1004311e5:
        return uVar2 & 18446744073709551361;
    }

    // 0x100431200
    bool Location::RepeatLastOverrideAnimationFrameWhenFinished(int arg1) const {
        AnimatedModel* pAVar1;

        int arg2 = GetOverrideAnimationToPlay();
        if (arg2 != -1) {
            pAVar1 = (AnimatedModel*)field_816.operator->();
            if (arg2 == arg1) {
                pAVar1->RestartOverrideAnimation(((GraphicsApp*)GraphicsApp::Instance())->GetLogicTick());
            } else {
                if (pAVar1->HasRequestedOverrideAnimation() == '\0') {
                    pAVar1 = (AnimatedModel*)field_816.operator->();
                    pAVar1->RequestOverrideAnimation(false, arg2, 0, true);
                }
            }
        }
        return arg2 != -1;
    }

    // 0x1004312e0
    void Location::NotifyPickable(unsigned int arg1, bool arg2, float arg3) {
        bool cVar1;
        uint8_t bVar2;
        uint8_t bVar3;
        shared_ptr<World>* psVar6;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar7;
        SceneManager* pSVar8;
        EntityHighlightGlobalState* pEVar9;

        if (GetHighlightType() == 8) {
            return;
        }
        auto piVar5 = 5->GetDefault((EntityHighlightType)arg1);
        if (*piVar5 == 2) {
            bVar2 = 1;
        } else {
            if (*piVar5 == 1) {
                cVar1 = (GetWorld())->operator_cast_to_bool();
                if (cVar1) {
                    psVar6 = (shared_ptr<World>*)GetWorld();
                    phVar7 =
                        (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                   eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                   eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)(*psVar6)
                            .operator->();
                    pSVar8 = (SceneManager*)phVar7->size();
                    pEVar9 = (EntityHighlightGlobalState*)pSVar8->GetEntityHighlightGlobalState();
                    bVar2 = pEVar9->IsRadialHighlightActive();
                    goto joined_r0x000100431386;
                }
            }
            bVar2 = 0;
        }
    joined_r0x000100431386:
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
            if (arg2) {
                new (field_796) oldscape::ServerConnectionWorkItem(arg1);
            } else {
                psVar6 = (shared_ptr<World>*)GetWorld();
                phVar7 =
                    (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                               eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                               eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                               eastl::prime_rehash_policy, false, true, true>*)(*psVar6)
                        .operator->();
                pSVar8 = (SceneManager*)phVar7->size();
                pEVar9 = (EntityHighlightGlobalState*)pSVar8->GetEntityHighlightGlobalState();
                field_796->TryKeepVisible(*pEVar9, arg1);
            }
            if (arg3 != -1.0) {
                *(float*)field_796 = arg3;
            }
        }
    }

    // 0x100431430
    uint32_t Location::GetHighlightType() const {
        Logger* this_01;
        LocType* pLVar3;

        uint8_t* this_00 = m_locationType;
        bool cVar1 = this_00->operator_cast_to_bool();
        uint32_t uVar2 = 8;
        if (cVar1) {
            this_01 = (Logger*)(*this_00).operator->();
            cVar1 = ((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)this_01->GetLogStreams())
                        ->empty();
            if ((!cVar1) && (uVar2 = 7, field_796[16] == '\0')) {
                pLVar3 = (LocType*)(*this_00).operator->();
                cVar1 = pLVar3->HasHighlightOverride();
                uVar2 = 5;
                if (cVar1) {
                    pLVar3 = (LocType*)(*this_00).operator->();
                    uVar2 = pLVar3->GetHighlightOverride();
                }
            }
        }
        return uVar2;
    }

} // namespace jag::game
