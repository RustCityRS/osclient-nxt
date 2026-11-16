// libs/game/runetek5/scene/entities/Location.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "Location.h"

namespace jag::game {
    // 0x100f38be8, 1 bytes, __data
    Location::m_ShowLocations = 1;

    // 0x100f38be9, 1 bytes, __data
    Location::m_enableFadeIn = 1;

    // 0x1039b4e68, 16 bytes, __common; set at startup by ___cxx_global_var_init.25
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> Location::NullLocation;

    // 0x1039b4e78, 1 bytes, __common; zero-initialised
    Location::m_debugPrimitiveText;

    // 0x1039b4e79, 1 bytes, __common; zero-initialised
    Location::m_debugPrimitiveTextOnMouseover;

    // 0x1039b4e7a, 6 bytes, __common; zero-initialised
    Location::m_debugPrimitiveAABBOnHighlight;

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    Location::IsAnimatable() const;

    // 0x1000fa850: the linker folded this into oldscape::graphics::NXTPixToolkit::getWorldRenderer(), which has identical code
    Location::GetServerPosition() const;

    // 0x10016ea80: the linker folded this into oldscape::minimenu::Minimenu::GetPlayerOps() const, which has identical code
    Location::GetParentLocationType() const;

    // 0x1001e0d50: the linker folded this into hal::audio::AudioAPI::~AudioAPI(), which has identical code
    Location::VFXData::~VFXData();

    // 0x1001e0d60: the linker folded this into hal::audio::AudioAPI::~AudioAPI(), which has identical code
    Location::VFXData::~VFXData();

    // 0x1003f5b50: the linker folded this into BASType::GetHillRotateZLimit() const, which has identical code
    Location::GetID() const;

    // 0x100414b10: the linker folded this into LocationContainer::SetHasStartedBuild(bool), which has identical code
    Location::SetLocationLOD(LODLevel);

    // 0x10042a990, 880 bytes, base-object constructor, placed by class name and debug map
    // Location::Location(graphics::GraphNode*, shared_ptr<World> const&, int, int, LocData const&, bool, bool, int, int, int, int, shared_ptr<graphics::Model> const&)
    void Location::Location(GraphNode* param_1, shared_ptr* param_2, int param_3, int param_4, LocData* param_5,
                            bool param_6, bool param_7, int param_8, int param_9, int param_10, int param_11,
                            shared_ptr* param_12) {
        undefined1* this_00;
        char cVar1;
        vector* this_01;
        NXTPixToolkit* this_02;
        AABB* this_03;
        _func_decltype_nullptr* p_Var2;
        shared_ptr local_90;
        undefined1* local_80;
        undefined1* local_78;
        undefined1* local_70;
        undefined1* local_68;
        undefined1* local_60;
        undefined1* local_58;
        undefined1* local_50;
        undefined1* local_48;
        undefined1* local_40;
        undefined1* local_38;

        p_Var2 = (_func_decltype_nullptr*)&DAT_00000001;
        new (this) LocationInterface(1, param_1, param_2, 0, param_3);
        new (this) MakeSharedPool<Location, 256>();
        field_0 = &PTR__Location_100effbf0;
        field_8 = &PTR__Location_100effd90;
        field_216 = (ConfigProvider*)0;
        m_pPlayerVarDomain = (PlayerVarDomain*)0;
        m_iD = param_4;
        m_locationLOD = 6;
        field_237 = '\0';
        new (m_parentLocationType, p_Var2) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        local_78 = field_256;
        local_80 = m_parentLocationType;
        new (local_78) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var2);
        local_70 = &field_272;
        new (local_70) LocType::MultiLocTypeCache();
        new (field_352, param_5) LocData();
        field_404 = param_6;
        field_405 = param_7;
        field_406 = 0;
        local_68 = &field_408;
        new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_5);
        p_Var2 = (_func_decltype_nullptr*)(ulong)(uint)param_3;
        new (&field_424, param_3, param_8, param_9) oldscape::rs2lib::worldmap::LocationData();
        field_436 = param_10;
        field_440 = param_11;
        field_444 = -1;
        m_builtGridSize = 1;
        field_452 = 1;
        field_456 = -1;
        m_isWDDBothOffsetMember = false;
        m_hidden = 0;
        field_462 = 0;
        field_464 = 1;
        field_468 = 0;
        new (field_472, p_Var2) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_488 = param_4;
        local_60 = field_472;
        new (field_496, p_Var2) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        local_50 = field_512;
        local_58 = field_496;
        new (local_50) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var2);
        new (&field_528) math::Matrix44T<float>();
        field_592 = '\0';
        new (&field_608) math::Matrix44T<float>();
        field_672 = false;
        new (&local_90) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var2);
        this_00 = &field_680;
        new (this_00) BuildRequest<graphics::Model, BuildModelMain>(param_12, &local_90);
        local_90.~shared_ptr();
        local_48 = &field_712;
        new (local_48) BuildRequest<graphics::Model, BuildModelMain>();
        local_40 = &field_744;
        new (local_40) BuildRequest<graphics::Model, BuildModelMain>();
        local_38 = field_776;
        new (local_38) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_12);
        *(undefined2*)&field_792 = 0;
        new (field_796) EntityHighlightState();
        field_796[16] = 0;
        std::unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>::unique_ptr<true, void>(
            (unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>*)&field_816);
        field_824 = -1;
        field_828 = 0;
        field_832 = 0;
        field_836 = 0;
        field_840 = 0;
        new (&field_848) eastl::vector<Location::VFXData, eastl::allocator>();
        cVar1 = this_00->IsTaskDone();
        if (cVar1 != '\0') {
            this_01 = this_00->SSOBeginPtr(param_12);
            this_02 = (NXTPixToolkit*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_01);
            this_03 = (AABB*)this_02->GetScreen();
            cVar1 = this_03->IsValid();
            if (cVar1 != '\0') {
                SetAABB(this_03);
            }
        }
        field_468 = 0;
    }

    // 0x10042afc0, 80 bytes, complete-object constructor, placed by class name
    // Location::Location(graphics::GraphNode*, shared_ptr<World> const&, int, int, LocData const&, bool, bool, int, int, int, int, shared_ptr<graphics::Model> const&)
    void Location::Location(GraphNode* param_1, shared_ptr* param_2, int param_3, int param_4, LocData* param_5,
                            bool param_6, bool param_7, int param_8, int param_9, int param_10, int param_11,
                            shared_ptr* param_12) {
        Location(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10,
                 param_11, param_12);
    }

    // 0x10042b010, 768 bytes, base-object constructor, placed by class name
    // Location::Location(graphics::GraphNode*, shared_ptr<World> const&, int, int, LocData const&, bool, bool, int, int, int, int, shared_ptr<ChangeLocationRequest> const&, shared_ptr<LocTypeCustomisation> const&)
    void Location::Location(GraphNode* param_1, shared_ptr* param_2, int param_3, int param_4, LocData* param_5,
                            bool param_6, bool param_7, int param_8, int param_9, int param_10, int param_11,
                            shared_ptr* param_12, shared_ptr* param_13) {
        _func_decltype_nullptr* p_Var1;

        p_Var1 = (_func_decltype_nullptr*)&DAT_00000001;
        new (this) LocationInterface(1, param_1, param_2, 0, param_3);
        new (this) MakeSharedPool<Location, 256>();
        field_0 = &PTR__Location_100effbf0;
        field_8 = &PTR__Location_100effd90;
        field_216 = (ConfigProvider*)0;
        m_pPlayerVarDomain = (PlayerVarDomain*)0;
        m_iD = param_4;
        m_locationLOD = 6;
        field_237 = '\0';
        new (m_parentLocationType, p_Var1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_256, p_Var1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_272) LocType::MultiLocTypeCache();
        new (field_352, param_5) LocData();
        field_404 = param_6;
        field_405 = param_7;
        field_406 = 0;
        new (&field_408, param_13) shared_ptr<oldscape::dash3d::Decor>();
        p_Var1 = (_func_decltype_nullptr*)(ulong)(uint)param_3;
        new (&field_424, param_3, param_8, param_9) oldscape::rs2lib::worldmap::LocationData();
        field_436 = param_10;
        field_440 = param_11;
        field_444 = -1;
        m_builtGridSize = 1;
        field_452 = 1;
        field_456 = -1;
        m_isWDDBothOffsetMember = false;
        m_hidden = 0;
        field_462 = 0;
        field_464 = 1;
        field_468 = 0;
        new (field_472, p_Var1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_488 = param_4;
        new (field_496, param_12) shared_ptr<oldscape::dash3d::Decor>();
        new (field_512, (_func_decltype_nullptr*)param_12)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_528) math::Matrix44T<float>();
        field_592 = '\0';
        new (&field_608) math::Matrix44T<float>();
        field_672 = false;
        new (&field_680) BuildRequest<graphics::Model, BuildModelMain>();
        new (&field_712) BuildRequest<graphics::Model, BuildModelMain>();
        new (&field_744) BuildRequest<graphics::Model, BuildModelMain>();
        new (field_776, (_func_decltype_nullptr*)param_12)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        *(undefined2*)&field_792 = 0;
        new (field_796) EntityHighlightState();
        field_796[16] = 0;
        std::unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>::unique_ptr<true, void>(
            (unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>*)&field_816);
        field_824 = -1;
        field_828 = 0;
        field_832 = 0;
        field_836 = 0;
        field_840 = 0;
        new (&field_848) eastl::vector<Location::VFXData, eastl::allocator>();
        field_468 = 1;
    }

    // 0x10042b310, 96 bytes, complete-object constructor, placed by class name
    // Location::Location(graphics::GraphNode*, shared_ptr<World> const&, int, int, LocData const&, bool, bool, int, int, int, int, shared_ptr<ChangeLocationRequest> const&, shared_ptr<LocTypeCustomisation> const&)
    void Location::Location(GraphNode* param_1, shared_ptr* param_2, int param_3, int param_4, LocData* param_5,
                            bool param_6, bool param_7, int param_8, int param_9, int param_10, int param_11,
                            shared_ptr* param_12, shared_ptr* param_13) {
        Location(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10,
                 param_11, param_12, param_13);
    }

    // 0x10042b370, 784 bytes, base-object constructor, placed by class name
    // Location::Location(graphics::GraphNode*, shared_ptr<World> const&, int, int, LocData const&, bool, bool, int, int, int, int, int, int, bool)
    void Location::Location(GraphNode* param_1, shared_ptr* param_2, int param_3, int param_4, LocData* param_5,
                            bool param_6, bool param_7, int param_8, int param_9, int param_10, int param_11,
                            int param_12, int param_13, bool param_14) {
        _func_decltype_nullptr* p_Var1;

        p_Var1 = (_func_decltype_nullptr*)&DAT_00000001;
        new (this) LocationInterface(1, param_1, param_2, 0, param_3);
        new (this) MakeSharedPool<Location, 256>();
        field_0 = &PTR__Location_100effbf0;
        field_8 = &PTR__Location_100effd90;
        field_216 = (ConfigProvider*)0;
        m_pPlayerVarDomain = (PlayerVarDomain*)0;
        m_iD = param_4;
        m_locationLOD = 6;
        field_237 = '\0';
        new (m_parentLocationType, p_Var1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_256, p_Var1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_272) LocType::MultiLocTypeCache();
        new (field_352, param_5) LocData();
        field_404 = param_6;
        field_405 = param_7;
        field_406 = 0;
        new (&field_408, (_func_decltype_nullptr*)param_5)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_424, param_3, param_8, param_9) oldscape::rs2lib::worldmap::LocationData();
        p_Var1 = (_func_decltype_nullptr*)(ulong)(uint)param_13;
        field_436 = param_10;
        field_440 = param_11;
        field_444 = -1;
        m_builtGridSize = 1;
        field_452 = 1;
        field_456 = param_13;
        m_isWDDBothOffsetMember = param_14;
        m_hidden = 0;
        field_462 = 0;
        field_464 = 1;
        field_468 = 0;
        new (field_472, p_Var1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_488 = param_4;
        new (field_496, p_Var1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_512, p_Var1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_528) math::Matrix44T<float>();
        field_592 = '\0';
        new (&field_608) math::Matrix44T<float>();
        field_672 = false;
        new (&field_680) BuildRequest<graphics::Model, BuildModelMain>();
        new (&field_712) BuildRequest<graphics::Model, BuildModelMain>();
        new (&field_744) BuildRequest<graphics::Model, BuildModelMain>();
        new (field_776, p_Var1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        *(undefined2*)&field_792 = 0;
        new (field_796) EntityHighlightState();
        field_796[16] = 0;
        std::unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>::unique_ptr<true, void>(
            (unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>*)&field_816);
        field_824 = -1;
        field_828 = 0;
        field_832 = 0;
        field_836 = 0;
        field_840 = 0;
        new (&field_848) eastl::vector<Location::VFXData, eastl::allocator>();
        field_72 = param_12;
        field_468 = 1;
    }

    // 0x10042b680, 96 bytes, complete-object constructor, placed by class name
    // Location::Location(graphics::GraphNode*, shared_ptr<World> const&, int, int, LocData const&, bool, bool, int, int, int, int, int, int, bool)
    void Location::Location(GraphNode* param_1, shared_ptr* param_2, int param_3, int param_4, LocData* param_5,
                            bool param_6, bool param_7, int param_8, int param_9, int param_10, int param_11,
                            int param_12, int param_13, bool param_14) {
        Location(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10,
                 param_11, param_12, param_13, param_14);
    }

    // 0x10042b6e0, 384 bytes, base-object destructor, placed by class name
    // Location::~Location()
    void Location::~Location() {
        field_0 = &PTR__Location_100effbf0;
        field_8 = &PTR__Location_100effd90;
        Destruct(this);
        (&field_848)->~vector();
        (&field_816)->~unique_ptr();
        field_776->~shared_ptr();
        (&field_744)->~ActiveComponent();
        (&field_712)->~ActiveComponent();
        (&field_680)->~ActiveComponent();
        field_512->~shared_ptr();
        field_496->~shared_ptr();
        field_472->~shared_ptr();
        (&field_408)->~shared_ptr();
        (&field_272)->~MultiLocTypeCache();
        field_256->~shared_ptr();
        m_parentLocationType->~shared_ptr();
        ~LocationInterface();
    }

    // 0x10042b860, 16 bytes, complete-object destructor, placed by class name
    // Location::~Location(): jumps straight to the base-object destructor

    // 0x10042b880, 32 bytes, deleting destructor, placed by class name
    // Location::~Location()
    void Location::~Location() {
        ~Location(this);
        operator_delete(this);
    }

    // 0x10042b8b0, 96 bytes, placed by class name
    // Location::Hide()
    void Location::Hide() {
        ClearAnimationState(this);
        if (m_hidden != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_hidden",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/Location.cpp",
                      155, "hide() - calling code must ensure method is not called on hidden locations.");
        }
        m_hidden = 1;
        if (field_468 != 0) {
            UpdateHeightMap(this, 2);
        }
    }

    // 0x10042b910, 112 bytes, placed by class name
    // Location::ClearAnimationState()
    void Location::ClearAnimationState() {
        bool bVar1;
        AnimatedModel* this_00;
        shared_ptr* this_01;
        vector* this_02;
        Model* this_03;
        type* in_RSI;

        bVar1 = (&field_816)->operator_cast_to_bool();
        if (bVar1) {
            this_00 =
                (AnimatedModel*)
                    std::unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>::operator->(
                        (unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>*)&field_816);
            this_00->ResetOverrideAnimation();
        }
        this_01 = (shared_ptr*)(&field_680, in_RSI)->SSOBeginPtr();
        bVar1 = shared_ptr::operator_cast_to_bool(this_01);
        if (bVar1) {
            this_02 = (&field_680, in_RSI)->SSOBeginPtr();
            this_03 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_02);
            this_03->ClearAnimationState();
        }
    }

    // 0x10042b980, 976 bytes, placed by class name
    // Location::UpdateHeightMap(HeightChangeType)
    /* WARNING: Removing unreachable block (ram,4299340388) */
    /* Location::UpdateHeightMap(HeightChangeType) */

    ulong Location::UpdateHeightMap(int param_2) {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        uint uVar1;
        uint uVar2;
        bool bVar3;
        char cVar4;
        undefined1 uVar5;
        byte bVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        shared_ptr* this_03;
        LocType* pLVar11;
        World* pWVar12;
        HeightMap* pHVar13;
        vector* pvVar14;
        Model* pMVar15;
        NXTPixToolkit* pNVar16;
        AABB* pAVar17;
        Vector2T<int>* pVVar18;
        float* pfVar19;
        undefined8 unaff_RBX;
        ulong uVar20;
        undefined7 uVar21;
        type* ptVar22;
        shared_ptr<LocType>* this_04;
        int iVar23;

        uVar20 = CONCAT71((int7)((ulong)unaff_RBX >> 8), 1);
        if (param_2 == 0)
            goto LAB_10042badf;
        this_03 = (shared_ptr*)GetWorld();
        this_00 = field_256;
        bVar3 = this_00->operator_cast_to_bool();
        if (bVar3) {
            this_01 = &field_680;
            cVar4 = this_01->IsTaskRunning();
            if ((cVar4 == '\0') && (bVar3 = shared_ptr::operator_cast_to_bool(this_03), bVar3)) {
                pLVar11 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
                this_02 = field_352;
                uVar5 = this_02->GetShape();
                cVar4 = pLVar11->RaiseEntities(uVar5, field_405);
                this_04 = (shared_ptr<LocType>*)this_00;
                if (cVar4 == '\0') {
                    this_04 = (shared_ptr<LocType>*)m_parentLocationType;
                    pLVar11 = (LocType*)shared_ptr<LocType>::operator->(this_04);
                    uVar5 = this_02->GetShape();
                    cVar4 = pLVar11->RaiseEntities(uVar5, field_405);
                    if (cVar4 != '\0')
                        goto LAB_10042ba68;
                } else {
                LAB_10042ba68:
                    pLVar11 = (LocType*)shared_ptr<LocType>::operator->(this_04);
                    bVar6 = this_02->GetShape();
                    ptVar22 = (type*)(ulong)bVar6;
                    iVar7 = pLVar11->GetRaiseObjectGroundDecor();
                    if (param_2 == 2) {
                        pWVar12 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)this_03);
                        pHVar13 = (HeightMap*)pWVar12->GetHeightMap();
                        cVar4 = this_01->IsTaskDone();
                        if (cVar4 == '\0') {
                            cVar4 = '\0';
                        } else {
                            pvVar14 = this_01->SSOBeginPtr(ptVar22);
                            pMVar15 =
                                (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)pvVar14);
                            cVar4 = pMVar15->IsLoaded();
                        }
                        if ((iVar7 != 0) || (cVar4 != '\0')) {
                            iVar8 = GetHeightMapLevel();
                            uVar1 = field_428;
                            uVar2 = field_432;
                            pLVar11 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
                            uVar5 = this_02->GetRot();
                            iVar9 = pLVar11->GetGridWidth(uVar5);
                            pLVar11 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
                            bVar6 = this_02->GetRot();
                            ptVar22 = (type*)(ulong)bVar6;
                            iVar10 = pLVar11->GetGridLength();
                            iVar23 = 0;
                            uVar21 = (undefined7)((ulong)pLVar11 >> 8);
                            if (cVar4 != '\0') {
                                pvVar14 = this_01->SSOBeginPtr(ptVar22);
                                pNVar16 = (NXTPixToolkit*)shared_ptr<graphics::Model>::operator->(
                                    (shared_ptr<graphics::Model>*)pvVar14);
                                pAVar17 = (AABB*)pNVar16->GetScreen();
                                cVar4 = pAVar17->IsValid();
                                if (cVar4 != '\0') {
                                    pvVar14 = this_01->SSOBeginPtr(ptVar22);
                                    pNVar16 = (NXTPixToolkit*)shared_ptr<graphics::Model>::operator->(
                                        (shared_ptr<graphics::Model>*)pvVar14);
                                    pNVar16 = (NXTPixToolkit*)pNVar16->GetScreen();
                                    pVVar18 = (Vector2T<int>*)pNVar16->GetScreen();
                                    pfVar19 = (float*)pVVar18->y();
                                    iVar23 = (int)*pfVar19;
                                }
                            }
                            pHVar13->RemoveLocationHeightOffset(iVar8, uVar1, uVar2, iVar9, iVar10, iVar7, iVar23);
                        LAB_10042bd47:
                            uVar20 = CONCAT71(uVar21, 1);
                            goto LAB_10042badf;
                        }
                    } else if (param_2 == 1) {
                        pWVar12 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)this_03);
                        pHVar13 = (HeightMap*)pWVar12->GetHeightMap();
                        cVar4 = this_01->IsTaskDone();
                        if (cVar4 == '\0') {
                            cVar4 = '\0';
                        } else {
                            pvVar14 = this_01->SSOBeginPtr(ptVar22);
                            pMVar15 =
                                (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)pvVar14);
                            cVar4 = pMVar15->IsLoaded();
                        }
                        if ((iVar7 != 0) || (cVar4 != '\0')) {
                            iVar8 = GetHeightMapLevel();
                            uVar1 = field_428;
                            uVar2 = field_432;
                            pLVar11 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
                            uVar5 = this_02->GetRot();
                            iVar9 = pLVar11->GetGridWidth(uVar5);
                            pLVar11 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
                            bVar6 = this_02->GetRot();
                            ptVar22 = (type*)(ulong)bVar6;
                            iVar10 = pLVar11->GetGridLength();
                            iVar23 = 0;
                            uVar21 = (undefined7)((ulong)pLVar11 >> 8);
                            if (cVar4 != '\0') {
                                pvVar14 = this_01->SSOBeginPtr(ptVar22);
                                pNVar16 = (NXTPixToolkit*)shared_ptr<graphics::Model>::operator->(
                                    (shared_ptr<graphics::Model>*)pvVar14);
                                pAVar17 = (AABB*)pNVar16->GetScreen();
                                cVar4 = pAVar17->IsValid();
                                if (cVar4 != '\0') {
                                    pvVar14 = this_01->SSOBeginPtr(ptVar22);
                                    pNVar16 = (NXTPixToolkit*)shared_ptr<graphics::Model>::operator->(
                                        (shared_ptr<graphics::Model>*)pvVar14);
                                    pNVar16 = (NXTPixToolkit*)pNVar16->GetScreen();
                                    pVVar18 = (Vector2T<int>*)pNVar16->GetScreen();
                                    pfVar19 = (float*)pVVar18->y();
                                    iVar23 = (int)*pfVar19;
                                }
                            }
                            pHVar13->AddLocationHeightOffset(iVar8, uVar1, uVar2, iVar9, iVar10, iVar7, iVar23);
                            goto LAB_10042bd47;
                        }
                    }
                }
                uVar20 = CONCAT71((int7)((ulong)this_00 >> 8), 1);
                goto LAB_10042badf;
            }
        }
        uVar20 = 0;
    LAB_10042badf:
        return uVar20 & 4294967295;
    }

    // 0x10042bd50, 112 bytes, placed by class name
    // Location::Unhide()
    void Location::Unhide() {
        if (m_hidden == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_hidden",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/Location.cpp",
                      166, "unhide() - calling code must ensure method is only called on hidden locations.");
        }
        m_hidden = 0;
        if (field_468 != 0) {
            UpdateHeightMap(this, 1);
        }
        BeginPlayingDefaultAnimation(this);
    }

    // 0x10042bdc0, 96 bytes, placed by class name
    // Location::BeginPlayingDefaultAnimation()
    void Location::BeginPlayingDefaultAnimation() {
        AnimatedModel* this_00;
        int iVar2;

        if ((&field_816)->operator_cast_to_bool()) {
            iVar2 = GetDefaultAnimationToPlay(this);
            if (iVar2 != -1) {
                this_00 =
                    (AnimatedModel*)
                        std::unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>::operator->(
                            (unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>*)&field_816);
                this_00->RequestDefaultAnimation(iVar2, false, false);
            }
        }
    }

    // 0x10042be50, 96 bytes, placed by class name
    // Location::GetDefaultAnimationToPlay() const
    undefined8 Location::GetDefaultAnimationToPlay() {
        bool bVar1;
        undefined8 uVar2;
        LocType* pLVar3;

        bVar1 = field_256->operator_cast_to_bool();
        uVar2 = 4294967295;
        if (bVar1) {
            pLVar3 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)field_256);
            uVar2 = pLVar3->GetDefaultAnimation();
            if ((int)uVar2 == -1) {
                pLVar3 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)m_parentLocationType);
                uVar2 = pLVar3->GetDefaultAnimation();
            }
        }
        return uVar2;
    }

    // 0x10042beb0, 96 bytes, placed by class name
    // Location::BeginPlayingOverrideAnimation()
    void Location::BeginPlayingOverrideAnimation() {
        AnimatedModel* this_00;
        int iVar1;
        int iVar2;

        iVar1 = GetDefaultAnimationToPlay(this);
        iVar2 = GetOverrideAnimationToPlay(this);
        if (iVar2 != iVar1) {
            this_00 =
                (AnimatedModel*)
                    std::unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>::operator->(
                        (unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>*)&field_816);
            this_00->RequestOverrideAnimation(false, iVar2, 0, false);
        }
    }

    // 0x10042bf10, 128 bytes, placed by class name
    // Location::GetOverrideAnimationToPlay() const
    ulong Location::GetOverrideAnimationToPlay() {
        bool bVar1;
        ulong uVar2;
        LocType* pLVar3;

        uVar2 = (ulong)(uint)field_824;
        if (field_824 == 4294967295) {
            bVar1 = field_256->operator_cast_to_bool();
            uVar2 = 4294967295;
            if (bVar1) {
                pLVar3 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)field_256);
                uVar2 = pLVar3->GetAnimation();
            }
        }
        if ((int)uVar2 == -1) {
            bVar1 = m_parentLocationType->operator_cast_to_bool();
            uVar2 = 4294967295;
            if (bVar1) {
                pLVar3 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)m_parentLocationType);
                uVar2 = pLVar3->GetAnimation();
            }
        }
        return uVar2;
    }

    // 0x10042bf90, 96 bytes, placed by class name
    // Location::ActivateRoofRemove()
    void Location::ActivateRoofRemove() {
        if (field_462 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "!m_roofRemoved",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/entities/"
                "Location.cpp",
                215, "activateRoofRemove() - calling code must ensure method is not called on roof removed locations.");
        }
        field_462 = 1;
        if (field_468 != 0) {
            UpdateHeightMap(this, 2);
        }
    }

    // 0x10042bff0, 96 bytes, placed by class name
    // Location::DeactivateRoofRemove()
    void Location::DeactivateRoofRemove() {
        if (field_462 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_roofRemoved",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/entities/"
                "Location.cpp",
                226,
                "deactivateRoofRemove() - calling code must ensure method is only called on roof removed locations.");
        }
        field_462 = 0;
        if (field_468 != 0) {
            UpdateHeightMap(this, 1);
        }
    }

    // 0x10042c050, 64 bytes, placed by class name
    // Location::ClearJobResources()
    void Location::ClearJobResources() {
        (&field_712)->Clear();
        (&field_744)->Clear();
        shared_ptr<BuildSingleLocationMain>::reset();
    }

    // 0x10042c110, 48 bytes, placed by class name
    // Location::RequestOverrideAnimation(int, int, unsigned int, unsigned int)
    void Location::RequestOverrideAnimation(int param_1, int param_2, uint param_3, uint param_4) {
        field_824 = param_1;
        field_828 = param_2;
        field_832 = param_3;
        field_836 = param_4;
        (*(code*)field_0[6])();
    }

    // 0x10042c140, 336 bytes, placed by class name
    // Location::UpdateAudio()
    ulong Location::UpdateAudio() {
        undefined*** this_00;
        int* piVar1;
        undefined1* this_01;
        char cVar2;
        int iVar4;
        undefined4 uVar5;
        int iVar6;
        int iVar7;
        LocType* pLVar8;
        SoundInstance* this_02;
        undefined8 uVar9;
        undefined8 uVar10;
        ulong uVar11;

        this_00 = &field_8;
        cVar2 = this_00->UpdateAudio();
        if (cVar2 != '\0') {
            this_01 = field_256;
            if (this_01->operator_cast_to_bool()) {
                pLVar8 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_01);
                iVar4 = pLVar8->GetBackgroundSound();
                if (iVar4 < 0) {
                    1041865114->StopSounds(this_00, 1);
                } else {
                    this_02 = (SoundInstance*)this_00->GetSoundInstance(iVar4);
                    if (this_02 != (SoundInstance*)0) {
                        cVar2 = this_02->IsAudible();
                        uVar11 = CONCAT71((int7)((ulong)this >> 8), 1);
                        if (cVar2 == '\0') {
                            this_02->Suspend(0.0);
                        }
                        goto LAB_10042c1bd;
                    }
                    1041865114->StopSounds(this_00, 1);
                    pLVar8 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_01);
                    uVar9 = pLVar8->GenerateBackgroundSoundRandomRate();
                    pLVar8 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_01);
                    uVar5 = pLVar8->GetBackgroundSoundVolume();
                    pLVar8 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_01);
                    iVar6 = pLVar8->GetBackgroundSoundDropoffRange();
                    pLVar8 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_01);
                    iVar7 = pLVar8->GetBackgroundSoundRange();
                    uVar10 = GetWorldPosition();
                    piVar1 = &field_68;
                    this = (Location*)field_8;
                    (*(code*)field_16)(this_00, iVar4, uVar5, 1, iVar6 << 7, iVar7 << 7, uVar10, 18446744073709551615,
                                       15, 1, *piVar1, uVar9);
                }
                uVar11 = CONCAT71((int7)((ulong)this >> 8), 1);
                goto LAB_10042c1bd;
            }
        }
        uVar11 = 0;
    LAB_10042c1bd:
        return uVar11 & 4294967295;
    }

    // 0x10042c440, 400 bytes, placed by class name
    // Location::UpdateRandomSounds(unsigned int)
    void Location::UpdateRandomSounds(uint param_1) {
        undefined1* this_00;
        char cVar2;
        int iVar3;
        int iVar4;
        uint uVar5;
        uint uVar6;
        uint uVar7;
        uint uVar8;
        uint uVar9;
        uint uVar10;
        uint uVar11;
        LocType* pLVar12;
        Array<VarValue, eastl::allocator>* this_01;
        int* piVar13;
        Vector3T* pVVar14;

        this_00 = field_256;
        if (this_00->operator_cast_to_bool()) {
            field_840 = field_840 - param_1;
            pLVar12 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
            this_01 = (Array<VarValue, eastl::allocator>*)pLVar12->GetRandomSounds();
            if (((int)field_840 < 1) && (this_01 != (Array<VarValue, eastl::allocator>*)0)) {
                cVar2 = this_01->empty();
                if (cVar2 == '\0') {
                    cVar2 = (&field_8, 2)->HasSoundInstance();
                    if (cVar2 == '\0') {
                        iVar3 = this_01->end();
                        iVar3 = math::Rand(iVar3 + -1);
                        piVar13 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01,
                                                                                 (long)iVar3);
                        iVar3 = *piVar13;
                        pLVar12 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
                        iVar4 = pLVar12->GetBackgroundSoundVolume();
                        pLVar12 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
                        uVar5 = pLVar12->GetRandomSoundShape();
                        pLVar12 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
                        uVar6 = pLVar12->GetBackgroundSoundDropoffRange();
                        pLVar12 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
                        uVar7 = pLVar12->GetBackgroundSoundRange();
                        pLVar12 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
                        uVar8 = pLVar12->GetBackgroundSoundRateMin();
                        pLVar12 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
                        uVar9 = pLVar12->GetBackgroundSoundRateMax();
                        pLVar12 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
                        uVar10 = pLVar12->GetRandomSoundMin();
                        pLVar12 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
                        uVar11 = pLVar12->GetRandomSoundMax();
                        pVVar14 = (Vector3T*)GetWorldPosition();
                        uVar5 = AddRandomSound(iVar3, iVar4, uVar5, uVar6, uVar7, uVar8, uVar9, uVar10, uVar11, pVVar14,
                                               field_68);
                        field_840 = uVar5;
                    }
                }
            }
        }
    }

    // 0x10042c7b0, 256 bytes, placed by class name
    // Location::NeedsAnimatedModel() const
    ulong Location::NeedsAnimatedModel() {
        char cVar1;
        int iVar3;
        long lVar4;
        vector* this_00;
        Model* this_01;
        LocType* this_02;
        AnimatedModel* this_03;
        type* in_RSI;
        undefined8 unaff_R15;
        ulong uVar5;

        lVar4 = field_256->end();
        if (lVar4 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_locationType.get()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/Location.cpp",
                      365, "Location: needsAnimatedModel() called without valid location type available");
        }
        cVar1 = (&field_680)->IsTaskDone();
        if (cVar1 != '\0') {
            this_00 = (&field_680, in_RSI)->SSOBeginPtr();
            this_01 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
            cVar1 = this_01->IsLoaded();
            if (cVar1 != '\0') {
                iVar3 = GetOverrideAnimationToPlay(this);
                uVar5 = CONCAT71((int7)((ulong)unaff_R15 >> 8), 1);
                if (iVar3 == -1) {
                    this_02 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)field_256);
                    cVar1 = this_02->HasParticles();
                    if (cVar1 == '\0') {
                        if ((&field_816)->operator_cast_to_bool()) {
                            this_03 =
                                (AnimatedModel*)
                                    std::unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>::
                                    operator->((unique_ptr<LocationAnimatedModel,
                                                           std::default_delete<LocationAnimatedModel>>*)&field_816);
                            cVar1 = this_03->InUse();
                            if (cVar1 != '\0')
                                goto LAB_10042c896;
                        }
                        uVar5 = 0;
                    }
                }
            LAB_10042c896:
                return uVar5 & 4294967295;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("m_model.IsTaskDone() && m_model.GetAsset()->IsLoaded()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/entities/"
                  "Location.cpp",
                  366, "Location: needsAnimatedMode() called without valid model available");
    }

    // 0x10042c910, 96 bytes, placed by class name
    // Location::GetDefaultModel(AnimatedModelPair&, int)
    bool Location::GetDefaultModel(AnimatedModelPair* param_1, int param_2) {
        shared_ptr* psVar1;
        long lVar2;
        undefined4 in_register_00000034;
        type* this;

        this = (type*)CONCAT44(in_register_00000034, param_2);
        psVar1 = (shared_ptr*)param_1[28].field_8.SSOBeginPtr(this);
        shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)this, psVar1);
        psVar1 = (shared_ptr*)((param_1 + 31))->SSOBeginPtr(psVar1);
        shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)(this + 16), psVar1);
        lVar2 = end();
        return lVar2 != 0;
    }

    // 0x10042c970, 2400 bytes, placed by class name
    // Location::Build(graphics::RT7Core&, Js5ResourceProvider&, ConfigProvider&, AssetBuilder&, unsigned int, PlayerVarDomain*)
    ulong Location::Build(RT7Core* param_1, Js5ResourceProvider* param_2, ConfigProvider* param_3,
                          AssetBuilder* param_4, uint param_5, PlayerVarDomain* param_6) {
        undefined1* puVar1;
        LocData* pLVar2;
        char cVar3;
        bool bVar4;
        undefined1 uVar5;
        byte bVar6;
        undefined4 uVar7;
        int iVar8;
        uint uVar9;
        int iVar10;
        long* plVar11;
        shared_ptr* psVar12;
        LocType* pLVar13;
        undefined* puVar14;
        long lVar15;
        World* pWVar16;
        SceneViewData* this_00;
        QuaternionT* pQVar17;
        GraphicsApp* pGVar18;
        AnimatedModel* pAVar19;
        ulong uVar20;
        GraphNode* pGVar21;
        Text* pTVar22;
        LocationContainer* pLVar23;
        RT7Core* pRVar24;
        vector* pvVar25;
        Model* this_01;
        HeadbarType* this_02;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_03;
        int* piVar26;
        ObjAppearanceData* this_04;
        CoordGrid* pCVar27;
        CommandLine* this_05;
        type* ptVar28;
        PlayerVarDomain* pPVar29;
        AssetBuilder* pAVar30;
        LocData* this_06;
        undefined4 uVar31;
        undefined8 in_stack_fffffffffffffec8;
        undefined8 uVar32;
        int* in_stack_fffffffffffffed0;
        undefined4 uVar33;
        shared_ptr local_128[4];
        undefined1 local_e8[16];
        undefined1 local_d8[24];
        float local_c0;
        int local_bc;
        int local_b8;
        uint local_b4;
        LocType* local_b0;
        ulong local_a8;
        ulong local_a0;
        shared_ptr<World>* local_98;
        shared_ptr<LocType>* local_90;
        float local_88;
        float local_84;
        float local_80;
        undefined8 local_78;
        undefined4 local_70;
        AssetBuilder* local_68;
        long local_60;
        GraphNode* local_58;
        int local_4c;
        int local_48;
        uint local_44;
        ConfigProvider* local_40;
        LocData* local_38;

        uVar31 = (undefined4)((ulong)in_stack_fffffffffffffec8 >> 32);
        plVar11 = (long*)Instance();
        cVar3 = (**(code**)(*plVar11 + 224))(plVar11);
        if (cVar3 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("GraphicsApp::Instance()->IsInsideMainLogic()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/Location.cpp",
                      402, (char*)0);
        }
        cVar3 = graphics::Model::IsReadyToConstruct(param_1);
        if (cVar3 != '\0') {
            this_06 = (LocData*)m_parentLocationType;
            local_b4 = param_5;
            local_68 = param_4;
            local_40 = param_3;
            bVar4 = this_06->operator_cast_to_bool();
            if (!bVar4) {
                pPVar29 = (PlayerVarDomain*)0;
                psVar12 = ConfigProvider::GetConfig<LocType>(local_40, m_iD, (DataStatus**)0);
                shared_ptr<LocType>::operator=((shared_ptr<LocType>*)this_06, psVar12);
                bVar4 = this_06->operator_cast_to_bool();
                if (!bVar4)
                    goto LAB_10042d28c;
            }
            pLVar13 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_06);
            cVar3 = pLVar13->IsMultiLoc();
            puVar1 = field_256;
            if (cVar3 == '\0') {
                shared_ptr<LocType>::operator=((shared_ptr<LocType>*)puVar1, (shared_ptr*)this_06);
            } else {
                local_60 = puVar1->end();
                local_38 = this_06;
                puVar14 = (undefined*)(&field_272, (shared_ptr*)puVar1, (shared_ptr*)this_06, param_6, local_40)
                              ->GetMultiLoc();
                if (puVar14 == DataStatus::MISSING) {
                    uVar5 = GetTargetLOD();
                    SetCurrentLOD(uVar5);
                    pPVar29 = (PlayerVarDomain*)CONCAT71((int7)((ulong)param_6 >> 8), 1);
                    bVar4 = false;
                } else {
                    bVar4 = puVar1->operator_cast_to_bool();
                    if (bVar4) {
                        lVar15 = puVar1->end();
                        bVar4 = true;
                        if (local_60 != lVar15) {
                            (&field_848)->clear();
                        }
                        pPVar29 = param_6;
                    } else {
                        bVar4 = false;
                        pPVar29 = (PlayerVarDomain*)0;
                    }
                }
                this_06 = local_38;
                if (!bVar4)
                    goto LAB_10042d28c;
            }
            pLVar13 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_06);
            cVar3 = pLVar13->IsActive();
            if (cVar3 == '\0') {
                SetOccludesView(true);
            }
            bVar4 = puVar1->operator_cast_to_bool();
            if (bVar4) {
                local_d8._16_8_ = param_1;
                local_90 = (shared_ptr<LocType>*)puVar1;
                local_98 = (shared_ptr<World>*)GetWorld();
                local_60 = CONCAT44(local_60._4_4_, field_428 << 7);
                local_4c = field_432 << 7;
                pLVar13 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_06);
                puVar1 = field_352;
                uVar5 = puVar1->GetRot();
                uVar7 = pLVar13->GetGridWidth(uVar5);
                local_58 = (GraphNode*)CONCAT44(local_58._4_4_, uVar7);
                pLVar13 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_06);
                uVar5 = puVar1->GetRot();
                iVar8 = pLVar13->GetGridLength(uVar5);
                local_38 = (LocData*)puVar1;
                if (field_444 == -1) {
                    local_48 = iVar8;
                    local_b0 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_06);
                    uVar33 = (undefined4)((ulong)in_stack_fffffffffffffed0 >> 32);
                    local_a8 = this_06->end();
                    pWVar16 = (World*)shared_ptr<World>::operator->(local_98);
                    local_a0 = pWVar16->GetHeightMap();
                    uVar7 = GetHeightMapLevel((int)local_60, local_4c);
                    uVar9 = field_428;
                    local_44 = field_432;
                    bVar6 = local_38->GetRot();
                    pLVar2 = local_38;
                    in_stack_fffffffffffffed0 = (int*)CONCAT44(uVar33, (uint)(field_405 == false));
                    uVar32 = CONCAT44(uVar31, (uint)bVar6);
                    iVar8 = local_b0->GetLocationHeight(local_a8, local_a0, uVar7, uVar9, local_44, uVar32);
                    uVar31 = (undefined4)((ulong)uVar32 >> 32);
                    field_444 = iVar8;
                    if (iVar8 != -1) {
                        iVar8 = (int)local_58 * 128;
                        local_48 = local_48 << 7;
                        local_58 = (GraphNode*)GetNode();
                        this_00 = (SceneViewData*)shared_ptr<LocType>::operator->(local_90);
                        local_b0 = (LocType*)this_00->GetStippleNearClipParams();
                        uVar5 = pLVar2->GetShape();
                        local_a0 = CONCAT71(local_a0._1_7_, uVar5);
                        uVar5 = pLVar2->GetRot();
                        local_44 = CONCAT31(local_44._1_3_, uVar5);
                        local_a8 = CONCAT44(local_a8._4_4_, field_456);
                        bVar4 = m_isWDDBothOffsetMember;
                        lVar15 = local_38->y();
                        in_stack_fffffffffffffed0 = (int*)(lVar15 + 32);
                        LocShapes::GetShapeOffsetAndRotation(&local_c0, &local_bc, &local_b8, local_a0 & 255,
                                                             (undefined1)local_44, local_a8 & 4294967295,
                                                             CONCAT44(uVar31, (uint)bVar4));
                        new (&local_88) math::Vector3T<int>();
                        local_88 = (float)(iVar8 / 2) + (float)(field_436 << 7);
                        local_84 = (float)field_444;
                        local_80 = (float)(local_48 / 2) + (float)(field_440 << 7);
                        pQVar17 = (QuaternionT*)local_38->y();
                        new (&local_78) math::Vector3T<int>();
                        pLVar2 = local_38;
                        new (local_128) math::Matrix44T<float>(pQVar17, (Vector3T*)&local_78);
                        uVar31 = 0;
                        new (local_e8) math::ColourHSL((float)local_bc, 0.0, (float)local_b8);
                        local_78 = local_128->TransformVector(local_e8);
                        local_70 = uVar31;
                        math::Vector3T<float>::operator+=((Vector3T<float>*)&local_88, (Vector3T*)&local_78);
                        math::Vector3T<float>::operator+=((Vector3T<float>*)&local_88, (Vector3T*)local_b0);
                        lVar15 = pLVar2->y();
                        math::Vector3T<float>::operator+=((Vector3T<float>*)&local_88, (Vector3T*)(lVar15 + 16));
                        pGVar21 = local_58;
                        local_58->SetTranslation((Vector3T*)&local_88);
                        new (&local_78) math::QuaternionT<float>();
                        local_78.FromAxisAngle(PTR_UP_100ee66d0, local_c0);
                        pQVar17 = (QuaternionT*)pLVar2->y();
                        math::operator*((math*)local_d8, pQVar17, (QuaternionT*)&local_78);
                        math::Rect<float>::operator=((Rect<float>*)&local_78, (Rect*)local_d8);
                        pGVar21->SetRotation((QuaternionT*)&local_78);
                        lVar15 = pLVar2->y();
                        pGVar21->SetScale((Vector3T*)(lVar15 + 32));
                    }
                }
                if (field_444 != -1) {
                    if (field_72 == -1) {
                        pLVar13 = (LocType*)shared_ptr<LocType>::operator->(local_90);
                        pWVar16 = (World*)shared_ptr<World>::operator->(local_98);
                        local_98 = (shared_ptr<World>*)pWVar16->GetLinkMap();
                        uVar31 = GetDuration();
                        local_90 = (shared_ptr<LocType>*)CONCAT44(local_90._4_4_, uVar31);
                        uVar9 = field_428;
                        local_58 = (GraphNode*)CONCAT44(local_58._4_4_, field_432);
                        uVar5 = local_38->GetRot();
                        cVar3 = pLVar13->GetMaxRemoveRoofLevel(local_98, (ulong)local_90 & 4294967295, uVar9,
                                                               (ulong)local_58 & 4294967295, uVar5);
                        field_72 = (int)cVar3;
                    }
                    pAVar30 = local_68;
                    pRVar24 = (RT7Core*)local_d8._16_8_;
                    cVar3 = BuildModel(this, (RT7Core*)local_d8._16_8_, local_68, (int)local_60, local_4c);
                    if (cVar3 != '\0') {
                        cVar3 = BuildAnimatedModel(this, pRVar24, local_40, pAVar30);
                        if (cVar3 != '\0') {
                            if (m_hidden == '\0') {
                                pRVar24 = (RT7Core*)(ulong)field_464;
                                cVar3 = UpdateHeightMap(this);
                                if (cVar3 == '\0')
                                    goto LAB_10042d289;
                            }
                            if (field_464 != 0) {
                                field_468 = field_464;
                                field_464 = 0;
                            }
                            pAVar30 = (AssetBuilder*)field_496;
                            bVar4 = pAVar30->operator_cast_to_bool();
                            if (bVar4) {
                                puVar1 = &field_816;
                                pGVar18 = (GraphicsApp*)puVar1;
                                bVar4 = puVar1->operator_cast_to_bool();
                                if (bVar4) {
                                    pGVar18 = (GraphicsApp*)pGVar18->Instance();
                                    uVar31 = pGVar18->GetFrameCount();
                                    local_40 = (ConfigProvider*)CONCAT44(local_40._4_4_, uVar31);
                                    pAVar19 =
                                        (AnimatedModel*)std::unique_ptr<LocationAnimatedModel,
                                                                        std::default_delete<LocationAnimatedModel>>::
                                        operator->((unique_ptr<LocationAnimatedModel,
                                                               std::default_delete<LocationAnimatedModel>>*)puVar1);
                                    uVar9 = local_b4;
                                    local_68 = pAVar30;
                                    pAVar19->Build((uint)local_40, local_b4, false, 0);
                                    pAVar19 =
                                        (AnimatedModel*)std::unique_ptr<LocationAnimatedModel,
                                                                        std::default_delete<LocationAnimatedModel>>::
                                        operator->((unique_ptr<LocationAnimatedModel,
                                                               std::default_delete<LocationAnimatedModel>>*)puVar1);
                                    pAVar30 = local_68;
                                    pRVar24 = (RT7Core*)((ulong)local_40 & 4294967295);
                                    uVar20 = pAVar19->IsReady((uint)local_40, uVar9);
                                    if ((char)uVar20 == '\0') {
                                        pPVar29 = (PlayerVarDomain*)((uVar20 >> 8 & 16777215) << 8);
                                        goto LAB_10042d28c;
                                    }
                                }
                            }
                            puVar1 = field_512;
                            bVar4 = puVar1->operator_cast_to_bool();
                            if (bVar4) {
                                pGVar21 = (GraphNode*)GetNode();
                                pTVar22 = (Text*)pGVar21->GetParent();
                                pLVar23 = (LocationContainer*)pTVar22->GetLinkObjCount();
                                pRVar24 = (RT7Core*)shared_ptr<ChangeLocationRequest>::operator*(
                                    (shared_ptr<ChangeLocationRequest>*)puVar1);
                                pLVar23->HideLocation(pRVar24);
                            }
                            local_40 = (ConfigProvider*)puVar1;
                            bVar4 = pAVar30->operator_cast_to_bool();
                            if (bVar4) {
                                if ((field_237 != '\0') || (m_enableFadeIn == '\0')) {
                                    psVar12 = (shared_ptr*)(&field_680, (type*)pRVar24)->SSOBeginPtr();
                                    bVar4 = shared_ptr::operator_cast_to_bool(psVar12);
                                    if (!bVar4) {
                                        /* WARNING: Subroutine does not return */
                                        LogAssert("m_model.GetAsset()",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/game/runetek5/scene/entities/Location.cpp",
                                                  591, (char*)0);
                                    }
                                    pvVar25 = (&field_680, (type*)pRVar24)->SSOBeginPtr();
                                    this_01 = (Model*)shared_ptr<graphics::Model>::operator->(
                                        (shared_ptr<graphics::Model>*)pvVar25);
                                    this_01->SetFadeTime(0);
                                }
                                local_78 = CONCAT44(local_78._4_4_, 2);
                                this_02 = (HeadbarType*)shared_ptr<ChangeLocationRequest>::operator->(
                                    (shared_ptr<ChangeLocationRequest>*)pAVar30);
                                local_d8._0_4_ = this_02->GetStickTime();
                                local_88 = -NAN;
                                this_03 = (compressed_pair_imp<
                                           std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>*)
                                              shared_ptr<ChangeLocationRequest>::operator->(
                                                  (shared_ptr<ChangeLocationRequest>*)pAVar30);
                                piVar26 = (int*)eastl::compressed_pair_imp<
                                    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                    eastl::allocator, 0>::second(this_03);
                                this_04 = (ObjAppearanceData*)shared_ptr<ChangeLocationRequest>::operator->(
                                    (shared_ptr<ChangeLocationRequest>*)pAVar30);
                                pCVar27 = (CoordGrid*)this_04->GetOffset();
                                local_e8._0_4_ = 0.0;
                                MakeSharedPool<ChangeLocationRequest, 128>::MakeShared<
                                    ChangeLocationRequestType, int, int, CoordGrid_const&, LocData_const&, int>(
                                    local_128, (MakeSharedPool<ChangeLocationRequest, 128>*)&local_78,
                                    (ChangeLocationRequestType*)local_d8, (int*)&local_88, piVar26, pCVar27,
                                    (LocData*)local_e8, in_stack_fffffffffffffed0);
                                shared_ptr<ChangeLocationRequest>::operator=(
                                    (shared_ptr<ChangeLocationRequest>*)local_40, local_128);
                                local_128->~shared_ptr();
                                pGVar21 = (GraphNode*)GetNode();
                                pTVar22 = (Text*)pGVar21->GetParent();
                                pLVar23 = (LocationContainer*)pTVar22->GetLinkObjCount();
                                pRVar24 = (RT7Core*)pAVar30->end();
                                pLVar23->DeleteLocation(pRVar24, this);
                                shared_ptr<ChangeLocationRequest>::reset();
                            }
                            pLVar2 = local_38;
                            pvVar25 = (&field_680, (type*)pRVar24)->SSOBeginPtr();
                            this_05 = (CommandLine*)shared_ptr<graphics::Model>::operator->(
                                (shared_ptr<graphics::Model>*)pvVar25);
                            uVar9 = GetHeightMapLevel((int)local_60, local_4c);
                            ptVar28 = (type*)(ulong)uVar9;
                            this_05->SetSelectionStart(uVar9);
                            pvVar25 = (&field_680, ptVar28)->SSOBeginPtr();
                            local_40 = (ConfigProvider*)shared_ptr<graphics::Model>::operator->(
                                (shared_ptr<graphics::Model>*)pvVar25);
                            local_68 = (AssetBuilder*)GetWorldPosition();
                            pLVar13 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_06);
                            uVar5 = pLVar2->GetRot();
                            iVar8 = pLVar13->GetGridWidth(uVar5);
                            pLVar13 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_06);
                            uVar5 = pLVar2->GetRot();
                            iVar10 = pLVar13->GetGridLength(uVar5);
                            local_40->SetPointLightBounds(local_68, iVar8, iVar10);
                            uVar5 = GetTargetLOD();
                            SetCurrentLOD(uVar5);
                            BuildVFX(this, (RT7Core*)local_d8._16_8_);
                            pPVar29 = (PlayerVarDomain*)CONCAT71((uint7)(uint3)((uint)iVar8 >> 8), 1);
                            goto LAB_10042d28c;
                        }
                    }
                }
            } else {
                uVar5 = GetTargetLOD();
                SetCurrentLOD(uVar5);
            }
        }
    LAB_10042d289:
        pPVar29 = (PlayerVarDomain*)0;
    LAB_10042d28c:
        return (ulong)pPVar29 & 4294967041;
    }

    // 0x10042d530, 2352 bytes, placed by class name
    // Location::BuildModel(graphics::RT7Core&, AssetBuilder&, int, int)
    ulong Location::BuildModel(RT7Core* param_1, AssetBuilder* param_2, int param_3, int param_4) {
        undefined1* puVar1;
        undefined1* this_00;
        uint uVar2;
        char cVar3;
        char cVar4;
        bool bVar5;
        undefined1 uVar6;
        byte bVar7;
        int iVar8;
        undefined4 uVar9;
        undefined4 uVar10;
        vector* pvVar11;
        Model* pMVar12;
        BuildTerrainMain* this_01;
        Array<VarValue, eastl::allocator>* this_02;
        AssetJob* pAVar13;
        LoginManager* this_03;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        shared_ptr* psVar14;
        LocType* pLVar15;
        long lVar16;
        AABB* this_05;
        undefined8 uVar17;
        undefined* puVar18;
        LocType* this_06;
        shared_ptr<World>* psVar19;
        undefined8 uVar20;
        GameToken* this_07;
        GraphNode* pGVar21;
        Text* pTVar22;
        LocationContainer* pLVar23;
        ChangeLocationRequest* pCVar24;
        HeadbarType* this_08;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_09;
        int* piVar25;
        ObjAppearanceData* this_10;
        CoordGrid* pCVar26;
        NXTPixToolkit* this_11;
        World* pWVar27;
        undefined1* puVar28;
        ulong uVar29;
        uint uVar30;
        char* pcVar31;
        shared_ptr* psVar32;
        Js5ResourceProvider* pJVar33;
        type* ptVar34;
        undefined8 in_stack_fffffffffffffe78;
        undefined8 uVar35;
        int* piVar36;
        undefined8 in_stack_fffffffffffffe88;
        undefined4 uVar38;
        undefined8 uVar37;
        undefined4 uVar39;
        undefined4 local_158[6];
        shared_ptr local_140;
        int local_124;
        Js5ResourceProvider* local_120;
        Js5ResourceProvider* local_118;
        shared_ptr local_110;
        LocType* local_100;
        int local_f8;
        int local_f4;
        Js5ArchiveSettings* local_f0;
        LocType* local_e8;
        int local_e0;
        undefined1 local_dc[12];
        ScopedGPUMemoryZone local_d0[8];
        LogStream local_c8;
        long local_38;

        uVar38 = (undefined4)((ulong)in_stack_fffffffffffffe88 >> 32);
        uVar10 = (undefined4)((ulong)in_stack_fffffffffffffe78 >> 32);
        puVar28 = (undefined1*)(ulong)(uint)param_3;
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pcVar31 = "BuildLocation";
        local_120 = (Js5ResourceProvider*)param_1;
        render::ScopedGPUMemoryZone::ScopedGPUMemoryZone(local_d0, "BuildLocation");
        local_dc._4_8_ = &field_680;
        cVar4 = local_dc._4_8_->IsTaskDone();
        if (cVar4 == '\0') {
        LAB_10042d5ba:
            puVar1 = field_256;
            this_01 = (BuildTerrainMain*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)puVar1);
            this_02 = (Array<VarValue, eastl::allocator>*)this_01->GetRequestData();
            cVar4 = this_02->empty();
            if (cVar4 == '\0') {
                puVar28 = field_776;
                local_f8 = param_4;
                local_f4 = param_3;
                bVar5 = puVar28->operator_cast_to_bool();
                if (!bVar5) {
                    local_f0 = (Js5ArchiveSettings*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)puVar1);
                    this_00 = field_352;
                    uVar6 = this_00->GetShape();
                    local_e8 = (LocType*)CONCAT71(local_e8._1_7_, uVar6);
                    local_100 = (LocType*)param_2;
                    uVar6 = this_00->GetRot();
                    bVar5 = field_404;
                    local_dc._4_8_ = puVar1;
                    uVar17 = (&field_408)->end();
                    uVar20 = local_dc._4_8_;
                    pLVar15 = local_100;
                    pJVar33 = local_120;
                    uVar35 = CONCAT44(uVar10, (uint)bVar5);
                    uVar37 = CONCAT44(uVar38, 8192);
                    local_120 = (Js5ResourceProvider*)&field_712;
                    puVar18 = (undefined*)LocType::GetModels(local_f0, pJVar33, local_100, &field_712,
                                                             (ulong)local_e8 & 255, uVar6, uVar35, uVar17, uVar37);
                    uVar10 = (undefined4)((ulong)uVar35 >> 32);
                    uVar39 = (undefined4)((ulong)uVar37 >> 32);
                    uVar38 = (undefined4)((ulong)uVar17 >> 32);
                    if (puVar18 == DataStatus::NOTLOADED)
                        goto LAB_10042dd8c;
                    if (puVar18 == DataStatus::MISSING) {
                        uVar17 = logger::default_logger();
                        new (&local_c8) logger::LogStream((LogStream*)&LOGGER_SCENE);
                        this_07 = (GameToken*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)uVar20);
                        uVar10 = this_07->GetStatus();
                        piVar36 = (int*)CONCAT44(uVar38, uVar10);
                        logger::Logger::Log(uVar17, 0, &local_c8, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "game/runetek5/scene/entities/Location.cpp",
                                            1316, "Missing models for location type %d");
                        local_c8.~LogStream();
                        puVar28 = field_512;
                        bVar5 = puVar28->operator_cast_to_bool();
                        if (bVar5) {
                            pGVar21 = (GraphNode*)GetNode();
                            pTVar22 = (Text*)pGVar21->GetParent();
                            pLVar23 = (LocationContainer*)pTVar22->GetLinkObjCount();
                            pCVar24 = (ChangeLocationRequest*)puVar28->end();
                            pLVar23->HideLocation(pCVar24);
                        }
                        puVar1 = field_496;
                        bVar5 = puVar1->operator_cast_to_bool();
                        if (bVar5) {
                            local_158[0] = 2;
                            this_08 = (HeadbarType*)shared_ptr<ChangeLocationRequest>::operator->(
                                (shared_ptr<ChangeLocationRequest>*)puVar1);
                            local_110._0_4_ = this_08->GetStickTime();
                            local_e0 = -1;
                            this_09 = (compressed_pair_imp<
                                       std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)
                                          shared_ptr<ChangeLocationRequest>::operator->(
                                              (shared_ptr<ChangeLocationRequest>*)puVar1);
                            piVar25 = (int*)eastl::compressed_pair_imp<
                                std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                eastl::allocator, 0>::second(this_09);
                            this_10 = (ObjAppearanceData*)shared_ptr<ChangeLocationRequest>::operator->(
                                (shared_ptr<ChangeLocationRequest>*)puVar1);
                            pCVar26 = (CoordGrid*)this_10->GetOffset();
                            local_dc[0] = 0;
                            local_dc[1] = 0;
                            local_dc._2_2_ = 0;
                            MakeSharedPool<ChangeLocationRequest, 128>::MakeShared<
                                ChangeLocationRequestType, int, int, CoordGrid_const&, LocData_const&, int>(
                                &local_140, (MakeSharedPool<ChangeLocationRequest, 128>*)local_158,
                                (ChangeLocationRequestType*)&local_110, &local_e0, piVar25, pCVar26, (LocData*)local_dc,
                                piVar36);
                            shared_ptr<ChangeLocationRequest>::operator=((shared_ptr<ChangeLocationRequest>*)puVar28,
                                                                         &local_140);
                            local_140.~shared_ptr();
                            pGVar21 = (GraphNode*)GetNode();
                            pTVar22 = (Text*)pGVar21->GetParent();
                            pLVar23 = (LocationContainer*)pTVar22->GetLinkObjCount();
                            pCVar24 = (ChangeLocationRequest*)puVar1->end();
                            pLVar23->DeleteLocation(pCVar24, this);
                            shared_ptr<ChangeLocationRequest>::reset();
                        }
                        uVar6 = GetTargetLOD();
                        SetCurrentLOD(uVar6);
                        uVar29 = 0;
                        goto LAB_10042dd8e;
                    }
                    local_f0 = (Js5ArchiveSettings*)this_00;
                    this_06 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)uVar20);
                    iVar8 = this_06->GetHillChangeType();
                    if (iVar8 - 1U < 3) {
                        local_e8 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)local_dc._4_8_);
                        local_118 = (Js5ResourceProvider*)m_parentLocationType->end();
                        local_124 = field_444;
                        psVar19 = (shared_ptr<World>*)GetWorld();
                        pWVar27 = (World*)shared_ptr<World>::operator->(psVar19);
                        uVar20 = pWVar27->GetHeightMap();
                        uVar9 = GetHeightMapLevel(local_f4, local_f8);
                        uVar30 = field_428;
                        uVar2 = field_432;
                        bVar7 = local_f0->GetRot();
                        pLVar15 = local_100;
                        uVar37 = CONCAT44(uVar39, (uint)(field_405 == false));
                        uVar35 = CONCAT44(uVar38, (uint)bVar7);
                        uVar17 = CONCAT44(uVar10, uVar2);
                        pJVar33 = local_118;
                        uVar6 = local_e8->GetLocationOnFlatGround(local_118, local_124, uVar20, uVar9, uVar30, uVar17,
                                                                  uVar35, uVar37);
                        uVar10 = (undefined4)((ulong)uVar17 >> 32);
                        uVar38 = (undefined4)((ulong)uVar35 >> 32);
                        uVar39 = (undefined4)((ulong)uVar37 >> 32);
                        field_406 = uVar6;
                    } else {
                        field_406 = 0;
                    }
                    new (&local_140) Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>();
                    new (local_158) Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>();
                    if ((field_406 == '\0') && (iVar8 != 0)) {
                        local_100 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)local_dc._4_8_);
                        local_e8 = (LocType*)m_parentLocationType->end();
                        psVar19 = (shared_ptr<World>*)GetWorld();
                        pWVar27 = (World*)shared_ptr<World>::operator->(psVar19);
                        local_118 = (Js5ResourceProvider*)pWVar27->GetHeightMap();
                        uVar9 = GetHeightMapLevel(local_f4, local_f8);
                        uVar30 = field_428;
                        uVar2 = field_432;
                        bVar7 = local_f0->GetRot();
                        pJVar33 = (Js5ResourceProvider*)&local_140;
                        cVar4 = local_100->GetHillData(pJVar33, local_158, local_e8, local_118, uVar9,
                                                       CONCAT44(uVar10, uVar30), CONCAT44(uVar38, uVar2),
                                                       CONCAT44(uVar39, (uint)bVar7), field_405 == false);
                        if (cVar4 != '\0')
                            goto LAB_10042db9c;
                    } else {
                    LAB_10042db9c:
                        local_e0 = 8192;
                        psVar14 = (shared_ptr*)local_120->SSOBeginPtr(pJVar33);
                        bVar7 = local_f0->GetRot();
                        local_dc[0] = bVar7;
                        bucket_make_shared<BuildSingleLocationMain, int, shared_ptr<LocType>&, shared_ptr<LocType>&,
                                           shared_ptr<graphics::Model> const&, Rotation90, int&,
                                           Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>,
                                           Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>>(
                            (jag*)&local_110, &local_e0, (shared_ptr*)local_dc._4_8_, (shared_ptr*)m_parentLocationType,
                            psVar14, local_dc, &field_444, (Array*)&local_140, (Array*)local_158);
                        shared_ptr<BuildSingleLocationMain>::operator=((shared_ptr<BuildSingleLocationMain>*)puVar28,
                                                                       &local_110);
                        local_110.~shared_ptr();
                        new (&local_110) shared_ptr<oldscape::dash3d::Decor>(puVar28);
                        pLVar15->SubmitJob(&local_110);
                        local_110.~shared_ptr();
                    }
                    local_158->~Array();
                    local_140.~Array();
                    uVar29 = 0;
                    goto LAB_10042dd8e;
                }
                pAVar13 = (AssetJob*)shared_ptr<BuildSingleLocationMain>::operator->(
                    (shared_ptr<BuildSingleLocationMain>*)puVar28);
                cVar4 = pAVar13->IsFinished();
                if (cVar4 != '\0') {
                    pAVar13 = (AssetJob*)shared_ptr<BuildSingleLocationMain>::operator->(
                        (shared_ptr<BuildSingleLocationMain>*)puVar28);
                    cVar4 = pAVar13->IsSuccessful();
                    if (cVar4 == '\0') {
                        shared_ptr<BuildSingleLocationMain>::reset();
                    } else {
                        this_03 = (LoginManager*)shared_ptr<BuildSingleLocationMain>::operator->(
                            (shared_ptr<BuildSingleLocationMain>*)puVar28);
                        this_04 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                      this_03->GetDevCredentialsOutputDirectory();
                        psVar14 =
                            (shared_ptr*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                                this_04);
                        if (psVar14 == (shared_ptr*)0) {
                            /* WARNING: Subroutine does not return */
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "game/runetek5/scene/entities/Location.cpp",
                                            1407, (char*)0);
                        }
                        if (*(char*)(psVar14 + 1) != '\0') {
                            math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_528, (Matrix44T*)(psVar14 + 2));
                            field_592 = '\x01';
                        }
                        if (field_792 != '\0') {
                            bVar5 = (&field_816)->operator_cast_to_bool();
                            if (bVar5) {
                                (&field_816, (LocationAnimatedModel*)0)->reset();
                            }
                        }
                        field_792 = '\0';
                        psVar32 = psVar14;
                        local_dc._4_8_->SetConstructedObj(psVar14);
                        shared_ptr<graphics::Model>::reset();
                        pLVar15 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)puVar1);
                        lVar16 = pLVar15->GetCustomBounding();
                        if (lVar16 == 0) {
                            pvVar11 = local_dc._4_8_->SSOBeginPtr(psVar32);
                            this_11 = (NXTPixToolkit*)shared_ptr<graphics::Model>::operator->(
                                (shared_ptr<graphics::Model>*)pvVar11);
                            this_05 = (AABB*)this_11->GetScreen();
                        } else {
                            pLVar15 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)puVar1);
                            this_05 = (AABB*)pLVar15->GetCustomBounding();
                        }
                        cVar4 = this_05->IsValid();
                        if (cVar4 == '\0') {
                            RemoveAABB();
                        } else {
                            SetAABB(this_05);
                        }
                        pLVar15 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)puVar1);
                        bVar7 = pLVar15->HasParticles();
                        ptVar34 = (type*)(ulong)(bVar7 ^ 1);
                        SetNDCProjectionTestEnabled((bool)(bVar7 ^ 1));
                        ClearJobResources(this);
                        bVar5 = field_176->operator_cast_to_bool();
                        if (bVar5) {
                            pWVar27 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)field_176);
                            cVar4 = pWVar27->GetMainSceneDrawn();
                            if (cVar4 == '\0')
                                goto LAB_10042dd33;
                        } else {
                        LAB_10042dd33:
                            BlockFadeIn(this);
                        }
                        cVar3 = m_enableFadeIn;
                        cVar4 = field_237;
                        pvVar11 = local_dc._4_8_->SSOBeginPtr(ptVar34);
                        if ((cVar4 == '\0') && (cVar3 != '\0')) {
                            pMVar12 =
                                (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)pvVar11);
                            uVar30 = 300;
                        } else {
                            pMVar12 =
                                (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)pvVar11);
                            uVar30 = 0;
                        }
                        pMVar12->SetFadeTime(uVar30);
                        if (psVar14 != (shared_ptr*)0)
                            goto LAB_10042d5e9;
                    }
                }
            LAB_10042dd8c:
                uVar29 = 0;
                goto LAB_10042dd8e;
            }
            local_dc._4_8_->Clear();
        } else {
            pvVar11 = local_dc._4_8_->SSOBeginPtr(pcVar31);
            pMVar12 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)pvVar11);
            cVar4 = pMVar12->IsLoaded();
            if ((cVar4 == '\0') || (field_792 != '\0'))
                goto LAB_10042d5ba;
        }
    LAB_10042d5e9:
        uVar29 = CONCAT71((int7)((ulong)puVar28 >> 8), 1);
    LAB_10042dd8e:
        local_d0->~ScopedGPUMemoryZone();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar29 & 4294967295;
    }

    // 0x10042de60, 800 bytes, placed by class name
    // Location::BuildAnimatedModel(graphics::RT7Core&, ConfigProvider&, AssetBuilder&)
    ulong Location::BuildAnimatedModel(RT7Core* param_1, ConfigProvider* param_2, AssetBuilder* param_3) {
        undefined1* this_00;
        char cVar1;
        undefined1 uVar2;
        undefined1 uVar3;
        bool bVar4;
        vector* pvVar5;
        Model* pMVar6;
        undefined8 uVar7;
        undefined* puVar8;
        LocType* pLVar9;
        long lVar10;
        AnimatedModel* pAVar11;
        unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>* puVar12;
        RT7Core* this_01;
        undefined1* unaff_R14;
        ulong uVar13;
        undefined8 in_stack_ffffffffffffff78;
        undefined4 uVar14;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_70[16];
        ConfigProvider* local_60;
        RT7Core* local_58;
        bool local_4c[4];
        unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>* local_48;
        ConfigProvider* local_40;
        function local_31;

        uVar14 = (undefined4)((ulong)in_stack_ffffffffffffff78 >> 32);
        this_01 = param_1;
        cVar1 = NeedsAnimatedModel(this);
        if (cVar1 == '\0') {
            (&field_816, (LocationAnimatedModel*)0)->reset();
            uVar13 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
            goto LAB_10042e14e;
        }
        this_00 = &field_744;
        local_60 = param_2;
        cVar1 = this_00->IsTaskDone();
        local_58 = param_1;
        if (cVar1 == '\0') {
        LAB_10042ded1:
            local_48 = (unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>*)
                           shared_ptr<LocType>::operator->((shared_ptr<LocType>*)field_256);
            uVar2 = field_352->GetShape();
            local_40 = (ConfigProvider*)param_3;
            uVar3 = field_352->GetRot();
            bVar4 = field_404;
            uVar7 = (&field_408)->end();
            param_3 = (AssetBuilder*)local_40;
            this_01 = local_58;
            puVar8 = (undefined*)LocType::GetModels(local_48, local_58, local_40, this_00, uVar2, uVar3,
                                                    CONCAT44(uVar14, (uint)bVar4), uVar7, 8192);
            unaff_R14 = this_00;
            if (puVar8 == DataStatus::NOTLOADED) {
                uVar13 = 0;
                goto LAB_10042e14e;
            }
        } else {
            cVar1 = this_00->IsEmpty();
            if (cVar1 != '\0')
                goto LAB_10042ded1;
            pvVar5 = this_00->SSOBeginPtr(this_01);
            pMVar6 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)pvVar5);
            cVar1 = pMVar6->GetConstructedState();
            if (cVar1 != '\x03')
                goto LAB_10042ded1;
        }
        cVar1 = this_00->IsTaskDone();
        uVar13 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
        if (cVar1 != '\0') {
            pvVar5 = this_00->SSOBeginPtr(this_01);
            pMVar6 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)pvVar5);
            cVar1 = pMVar6->GetConstructedState();
            if (cVar1 == '\x03') {
                puVar12 = (unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>*)&field_816;
                local_40 = (ConfigProvider*)this_00;
                bVar4 = puVar12->operator_cast_to_bool();
                if (!bVar4) {
                    local_48 = puVar12;
                    pvVar5 = local_40->SSOBeginPtr(this_01);
                    pMVar6 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)pvVar5);
                    cVar1 = pMVar6->IsTransformed();
                    if (cVar1 != '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssert("!m_originalModel.GetAsset()->IsTransformed()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "scene/entities/Location.cpp",
                                  1500, (char*)0);
                    }
                    local_4c[0] = true;
                    local_4c[1] = false;
                    local_4c[2] = false;
                    local_4c[3] = false;
                    local_40 = (ConfigProvider*)field_256;
                    pLVar9 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)local_40);
                    local_31 = (function)pLVar9->UseRandomAnimFrame();
                    std::make_unique<LocationAnimatedModel, graphics::RT7Core&, AssetBuilder&, ConfigProvider&,
                                     graphics::AnimationLoopBehaviour, bool,
                                     std::function<void(int, int, int, int, int, int)>&, Location&>(
                        (RT7Core*)local_70, (AssetBuilder*)local_58, (ConfigProvider*)param_3,
                        (AnimationLoopBehaviour*)local_60, local_4c, &local_31, (Location*)&field_128);
                    puVar12 = local_48;
                    std::unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>::operator=(
                        local_48, (unique_ptr*)local_70);
                    local_70->~unique_ptr();
                    this_01 = (RT7Core*)local_70;
                    this_01->shared_from_this();
                    lVar10 =
                        std::unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>::operator->(
                            puVar12);
                    weak_ptr<Entity>::operator=((weak_ptr<Entity>*)(lVar10 + 8), (shared_ptr*)this_01);
                    local_70->~shared_ptr();
                    pLVar9 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)local_40);
                    cVar1 = pLVar9->IsHighDetailOnly();
                    puVar12 = local_48;
                    if (cVar1 == '\0') {
                        BeginPlayingDefaultAnimation(this);
                        if (field_824 == -1) {
                            BeginPlayingOverrideAnimation(this);
                        }
                    }
                }
                if (field_824 != -1) {
                    pAVar11 = (AnimatedModel*)
                                  std::unique_ptr<LocationAnimatedModel,
                                                  std::default_delete<LocationAnimatedModel>>::operator->(puVar12);
                    pAVar11->SetOverrideSourceTicks(field_832, field_836);
                    pAVar11 = (AnimatedModel*)
                                  std::unique_ptr<LocationAnimatedModel,
                                                  std::default_delete<LocationAnimatedModel>>::operator->(puVar12);
                    this_01 = (RT7Core*)0;
                    pAVar11->RequestOverrideAnimation(false, field_824, field_828, false);
                    field_824 = -1;
                    field_832 = 0;
                    field_836 = 0;
                }
                pvVar5 = (&field_680, (type*)this_01)->SSOBeginPtr();
                pMVar6 = (Model*)shared_ptr<graphics::Model>::operator*((shared_ptr<graphics::Model>*)pvVar5);
                UpdateLocalRenderEnv(this, pMVar6);
            }
        }
    LAB_10042e14e:
        return uVar13 & 4294967295;
    }

    // 0x10042e420, 448 bytes, placed by class name
    // Location::BuildVFX(graphics::RT7Core&)
    void Location::BuildVFX(RT7Core* param_1) {
        Location* this_00;
        char cVar1;
        undefined1 uVar2;
        bool bVar3;
        ObjType* this_01;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_02;
        RawData* pRVar4;
        undefined8 uVar5;
        GraphNode* pGVar6;
        undefined8 uVar7;
        Matrix44T* pMVar8;
        shared_ptr* psVar9;
        undefined1 local_d8[72];
        undefined1 local_90[32];
        undefined1 local_70[16];
        RT7Core* local_60;
        shared_ptr<LocType>* local_58;
        RawData* local_50;
        LocData* local_48;
        vector<Location::VFXData, eastl::allocator>* local_40;
        Location* local_38;

        local_40 = (vector<Location::VFXData, eastl::allocator>*)&field_848;
        local_60 = param_1;
        local_38 = this;
        cVar1 = local_40->empty();
        if (cVar1 != '\0') {
            local_58 = (shared_ptr<LocType>*)local_38->field_256;
            this_01 = (ObjType*)shared_ptr<LocType>::operator->(local_58);
            this_02 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                             std::default_delete<LoadingScreenScript::AnimLayer>>,
                             eastl::allocator>*)this_01->GetOffset2D();
            pRVar4 = (RawData*)this_02->data();
            local_50 = (RawData*)this_02->end();
            if (pRVar4 != local_50) {
                local_48 = (LocData*)local_38->field_352;
                do {
                    uVar5 = shared_ptr<LocType>::operator->(local_58);
                    this_00 = local_38;
                    pGVar6 = (GraphNode*)local_38->GetNode();
                    uVar7 = pGVar6->GetWorldTransformationMatrix();
                    uVar2 = local_48->GetRot();
                    LocType::GetLocationWorldMatrix(local_d8, uVar5, uVar7, uVar2);
                    new (local_90) VFXData();
                    pGVar6 = (GraphNode*)this_00->GetNode();
                    pMVar8 = (Matrix44T*)pGVar6->GetWorldTransformationMatrix();
                    make_shared<graphics::VFXAttachmentInfo, graphics::VFXAttachmentInfo::RawData_const&,
                                math::Matrix44T<float>&>((jag*)local_70, pRVar4, pMVar8);
                    shared_ptr<graphics::VFXAttachmentInfo>::operator=(
                        (shared_ptr<graphics::VFXAttachmentInfo>*)(local_90 + 16), (shared_ptr*)local_70);
                    local_70->~shared_ptr();
                    psVar9 = (shared_ptr*)local_60->GetParticleManager();
                    local_70->RegisterSystem(psVar9);
                    shared_ptr<graphics::ModularParticleSystem>::operator=(
                        (shared_ptr<graphics::ModularParticleSystem>*)local_90, (shared_ptr*)local_70);
                    local_70->~shared_ptr();
                    bVar3 = local_90->operator_cast_to_bool();
                    if (bVar3) {
                        eastl::vector<Location::VFXData, eastl::allocator>::push_back(local_40, (VFXData*)local_90);
                    }
                    local_90->~ActiveComponent();
                    pRVar4 = (RawData*)&pRVar4[1].field_8;
                } while (pRVar4 != local_50);
            }
        }
    }

    // 0x10042e5e0, 144 bytes, placed by class name
    // Location::Destruct()
    void Location::Destruct() {
        if (field_468 != 0) {
            UpdateHeightMap(this, 2);
        }
        (&field_848)->clear();
        (&field_680)->Clear();
        (&field_712)->Clear();
        (&field_744)->Clear();
        shared_ptr<LocType>::reset();
        shared_ptr<LocType>::reset();
        ClearAnimationState(this);
        (*(code*)field_8[3])(&field_8);
    }

    // 0x10042e750, 896 bytes, placed by class name
    // Location::MainLogic(graphics::RT7Core&, unsigned int, math::Matrix44T<float> const&)
    void Location::MainLogic(RT7Core* param_1, uint param_2, Matrix44T* param_3) {
        undefined1* puVar1;
        undefined1* this_00;
        bool bVar2;
        char cVar3;
        int iVar4;
        int iVar5;
        uint uVar6;
        uint uVar7;
        LocType* this_01;
        GameToken* pGVar8;
        BuildTerrainMain* this_02;
        Array<VarValue, eastl::allocator>* this_03;
        vector* pvVar9;
        Model* pMVar10;
        GraphicsApp* pGVar11;
        AnimatedModel* pAVar12;
        shared_ptr* this_04;
        ModelUpdateManager* this_05;
        math* this_06;
        math* this_07;
        shared_ptr* this_08;
        undefined1 local_88[72];
        math* local_40;

        puVar1 = m_parentLocationType;
        bVar2 = puVar1->operator_cast_to_bool();
        if (!bVar2) {
            return;
        }
        if (m_hidden != '\0') {
            return;
        }
        this_06 = (math*)field_472;
        this_07 = this_06;
        (&field_272, (shared_ptr*)this_06, (shared_ptr*)puVar1, m_pPlayerVarDomain, field_216)->GetMultiLoc();
        this_01 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)puVar1);
        cVar3 = this_01->IsMultiLoc();
        if (cVar3 != '\0') {
            bVar2 = this_06->operator_cast_to_bool();
            if (bVar2) {
                iVar5 = field_488;
                pGVar8 = (GameToken*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_06);
                iVar4 = pGVar8->GetStatus();
                if (iVar5 == iVar4) {
                    cVar3 = (&field_680)->IsEmpty();
                    if (cVar3 == '\0')
                        goto LAB_10042e8b6;
                    this_02 = (BuildTerrainMain*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_06);
                    this_03 = (Array<VarValue, eastl::allocator>*)this_02->GetRequestData();
                    cVar3 = this_03->empty();
                    if (cVar3 != '\0')
                        goto LAB_10042e8b6;
                } else {
                    (&field_680)->Clear();
                    ClearJobResources(this);
                }
                field_792 = '\x01';
                this_07 = this_06;
                shared_ptr<LocType>::operator=((shared_ptr<LocType>*)field_256, (shared_ptr*)this_06);
                pGVar8 = (GameToken*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_06);
                iVar5 = pGVar8->GetStatus();
                field_488 = iVar5;
                (*(code*)field_0[6])(this);
                BlockFadeIn(this);
                (&field_848)->clear();
            } else {
                (*(code*)field_0[25])(this);
                shared_ptr<LocType>::operator=((shared_ptr<LocType>*)field_256, (shared_ptr*)this_06);
                field_488 = -1;
                BlockFadeIn(this);
                this_07 = this_06;
            }
        }
    LAB_10042e8b6:
        cVar3 = field_592;
        if (cVar3 != '\0') {
            this_07 = (math*)local_88;
            math::operator*(this_07, param_3, (Matrix44T*)&field_528);
            math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_608, (Matrix44T*)this_07);
        }
        uVar7 = param_2;
        field_672 = cVar3 != '\0';
        local_40 = (math*)&field_608;
        if (cVar3 == '\0') {
            local_40 = (math*)param_3;
        }
        puVar1 = &field_680;
        cVar3 = puVar1->IsTaskDone();
        if ((cVar3 != '\0') && (cVar3 = puVar1->IsEmpty(), cVar3 == '\0')) {
            pvVar9 = puVar1->SSOBeginPtr(this_07);
            pMVar10 = (Model*)shared_ptr<graphics::Model>::operator*((shared_ptr<graphics::Model>*)pvVar9);
            pGVar11 = (GraphicsApp*)this;
            UpdateLocalRenderEnv(this, pMVar10);
            pGVar11 = (GraphicsApp*)pGVar11->Instance();
            uVar6 = pGVar11->GetLogicTick();
            this_07 = (math*)(ulong)uVar6;
            UpdateHighlighting(this, uVar6);
        }
        this_00 = &field_816;
        bVar2 = this_00->operator_cast_to_bool();
        if (bVar2) {
            uVar7 = GetOverrideAnimationToPlay(this);
            uVar6 = GetDefaultAnimationToPlay(this);
            pAVar12 =
                (AnimatedModel*)
                    std::unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>::operator->(
                        (unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>*)this_00);
            cVar3 = pAVar12->IsDefaultAnimationInUse();
            if ((cVar3 == '\0') && (uVar6 != 4294967295)) {
                pAVar12 =
                    (AnimatedModel*)
                        std::unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>::operator->(
                            (unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>*)this_00);
                this_07 = (math*)(ulong)uVar6;
                pAVar12->RequestDefaultAnimation(uVar6, false, false);
            }
            pAVar12 =
                (AnimatedModel*)
                    std::unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>::operator->(
                        (unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>*)this_00);
            cVar3 = pAVar12->IsOverrideAnimationInUse();
            if (((cVar3 == '\0') && (uVar7 != 4294967295)) && (uVar7 != uVar6)) {
                pAVar12 =
                    (AnimatedModel*)
                        std::unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>::operator->(
                            (unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>*)this_00);
                this_07 = (math*)0;
                pAVar12->RequestOverrideAnimation(false, uVar7, 0, false);
            }
            pGVar11 =
                (GraphicsApp*)
                    std::unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>::operator->(
                        (unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>*)this_00);
            cVar3 = pGVar11->InUse();
            if (((cVar3 == '\0') && (pGVar11 = (GraphicsApp*)puVar1, cVar3 = puVar1->IsTaskDone(), cVar3 != '\0')) &&
                (pGVar11 = (GraphicsApp*)puVar1, cVar3 = puVar1->IsEmpty(), cVar3 == '\0')) {
                pvVar9 = puVar1->SSOBeginPtr(this_07);
                pGVar11 = (GraphicsApp*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)pvVar9);
                pGVar11->ClearAnimationState();
            }
            pGVar11 = (GraphicsApp*)pGVar11->Instance();
            uVar6 = pGVar11->GetFrameCount();
            pAVar12 =
                (AnimatedModel*)
                    std::unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>::operator->(
                        (unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>*)this_00);
            uVar7 = param_2;
            pAVar12->Build(uVar6, param_2, false, 0);
            pAVar12 =
                (AnimatedModel*)
                    std::unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>::operator->(
                        (unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>*)this_00);
            this_07 = local_40;
            pAVar12->UpdateParticles(local_40, uVar6);
        }
        this_04 = (shared_ptr*)puVar1->SSOBeginPtr(this_07);
        this_08 = this_04;
        bVar2 = shared_ptr::operator_cast_to_bool(this_04);
        if (bVar2) {
            this_05 = (ModelUpdateManager*)this_08->Instance();
            this_05->AddToUpdateList(this_04);
        }
        (*(code*)field_0[49])(this);
        uVar7 = TicksSinceLastCall(uVar7);
        UpdateRandomSounds(this, uVar7);
    }

    // 0x10042eb20, 176 bytes, placed by class name
    // Location::UpdateLocalRenderEnv(graphics::Model&)
    void Location::UpdateLocalRenderEnv(Model* param_1) {
        shared_ptr<World>* this_00;
        World* this_01;
        IrradianceEffect* this_02;
        bool bVar1;
        int iVar2;
        int iVar3;
        shared_ptr* this_03;
        undefined1 local_98[112];

        bVar1 = m_parentLocationType->operator_cast_to_bool();
        if (bVar1) {
            this_00 = (shared_ptr<World>*)GetWorld();
            this_01 = (World*)shared_ptr<World>::operator->(this_00);
            iVar2 = (&field_424)->GetMapSquareX();
            iVar3 = (&field_424)->GetMapSquareZ();
            this_03 = (shared_ptr*)this_01->GetMapSquare(iVar2, iVar3);
            bVar1 = operator!=(this_03, (_func_decltype_nullptr*)0);
            if (bVar1) {
                this_02 = (IrradianceEffect*)param_1->GetIrradianceEffect();
                shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_03);
                local_98->GetIrradianceSHConsts();
                this_02->SetCoefficients(local_98);
            }
        }
    }

    // 0x10042ebd0, 496 bytes, placed by class name
    // Location::UpdateHighlighting(unsigned int)
    void Location::UpdateHighlighting(uint param_1) {
        bool bVar1;
        char cVar2;
        byte bVar3;
        int iVar4;
        AnimatedModel* this_00;
        shared_ptr* this_01;
        shared_ptr* this_02;
        shared_ptr<World>* this_03;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_04;
        SceneManager* this_05;
        EntityHighlightGlobalState* this_06;
        Model* this_07;
        LocType* this_08;
        EntityHighlightVisualConfig* this_09;
        undefined4 in_register_00000034;
        type* ptVar5;
        float fVar6;
        float local_5c;
        float local_58[4];
        Vector4T local_48[16];
        long local_38;

        ptVar5 = (type*)CONCAT44(in_register_00000034, param_1);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        bVar1 = (&field_816)->operator_cast_to_bool();
        if (bVar1) {
            this_00 =
                (AnimatedModel*)
                    std::unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>::operator->(
                        (unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>*)&field_816);
            this_01 = (shared_ptr*)this_00->GetCurrentModel();
        } else {
            this_01 = (shared_ptr*)(&field_680, ptVar5)->SSOBeginPtr();
        }
        this_02 = (shared_ptr*)GetWorld();
        bVar1 = shared_ptr::operator_cast_to_bool(this_02);
        if ((!bVar1) || (bVar1 = shared_ptr::operator_cast_to_bool(this_01), !bVar1))
            goto LAB_10042ecb9;
        this_03 = (shared_ptr<World>*)GetWorld();
        this_04 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)shared_ptr<World>::operator->(this_03);
        this_05 = (SceneManager*)
            eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::size(this_04);
        this_06 = (EntityHighlightGlobalState*)this_05->GetEntityHighlightGlobalState();
        cVar2 = this_06->IsEnabled();
        if (cVar2 == '\0') {
        LAB_10042eca9:
            this_07 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_01);
        } else {
            iVar4 = GetHighlightType(this);
            if (iVar4 == 8) {
                bVar3 = field_796->WasInteractedWithRecently();
                iVar4 = (uint)(bVar3 ^ 1) * 3 + 5;
            }
            if (iVar4 == 8)
                goto LAB_10042eca9;
            local_5c = 1.0;
            if ((EntityHighlightGlobalState::m_allowExamineOnlyHighlights == '\0') && (field_796[16] == '\0')) {
                bVar1 = field_256->operator_cast_to_bool();
                if (bVar1) {
                    this_08 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)field_256);
                    cVar2 = this_08->IsExamineOnly();
                    local_5c = 0.0;
                    if (cVar2 == '\0') {
                        local_5c = 1.0;
                    }
                }
            }
            this_09 = (EntityHighlightVisualConfig*)EntityHighlightVisualConfig::GetDefault(iVar4);
            if (this_09->field_0 == 2) {
                new (field_796, param_1) oldscape::ServerConnectionWorkItem();
            }
            fVar6 = (float)FrameTime::GetFrameDelta();
            (field_796, this_06, fVar6, param_1)->Update();
            new (local_58) EntityHighlightVisualData();
            cVar2 = this_09->Evaluate((EntityHighlightState*)field_796, this_06, (EntityHighlightVisualData*)local_58,
                                      local_5c);
            this_07 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_01);
            if (cVar2 != '\0') {
                this_07->SetHighlight(local_58[0], local_48);
                goto LAB_10042ecb9;
            }
        }
        this_07->ClearHighlight();
    LAB_10042ecb9:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10042eec0, 864 bytes, placed by class name
    // Location::GatherDrawableElements(graphics::DrawableQueue&, graphics::RT7Core&, math::Matrix44T<float> const&, graphics::SceneViewData const&, graphics::EffectManager const&)
    void Location::GatherDrawableElements(DrawableQueue* param_1, RT7Core* param_2, Matrix44T* param_3,
                                          SceneViewData* param_4, EffectManager* param_5) {
        char cVar3;
        bool bVar4;
        undefined1 uVar5;
        int iVar6;
        int iVar7;
        uint uVar8;
        AnimatedModel* pAVar9;
        shared_ptr* psVar10;
        LocType* pLVar11;
        GraphicsApp* pGVar12;
        Model* pMVar13;
        long lVar14;
        shared_ptr<graphics::ModularParticleSystem>* this_00;
        undefined8 uVar15;
        GraphNode* this_01;
        undefined8 uVar16;
        VFXAttachmentInfo* this_02;
        ObjType* this_03;
        Array<graphics::VFXAttachmentInfo::RawData, eastl::allocator>* this_04;
        RawData* pRVar17;
        ModularParticleSystem* this_05;
        long* plVar18;
        ulong uVar19;
        Matrix44T* this_06;
        SceneViewData* pSVar20;
        undefined1* puVar21;
        ulong uVar22;
        Matrix44T local_b8;
        Location* local_70;
        SceneViewData* local_68;
        AnimatedModel* local_48;
        LocData* local_40;
        Matrix44T* local_38;

        local_38 = param_3;
        cVar3 = (*(code*)field_0[35])();
        if (cVar3 == '\0') {
            return;
        }
        cVar3 = FilterRenderPasses(this, param_4);
        if (cVar3 == '\0') {
            return;
        }
        pSVar20 = param_4;
        cVar3 = IsLocationRoofRemoved(this, param_4);
        if (cVar3 != '\0') {
            return;
        }
        if (m_ShowLocations == '\0')
            goto LAB_10042f1fc;
        puVar21 = &field_816;
        bVar4 = puVar21->operator_cast_to_bool();
        local_70 = this;
        local_68 = param_4;
        if (bVar4) {
            pAVar9 = (AnimatedModel*)
                         std::unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>::operator->(
                             (unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>*)puVar21);
            psVar10 = (shared_ptr*)pAVar9->GetCurrentModel();
            bVar4 = shared_ptr::operator_cast_to_bool(psVar10);
            if (!bVar4)
                goto LAB_10042f03e;
            local_48 =
                (AnimatedModel*)
                    std::unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>::operator->(
                        (unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>*)puVar21);
            local_40 = (LocData*)GetWorldPosition();
            pLVar11 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)m_parentLocationType);
            uVar5 = field_352->GetRot();
            iVar6 = pLVar11->GetGridWidth(uVar5);
            pLVar11 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)m_parentLocationType);
            uVar5 = field_352->GetRot();
            param_4 = local_68;
            iVar7 = pLVar11->GetGridLength(uVar5);
            local_48->SetPointLightBounds(local_40, iVar6, iVar7);
            pGVar12 = (GraphicsApp*)puVar21;
            pAVar9 = (AnimatedModel*)
                         std::unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>::operator->(
                             (unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>*)puVar21);
            pGVar12 = (GraphicsApp*)pGVar12->Instance();
            uVar8 = pGVar12->GetFrameCount();
            pAVar9->SetWorldTransform(local_38, uVar8);
            pAVar9 = (AnimatedModel*)
                         std::unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>::operator->(
                             (unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>*)puVar21);
            pAVar9->GatherDrawableElements(param_1, param_2, param_4, param_5);
        } else {
        LAB_10042f03e:
            cVar3 = (&field_680)->IsTaskDone();
            if (cVar3 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("m_model.IsTaskDone()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "entities/Location.cpp",
                          897, (char*)0);
            }
            psVar10 = (shared_ptr*)(&field_680, (type*)pSVar20)->SSOBeginPtr();
            pMVar13 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)psVar10);
            cVar3 = pMVar13->IsLoaded();
            if (cVar3 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("model->IsLoaded()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "entities/Location.cpp",
                          899, (char*)0);
            }
            pMVar13 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)psVar10);
            pMVar13->SetWorldTransform(local_38);
            pMVar13 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)psVar10);
            pMVar13->GatherDrawableElements(param_1, param_2, param_4, param_5);
            graphics::Model::DeferredRenderKeepAlive(psVar10);
        }
        this = local_70;
        this_06 = (Matrix44T*)&local_70->field_848;
        lVar14 = this_06->size();
        if (lVar14 != 0) {
            puVar21 = field_256;
            local_40 = (LocData*)field_352;
            uVar22 = 0;
            local_48 = (AnimatedModel*)puVar21;
            local_38 = this_06;
            do {
                this_00 = (shared_ptr<graphics::ModularParticleSystem>*)
                    eastl::vector<Location::VFXData, eastl::allocator>::operator[](
                        (vector<Location::VFXData, eastl::allocator>*)this_06, uVar22);
                uVar15 = shared_ptr<LocType>::operator->((shared_ptr<LocType>*)puVar21);
                this_01 = (GraphNode*)GetNode();
                uVar16 = this_01->GetWorldTransformationMatrix();
                uVar5 = local_40->GetRot();
                this = local_70;
                LocType::GetLocationWorldMatrix(&local_b8, uVar15, uVar16, uVar5);
                this_02 = (VFXAttachmentInfo*)shared_ptr<graphics::VFXAttachmentInfo>::operator->(
                    (shared_ptr<graphics::VFXAttachmentInfo>*)(this_00 + 16));
                this_03 = (ObjType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)puVar21);
                this_04 = (Array<graphics::VFXAttachmentInfo::RawData, eastl::allocator>*)this_03->GetOffset2D();
                pRVar17 = (RawData*)Array<graphics::VFXAttachmentInfo::RawData, eastl::allocator>::operator[](this_04,
                                                                                                              uVar22);
                this_02->Update(pRVar17, &local_b8);
                param_4 = local_68;
                this_05 = (ModularParticleSystem*)shared_ptr<graphics::ModularParticleSystem>::operator->(this_00);
                plVar18 = (long*)this_05->GetDrawable();
                (**(code**)(*plVar18 + 16))(plVar18, param_1, param_2, param_4, param_5);
                this_06 = local_38;
                uVar22 = uVar22 + 1;
                uVar19 = local_38->size();
            } while (uVar22 < uVar19);
        }
    LAB_10042f1fc:
        DebugPrimitiveOutput(this, param_4);
    }

    // 0x10042f220, 144 bytes, placed by class name
    // Location::FilterRenderPasses(graphics::SceneViewData const&) const
    undefined8 Location::FilterRenderPasses(SceneViewData* param_1) {
        char cVar1;
        undefined1 uVar2;
        LocType* pLVar3;

        cVar1 = param_1->HasRenderPass(2);
        if ((cVar1 != '\0') && ((field_405 != false || (cVar1 = field_352->GetShape(), cVar1 == '\x16')))) {
            return 0;
        }
        cVar1 = param_1->HasShadowPass();
        if (cVar1 != '\0') {
            pLVar3 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)field_256);
            uVar2 = field_352->GetShape();
            cVar1 = pLVar3->CastsShadows(uVar2);
            if (cVar1 == '\0') {
                return 0;
            }
            cVar1 = field_352->GetShape();
            if (cVar1 == '\x16') {
                return 0;
            }
        }
        return 1;
    }

    // 0x10042f2b0, 160 bytes, placed by class name
    // Location::IsLocationRoofRemoved(graphics::SceneViewData const&)
    undefined8 Location::IsLocationRoofRemoved(SceneViewData* param_1) {
        char cVar1;
        shared_ptr<World>* this_00;
        World* this_01;
        RemoveRoof* this_02;
        undefined8 uVar2;

        cVar1 = param_1->HasRenderPass(4);
        if ((cVar1 == '\0') && (cVar1 = param_1->HasRenderPass(8), cVar1 == '\0')) {
            uVar2 = 0;
        } else {
            this_00 = (shared_ptr<World>*)GetWorld();
            this_01 = (World*)shared_ptr<World>::operator*(this_00);
            this_02 = (RemoveRoof*)this_01->GetRemoveRoof();
            cVar1 = this_02->AnyRoofRemoved();
            if ((cVar1 == '\0') || (cVar1 = this_01->IsRemoveRoofSelective(), cVar1 == '\0')) {
                uVar2 = IsLocationRoofRemovedNonSelective(this, param_1, this_01);
            } else {
                uVar2 = IsLocationRoofRemovedSelective(this, this_02, this_01);
            }
        }
        return uVar2;
    }

    // 0x10042f4c0, 2160 bytes, placed by class name
    // Location::DebugPrimitiveOutput(graphics::SceneViewData const&) const
    void Location::DebugPrimitiveOutput(SceneViewData* param_1) {
        undefined1* this_00;
        char cVar1;
        undefined1 uVar2;
        bool bVar3;
        uint uVar4;
        uint uVar5;
        long* plVar6;
        GraphNode* pGVar7;
        undefined8 uVar8;
        CoordGrid* this_01;
        LocType* pLVar9;
        GameToken* pGVar10;
        GeometryBatch* pGVar11;
        char* pcVar12;
        float fVar13;
        undefined1 local_300[24];
        uint local_2e8;
        uint local_2e4;
        uint local_2e0;
        uint local_2dc;
        shared_ptr* local_2d8;
        uint local_2d0;
        uint local_2cc;
        fixed_string<char, 64, true, eastl::allocator> local_2c8[104];
        SideBarData local_260[46];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (((m_debugPrimitiveAABBOnHighlight != '\0') && (fVar13 = (float)field_796->GetAlpha(), 0.0 < fVar13)) &&
            (plVar6 = (long*)DebugPrimitiveCollectorBasic::GetCollector(""), plVar6 != (long*)0)) {
            pGVar7 = (GraphNode*)GetNode();
            uVar8 = pGVar7->GetWorldAABB();
            oldscape::sidebars::SideBarData::SideBarData(local_260, 301989887, 2);
            (**(code**)(*plVar6 + 72))(plVar6, uVar8, local_260);
        }
        if (((m_debugPrimitiveText == '\0') &&
             ((m_debugPrimitiveTextOnMouseover == '\0' || (cVar1 = PickTestDebugCursor(), cVar1 == '\0')))) ||
            (cVar1 = param_1->HasRenderPass(4), cVar1 == '\0')) {
            if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                /* WARNING: Subroutine does not return */
                ___stack_chk_fail();
            }
            return;
        }
        this_01 = (CoordGrid*)GetServerPosition(this);
        uVar4 = this_01->GetLocalX();
        uVar5 = this_01->GetLocalZ();
        new (local_260) eastl::fixed_string<char, 512, true, eastl::allocator>();
        pGVar7 = (GraphNode*)GetNode();
        local_300._16_8_ = pGVar7->GetWorldTranslation();
        this_00 = m_parentLocationType;
        pLVar9 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
        uVar2 = pLVar9->IsMultiLoc();
        local_2cc = CONCAT31(local_2cc._1_3_, uVar2);
        pLVar9 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
        pLVar9->GetMultiLocValue((int*)&local_2d0, (int*)&local_2e8, (int*)&local_2e4, (int*)&local_2e0,
                                 m_pPlayerVarDomain, field_216);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)local_260, "[LOC] [%d,%d,%d] ", (ulong)this_01->field_0, (ulong)uVar4, (ulong)uVar5);
        local_2dc = uVar5;
        uVar5 = GetHeightMapLevel();
        if (uVar5 != this_01->field_0) {
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                append_sprintf((char*)local_260, "(lvl %d) ", (ulong)uVar5);
        }
        bVar3 = field_472->operator_cast_to_bool();
        local_2d8 = (shared_ptr*)field_472;
        if (!bVar3) {
            local_2d8 = (shared_ptr*)this_00;
        }
        bVar3 = shared_ptr::operator_cast_to_bool(local_2d8);
        if (bVar3) {
            pGVar10 = (GameToken*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)local_2d8);
            uVar4 = pGVar10->GetStatus();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                append_sprintf((char*)local_260, "%d", (ulong)uVar4);
            pGVar11 = (GeometryBatch*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)local_2d8);
            pGVar11->GetVertexDataBufferPos();
            pcVar12 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            if ((pcVar12 != (char*)0) && (*pcVar12 != '\0')) {
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                    append_sprintf((char*)local_260, "(%s)", pcVar12);
            }
            if ((char)local_2cc != '\0') {
                if (local_2e0 == 4294967295) {
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                        append_sprintf((char*)local_260, "\nMulti Var %d=%d", (ulong)local_2e8, (ulong)local_2d0);
                } else {
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                        append_sprintf((char*)local_260, "\nMulti Varbit %d[in %d]=%d)", (ulong)local_2e4,
                                       (ulong)local_2e0, (ulong)local_2d0);
                }
            }
            bVar3 = operator!=((shared_ptr*)this_00, local_2d8);
            if (bVar3) {
                pGVar10 = (GameToken*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
                uVar4 = pGVar10->GetStatus();
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                    append_sprintf((char*)local_260, "\nParentType=%d", (ulong)uVar4);
                pGVar11 = (GeometryBatch*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
                pGVar11->GetVertexDataBufferPos();
                cVar1 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                if (cVar1 == '\0') {
                    pGVar11 = (GeometryBatch*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
                    pGVar11->GetVertexDataBufferPos();
                    uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                        append_sprintf((char*)local_260, "(%s)", uVar8);
                }
            }
        } else {
            uVar5 = this_01->field_0;
            local_2cc = uVar4;
            pGVar10 = (GameToken*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)field_256);
            uVar4 = pGVar10->GetStatus();
            pGVar11 = (GeometryBatch*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)field_256);
            pGVar11->GetVertexDataBufferPos();
            uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)local_260, "[%d,%d,%d] %d, [%s]", (ulong)uVar5, (ulong)local_2cc, (ulong)local_2dc,
                        (ulong)uVar4, uVar8);
        }
        new (local_300) CoordFine(this_01->field_0, (Vector3T*)local_300._16_8_);
        eastl::fixed_string<char, 64, true, eastl::allocator>::fixed_string(local_2c8);
        pcVar12 = CoordFine::ToString<64, true>((CoordFine*)local_300, (fixed_string*)local_2c8);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
            append_sprintf((char*)local_260, "\nNode Position:%s", pcVar12);
        /* WARNING: Subroutine does not return */
        local_2c8->~fixed_string();
    }

    // 0x10042ffd0, 1184 bytes, placed by class name
    // Location::AddPickableEntity(World&, math::Matrix44T<float> const&)
    void Location::AddPickableEntity(World* param_1, Matrix44T* param_2) {
        undefined1* this_00;
        char cVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        uint uVar5;
        LocType* this_01;
        SceneManager* pSVar6;
        Minimap* this_02;
        GraphNode* pGVar7;
        AABB* pAVar8;
        shared_ptr<World>* this_03;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_04;
        CoordMapSquare* pCVar9;
        CoordMapSquare* this_05;
        vector* pvVar10;
        float* pfVar11;
        long* plVar12;
        GameToken* this_06;
        char* pcVar13;
        Matrix44T* pMVar14;
        shared_ptr local_1c8[2];
        Vector2T<int> local_1a8[8];
        undefined8 local_1a0[2];
        allocator local_190[8];
        SideBarData local_188;
        int local_17c;
        Matrix44T* local_178;
        World* local_170;
        Matrix44T* local_168;
        shared_ptr local_160[18];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar1 = (*(code*)field_0[35])();
        if (cVar1 != '\0') {
            bVar2 = field_472->operator_cast_to_bool();
            if (bVar2) {
                this_01 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)field_472);
                cVar1 = this_01->IsActive();
                if (cVar1 != '\0') {
                    pSVar6 = (SceneManager*)param_1->size();
                    this_02 = (Minimap*)pSVar6->GetGameSceneRect();
                    local_168 = (Matrix44T*)&field_76;
                    local_170 = (World*)param_1->GetLastCameraProjectionMatrix();
                    local_178 = (Matrix44T*)param_1->GetLastViewProjectionMatrix();
                    iVar3 = this_02->GetPos();
                    iVar4 = this_02->GetLevel();
                    pGVar7 = (GraphNode*)GetNode();
                    pAVar8 = (AABB*)pGVar7->GetWorldAABB();
                    local_168->FillFromAABB(local_170, local_178, iVar3, iVar4, pAVar8);
                    this_00 = &field_100;
                    local_168 = (Matrix44T*)param_1->GetLastCameraViewMatrix();
                    local_170 = (World*)param_1->GetLastCameraProjectionMatrix();
                    local_178 = (Matrix44T*)param_1->GetLastViewProjectionMatrix();
                    local_17c = this_02->GetPos();
                    iVar3 = this_02->GetLevel();
                    pGVar7 = (GraphNode*)GetNode();
                    pAVar8 = (AABB*)pGVar7->GetWorldAABB();
                    pMVar14 = local_168;
                    cVar1 = this_00->Set(local_168, local_170, local_178, local_17c, iVar3, pAVar8);
                    if (cVar1 != '\0') {
                        if (World::m_debugPicking != '\0') {
                            local_170 = param_1;
                            math::Vector2T<int>::Vector2T(local_1a8);
                            this_03 = (shared_ptr<World>*)GetWorld();
                            this_04 =
                                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                           eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                           eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                           eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                                    shared_ptr<World>::operator->(this_03);
                            pSVar6 = (SceneManager*)eastl::hashtable<
                                long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                true>::size(this_04);
                            pCVar9 = (CoordMapSquare*)pSVar6->GetGameSceneRect();
                            iVar3 = pCVar9->GetX();
                            local_168._0_4_ = (float)iVar3;
                            this_05 = (CoordMapSquare*)this_00->SSOBeginPtr(pMVar14);
                            iVar3 = this_05->GetX();
                            local_168._0_4_ = (float)iVar3 + local_168._0_4_;
                            pvVar10 = local_1a8->SSOBeginPtr(pMVar14);
                            *(float*)pvVar10 = local_168._0_4_;
                            iVar3 = pCVar9->GetZ();
                            local_168._0_4_ = (float)iVar3;
                            pCVar9 = (CoordMapSquare*)this_00->SSOBeginPtr(pMVar14);
                            iVar3 = pCVar9->GetZ();
                            local_168._0_4_ = (float)iVar3 + local_168._0_4_;
                            pfVar11 = (float*)local_1a8->y();
                            *pfVar11 = local_168._0_4_;
                            iVar3 = this_00->GetPos();
                            plVar12 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                            if (plVar12 != (long*)0) {
                                local_168._0_4_ = (float)iVar3;
                                new (local_160) oldscape::sidebars::SideBarData(1073741952, 0);
                                (**(code**)(*plVar12 + 160))(local_168._0_4_, plVar12, local_1a8, 1, local_160);
                            }
                            new (local_160) eastl::fixed_string<char, 256, true, eastl::allocator>();
                            this_06 = (GameToken*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)field_256);
                            uVar5 = this_06->GetStatus();
                            eastl::basic_string<
                                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                                sprintf((char*)local_160, "Pick[Location ID:%d]", (ulong)uVar5);
                            plVar12 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                            if (plVar12 != (long*)0) {
                                pGVar7 = (GraphNode*)GetNode();
                                pAVar8 = (AABB*)pGVar7->GetWorldAABB();
                                local_1a0[0] = pAVar8->GetCentrePos();
                                pcVar13 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                eastl::allocator::allocator(local_190, "EASTL basic_string");
                                new (local_1c8) eastl::string(pcVar13, local_190);
                                new (&local_188) oldscape::sidebars::SideBarData(-2147418368, 0);
                                (**(code**)(*plVar12 + 136))(plVar12, local_1a0, local_1c8, &local_188);
                                local_1c8->~basic_string();
                            }
                            /* WARNING: Subroutine does not return */
                            local_160->~fixed_string();
                        }
                        local_1c8->shared_from_this();
                        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<
                            oldscape::FileRSevenDebugPresetProvider, void>(
                            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)local_160, local_1c8);
                        param_1->AddPickableEntity(local_160);
                        local_160->~shared_ptr();
                        local_1c8->~shared_ptr();
                    }
                }
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1004304e0, 304 bytes, placed by class name
    // Location::CanRender() const
    undefined8 Location::CanRender() {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        char extraout_AL;
        char extraout_AL_00;
        uint uVar4;
        uint uVar5;
        vector* pvVar6;
        Model* pMVar7;
        LocType* this_01;
        undefined7 extraout_var;
        undefined7 extraout_var_00;
        AnimatedModel* this_02;
        GraphicsApp* pGVar8;
        undefined7 extraout_var_01;
        undefined7 uVar9;
        type* in_RSI;

        bVar1 = m_parentLocationType->operator_cast_to_bool();
        if ((bVar1) && (m_hidden == '\0')) {
            bVar1 = field_256->operator_cast_to_bool();
            if (bVar1) {
                this_00 = &field_680;
                cVar2 = this_00->IsTaskDone();
                if (cVar2 != '\0') {
                    pvVar6 = this_00->SSOBeginPtr(in_RSI);
                    pMVar7 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)pvVar6);
                    cVar2 = pMVar7->IsReadyToRender();
                    if (cVar2 != '\0') {
                        pGVar8 = (GraphicsApp*)&field_816;
                        bVar1 = pGVar8->operator_cast_to_bool();
                        if (!bVar1) {
                            pvVar6 = this_00->SSOBeginPtr(in_RSI);
                            pMVar7 =
                                (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)pvVar6);
                            if (pMVar7->GetTotalBatchCount() == 0) {
                                return 0;
                            }
                        }
                        this_01 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)field_256);
                        cVar2 = this_01->IsRuneTek5Only();
                        if (cVar2 == '\0') {
                            bVar1 = field_496->operator_cast_to_bool();
                            uVar9 = extraout_var;
                            if ((!bVar1) || (NeedsAnimatedModel(this), uVar9 = extraout_var_00, extraout_AL == '\0')) {
                            LAB_1004305fe:
                                return CONCAT71(uVar9, 1);
                            }
                            bVar1 = pGVar8->operator_cast_to_bool();
                            if (bVar1) {
                                this_02 =
                                    (AnimatedModel*)std::unique_ptr<LocationAnimatedModel,
                                                                    std::default_delete<LocationAnimatedModel>>::
                                    operator->(
                                        (unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>*)
                                            pGVar8);
                                pGVar8 = (GraphicsApp*)pGVar8->Instance();
                                uVar4 = pGVar8->GetFrameCount();
                                pGVar8 = (GraphicsApp*)pGVar8->Instance();
                                uVar5 = pGVar8->GetLogicTick();
                                this_02->IsReady(uVar4, uVar5);
                                uVar9 = extraout_var_01;
                                if (extraout_AL_00 != '\0')
                                    goto LAB_1004305fe;
                            }
                        }
                    }
                }
            }
        }
        return 0;
    }

    // 0x1004306c0, 544 bytes, placed by class name
    // Location::IsLocationRoofRemovedSelective(RemoveRoof&, World const&)
    /* WARNING: Removing unreachable block (ram,4299360471) */
    /* Location::IsLocationRoofRemovedSelective(RemoveRoof&, World
   const&) */

    undefined4 Location::IsLocationRoofRemovedSelective(RemoveRoof* param_1, World* param_2) {
        undefined1* this_00;
        undefined1* this_01;
        char cVar1;
        undefined1 uVar2;
        undefined4 uVar3;
        uint uVar4;
        int iVar5;
        int iVar6;
        undefined8 uVar7;
        LinkMap* this_02;
        ulong uVar8;
        LocType* pLVar9;
        int iVar10;
        uint uVar11;
        bool bVar12;

        uVar7 = param_1->IsRoofRemoved(field_68, field_428, field_432);
        uVar3 = (undefined4)CONCAT71((int7)((ulong)uVar7 >> 8), 1);
        bVar12 = true;
        if ((byte)uVar7 != 0) {
            this_02 = (LinkMap*)param_2->GetLinkMap();
            uVar8 = this_02->GetTileLinkZero((CoordGrid*)&field_424);
            bVar12 = (uVar8 & 8) == 0;
        }
        if ((bVar12 & (byte)uVar7) != 0) {
            return uVar3;
        }
        this_00 = field_352;
        cVar1 = this_00->GetShape();
        if ((cVar1 == '\n') || (cVar1 = this_00->GetShape(), cVar1 == '\v')) {
            this_01 = field_256;
            pLVar9 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_01);
            uVar2 = this_00->GetRot();
            uVar4 = pLVar9->GetGridWidth(uVar2);
            if (uVar4 < 2) {
                pLVar9 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_01);
                uVar2 = this_00->GetRot();
                uVar4 = pLVar9->GetGridLength(uVar2);
                if (uVar4 < 2) {
                    return 0;
                }
                if (bVar12 != true) {
                    return 0;
                }
            } else if (bVar12 == false) {
                return 0;
            }
            pLVar9 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_01);
            uVar2 = this_00->GetRot();
            iVar5 = pLVar9->GetGridWidth(uVar2);
            pLVar9 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_01);
            uVar2 = this_00->GetRot();
            iVar6 = pLVar9->GetGridLength(uVar2);
            uVar4 = field_428;
            if (uVar4 < uVar4 + iVar5) {
                do {
                    uVar11 = field_432;
                    iVar10 = 5;
                    bVar12 = uVar11 < uVar11 + iVar6;
                    if (bVar12) {
                        cVar1 = param_1->IsRoofRemoved(field_68, uVar4, uVar11);
                        while (cVar1 == '\0') {
                            uVar11 = uVar11 + 1;
                            bVar12 = uVar11 < field_432 + iVar6;
                            if (!bVar12) {
                                iVar10 = 5;
                                if (!bVar12)
                                    goto LAB_100430886;
                                goto LAB_1004308af;
                            }
                            cVar1 = param_1->IsRoofRemoved(field_68, uVar4, uVar11);
                        }
                        iVar10 = 1;
                    }
                    if (bVar12)
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

    // 0x1004308e0, 512 bytes, placed by class name
    // Location::IsLocationRoofRemovedNonSelective(graphics::SceneViewData const&, World&)
    undefined4 Location::IsLocationRoofRemovedNonSelective(SceneViewData* param_1, World* param_2) {
        undefined1* this_00;
        undefined1* this_01;
        int iVar1;
        char cVar2;
        undefined1 uVar3;
        int iVar4;
        int iVar5;
        uint uVar6;
        uint uVar7;
        undefined4 uVar8;
        Minimap* this_02;
        LinkMap* this_03;
        LocType* pLVar9;
        uint uVar10;
        uint local_34;

        cVar2 = param_1->HasRenderPass(5);
        if (cVar2 == '\0') {
            cVar2 = param_1->HasShadowPass();
            iVar4 = 4;
            if ((cVar2 == '\0') && (cVar2 = param_1->HasRenderPass(2), cVar2 == '\0')) {
                iVar4 = param_2->GetMaxRenderLevel();
            }
        } else {
            this_02 = (Minimap*)param_1->GetRenderPass(5);
            iVar4 = this_02->GetLevel();
        }
        iVar1 = field_68;
        iVar5 = GetWrapMode();
        cVar2 = LinkConstants::IsAffectedByMaxRenderLevel(iVar1, iVar5, iVar4);
        if (cVar2 == '\0') {
            uVar8 = 0;
        } else {
            this_03 = (LinkMap*)param_2->GetLinkMap();
            local_34 = this_03->GetTileLinkZero(field_68, field_428, field_432);
            uVar10 = field_428;
            this_00 = field_256;
            this_01 = field_352;
            pLVar9 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
            uVar3 = this_01->GetRot();
            iVar4 = pLVar9->GetGridWidth(uVar3);
            uVar6 = iVar4 + uVar10;
            if (uVar10 < uVar6) {
                do {
                    uVar6 = field_432;
                    pLVar9 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
                    uVar3 = this_01->GetRot();
                    iVar4 = pLVar9->GetGridWidth(uVar3);
                    uVar7 = iVar4 + uVar6;
                    for (; uVar6 < uVar7; uVar6 = uVar6 + 1) {
                        if ((uVar10 != field_428) || (uVar6 != field_432)) {
                            uVar7 = this_03->GetTileLinkZero(field_68, uVar10, uVar6);
                            local_34 = local_34 & uVar7;
                        }
                        uVar7 = field_432;
                        pLVar9 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
                        uVar3 = this_01->GetRot();
                        iVar4 = pLVar9->GetGridWidth(uVar3);
                        uVar7 = iVar4 + uVar7;
                    }
                    uVar10 = uVar10 + 1;
                    uVar6 = field_428;
                    pLVar9 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
                    uVar3 = this_01->GetRot();
                    iVar4 = pLVar9->GetGridWidth(uVar3);
                    uVar6 = iVar4 + uVar6;
                } while (uVar10 < uVar6);
            }
            uVar8 = CONCAT31((int3)(uVar6 >> 8), (local_34 & 8) == 0);
        }
        return uVar8;
    }

    // 0x100431070, 64 bytes, placed by class name
    // Location::UsesTrianglePicking() const
    bool Location::UsesTrianglePicking() {
        bool bVar1;
        LocType* this_00;

        bVar1 = field_256->operator_cast_to_bool();
        if (bVar1) {
            this_00 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)field_256);
            bVar1 = this_00->GetCustomBounding() == 0;
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x1004310b0, 64 bytes, placed by class name
    // Location::UsesFastPickingTests() const
    undefined4 Location::UsesFastPickingTests() {
        LocType* this_00;
        bool bVar1;
        undefined3 extraout_var;
        undefined4 uVar2;

        bVar1 = field_256->operator_cast_to_bool();
        uVar2 = CONCAT31(extraout_var, 1);
        if (bVar1) {
            this_00 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)field_256);
            uVar2 = this_00->UseFastPickingTests();
        }
        return uVar2;
    }

    // 0x100431100, 256 bytes, placed by class name
    // Location::PickTest(graphics::PickingHelper&)
    ulong Location::PickTest(PickingHelper* param_1) {
        char cVar1;
        bool bVar2;
        AnimatedModel* this_00;
        shared_ptr* this_01;
        GeometryBatchInstance* this_02;
        Matrix44T* pMVar3;
        Model* this_03;
        vector* pvVar4;
        ulong uVar5;

        cVar1 = (*(code*)field_0[15])();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("UsesTrianglePicking()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/Location.cpp",
                      1574, (char*)0);
        }
        bVar2 = (&field_816)->operator_cast_to_bool();
        if (bVar2) {
            this_00 =
                (AnimatedModel*)
                    std::unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>::operator->(
                        (unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>*)&field_816);
            this_01 = (shared_ptr*)this_00->GetCurrentModel();
        LAB_10043117c:
            bVar2 = shared_ptr::operator_cast_to_bool(this_01);
            if (bVar2) {
                this_02 = (GeometryBatchInstance*)shared_ptr<graphics::Model>::operator->(
                    (shared_ptr<graphics::Model>*)this_01);
                pMVar3 = (Matrix44T*)this_02->GetMaterial();
                this_03 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_01);
                pvVar4 = (vector*)this_03->GetBatchList();
                bVar2 = (bool)(*(code*)field_0[16])(this);
                uVar5 = param_1->PickTest(pMVar3, pvVar4, false, bVar2, -1);
                goto LAB_1004311e5;
            }
        } else {
            cVar1 = (&field_680)->IsTaskDone();
            if (cVar1 != '\0') {
                this_01 = (shared_ptr*)(&field_680, (type*)param_1)->SSOBeginPtr();
                goto LAB_10043117c;
            }
        }
        uVar5 = 0;
    LAB_1004311e5:
        return uVar5 & 18446744073709551361;
    }

    // 0x100431200, 144 bytes, placed by class name
    // Location::RepeatLastOverrideAnimationFrameWhenFinished(int) const
    bool Location::RepeatLastOverrideAnimationFrameWhenFinished(int param_1) {
        AnimatedModel* pAVar1;
        int iVar3;
        uint uVar4;
        undefined1* this_00;
        GraphicsApp* pGVar5;

        iVar3 = GetOverrideAnimationToPlay(this);
        if (iVar3 != -1) {
            this_00 = &field_816;
            pGVar5 = (GraphicsApp*)this_00;
            pAVar1 = (AnimatedModel*)
                         std::unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>::operator->(
                             (unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>*)this_00);
            if (iVar3 == param_1) {
                pGVar5 = (GraphicsApp*)pGVar5->Instance();
                uVar4 = pGVar5->GetLogicTick();
                pAVar1->RestartOverrideAnimation(uVar4);
            } else {
                if (pAVar1->HasRequestedOverrideAnimation() == '\0') {
                    pAVar1 =
                        (AnimatedModel*)std::
                            unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>::operator->((
                                unique_ptr<LocationAnimatedModel, std::default_delete<LocationAnimatedModel>>*)this_00);
                    pAVar1->RequestOverrideAnimation(false, iVar3, 0, true);
                }
            }
        }
        return iVar3 != -1;
    }

    // 0x1004312e0, 336 bytes, placed by class name
    // Location::NotifyPickable(unsigned int, bool, float)
    void Location::NotifyPickable(uint param_1, bool param_2, float param_3) {
        bool bVar1;
        byte bVar2;
        byte bVar3;
        int iVar4;
        int* piVar5;
        shared_ptr* this_00;
        shared_ptr<World>* psVar6;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar7;
        SceneManager* pSVar8;
        EntityHighlightGlobalState* pEVar9;
        LocType* this_01;

        iVar4 = GetHighlightType(this);
        if (iVar4 == 8) {
            return;
        }
        piVar5 = (int*)EntityHighlightVisualConfig::GetDefault(5);
        if (*piVar5 == 2) {
            bVar2 = 1;
        } else {
            if (*piVar5 == 1) {
                this_00 = (shared_ptr*)GetWorld();
                bVar1 = shared_ptr::operator_cast_to_bool(this_00);
                if (bVar1) {
                    psVar6 = (shared_ptr<World>*)GetWorld();
                    phVar7 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                        eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                        eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                        eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                                 shared_ptr<World>::operator->(psVar6);
                    pSVar8 = (SceneManager*)eastl::hashtable<
                        long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                        eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                        eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                        eastl::prime_rehash_policy, false, true, true>::size(phVar7);
                    pEVar9 = (EntityHighlightGlobalState*)pSVar8->GetEntityHighlightGlobalState();
                    bVar2 = pEVar9->IsRadialHighlightActive();
                    goto joined_r0x000100431386;
                }
            }
            bVar2 = 0;
        }
    joined_r0x000100431386:
        if (EntityHighlightGlobalState::m_allowExamineOnlyHighlights == '\0') {
            bVar1 = field_256->operator_cast_to_bool();
            bVar3 = 1;
            if (bVar1) {
                this_01 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)field_256);
                bVar3 = this_01->IsExamineOnly();
                bVar3 = bVar3 ^ 1;
            }
            bVar2 = bVar2 & bVar3;
        }
        if (bVar2 != 0) {
            if (param_2) {
                new (field_796, param_1) oldscape::ServerConnectionWorkItem();
            } else {
                psVar6 = (shared_ptr<World>*)GetWorld();
                phVar7 =
                    (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                               eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                               eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                               eastl::prime_rehash_policy, false, true, true>*)shared_ptr<World>::operator->(psVar6);
                pSVar8 = (SceneManager*)eastl::hashtable<
                    long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                    eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                    eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                    eastl::prime_rehash_policy, false, true, true>::size(phVar7);
                pEVar9 = (EntityHighlightGlobalState*)pSVar8->GetEntityHighlightGlobalState();
                (field_796, pEVar9, param_1)->TryKeepVisible();
            }
            if (param_3 != -1.0) {
                *(float*)field_796 = param_3;
            }
        }
    }

    // 0x100431430, 144 bytes, placed by class name
    // Location::GetHighlightType() const
    undefined4 Location::GetHighlightType() {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        undefined4 uVar3;
        Logger* this_01;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_02;
        LocType* pLVar4;

        this_00 = field_256;
        bVar1 = this_00->operator_cast_to_bool();
        uVar3 = 8;
        if (bVar1) {
            this_01 = (Logger*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
            this_02 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                          this_01->GetLogStreams();
            cVar2 =
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    this_02);
            if ((cVar2 == '\0') && (uVar3 = 7, field_796[16] == '\0')) {
                pLVar4 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
                cVar2 = pLVar4->HasHighlightOverride();
                uVar3 = 5;
                if (cVar2 != '\0') {
                    pLVar4 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
                    uVar3 = pLVar4->GetHighlightOverride();
                }
            }
        }
        return uVar3;
    }

    // 0x10043a560, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.25
    void ___cxx_global_var_init_25(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&Location::NullLocation) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee52b8, &Location::NullLocation, 4294967296);
    }

} // namespace jag::game
