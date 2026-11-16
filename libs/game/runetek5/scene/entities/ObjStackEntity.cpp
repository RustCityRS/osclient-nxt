// libs/game/runetek5/scene/entities/ObjStackEntity.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ObjStackEntity.h"

namespace jag {
    // 0x100f38518, 16 bytes, __data
    ObjStackEntity::m_showObjStacks = {1, 0, 0, 0};

    // 0x1039b4cb8, 1 bytes, __common; zero-initialised
    ObjStackEntity::m_debugPrimitiveText;

    // 0x1039b4cb9, 1 bytes, __common; zero-initialised
    ObjStackEntity::m_debugPrimitiveTextOnMouseover;

    // 0x1003ed230, 352 bytes, base-object constructor, placed by class name
    // ObjStackEntity::ObjStackEntity(graphics::GraphNode*, shared_ptr<game::World> const&, game::ConfigProvider const*, game::CoordFine const&)
    void ObjStackEntity::ObjStackEntity(GraphNode* param_1, shared_ptr* param_2, ConfigProvider* param_3,
                                        CoordFine* param_4) {
        float fVar1;
        float fVar2;
        float fVar3;

        game::Entity::Entity();
        new (&field_192) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new (this) MakeSharedPool<ObjStackEntity, 256>();
        field_0 = &PTR__ObjStackEntity_100efe8e0;
        field_8 = &PTR__ObjStackEntity_100efea20;
        field_208 = -1.0;
        new (&field_216) eastl::vector<ObjStackEntry, eastl::allocator>();
        new (&field_248) eastl::vector<ObjStackEntry, eastl::allocator>();
        field_280 = param_3;
        fVar1 = param_4->field_4;
        fVar2 = param_4->field_8;
        fVar3 = param_4->field_12;
        field_288 = param_4->field_0;
        field_292 = fVar1;
        field_296 = fVar2;
        field_300 = fVar3;
        field_304 = '\0';
        field_305 = 0;
        new (field_308) game::EntityHighlightState();
        if (field_280 == (ConfigProvider*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_configProvider != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/ObjStackEntity.cpp",
                      58, (char*)0);
        }
        (&field_216, 64)->reserve();
        (&field_248, 4)->reserve();
        param_1->SetTranslation((Vector3T*)&param_4->field_4);
        SetHeight(this);
        SetNDCProjectionTestEnabled(false);
    }

    // 0x1003ed440, 336 bytes, placed by class name
    // ObjStackEntity::SetHeight()
    void ObjStackEntity::SetHeight() {
        int iVar3;
        GraphNode* this_00;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        long lVar4;
        GraphNode* this_02;
        undefined8* puVar5;
        shared_ptr<game::World>* psVar6;
        World* pWVar7;
        shared_ptr* this_03;
        MapSquare* this_04;
        LinkMap* pLVar8;
        int iVar9;
        int iVar10;
        undefined8 local_38;
        float local_30;
        float local_2c;

        this_00 = (GraphNode*)GetNode();
        this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)GetWorld();
        lVar4 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
        if (lVar4 != 0) {
            this_02 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
                (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
            puVar5 = (undefined8*)this_02->GetWorldTranslation();
            local_38 = *puVar5;
            local_30 = *(float*)(puVar5 + 1);
            psVar6 = (shared_ptr<game::World>*)GetWorld();
            pWVar7 = (World*)shared_ptr<game::World>::operator->(psVar6);
            this_03 = (shared_ptr*)pWVar7->GetClosestMapSquare((Vector3T*)&local_38);
            if (shared_ptr::operator_cast_to_bool(this_03)) {
                this_04 = (MapSquare*)shared_ptr<game::MapSquare>::operator->((shared_ptr<game::MapSquare>*)this_03);
                if (this_04->IsTerrainBuilt() != '\0') {
                    local_2c = (float)GetAbsoluteFloorHeight(0, 0, 2);
                    this_00->SetTranslationY(local_2c);
                    if (local_2c == -1.0) {
                        return;
                    }
                    iVar10 = (int)(float)local_38;
                    iVar9 = (int)local_30;
                    psVar6 = (shared_ptr<game::World>*)GetWorld();
                    pWVar7 = (World*)shared_ptr<game::World>::operator->(psVar6);
                    pLVar8 = (LinkMap*)pWVar7->GetLinkMap();
                    iVar3 = GetDuration();
                    iVar3 = game::RemoveRoof::CalculateMaxRemoveRoofLevel(pLVar8, iVar3, iVar10 >> 7, iVar9 >> 7, 1, 1);
                    SetMaximumRemoveRoofLevel(iVar3);
                    goto LAB_1003ed570;
                }
            }
        }
        this_00->SetTranslationY(-1.0);
    LAB_1003ed570:
        field_208 = -1.0;
    }

    // 0x1003ed5a0, 16 bytes, complete-object constructor, placed by class name
    // ObjStackEntity::ObjStackEntity(graphics::GraphNode*, shared_ptr<game::World> const&, game::ConfigProvider const*, game::CoordFine const&): jumps straight to the base-object constructor

    // 0x1003ed5b0, 144 bytes, base-object destructor, placed by class name
    // ObjStackEntity::~ObjStackEntity()
    void ObjStackEntity::~ObjStackEntity() {
        field_0 = &PTR__ObjStackEntity_100efe8e0;
        field_8 = &PTR__ObjStackEntity_100efea20;
        Destruct(this);
        (&field_248)->~vector();
        (&field_216)->~vector();
        (&field_192)->~enable_shared_from_this();
        ~Entity();
    }

    // 0x1003ed640, 16 bytes, complete-object destructor, placed by class name
    // ObjStackEntity::~ObjStackEntity(): jumps straight to the base-object destructor

    // 0x1003ed660, 32 bytes, deleting destructor, placed by class name
    // ObjStackEntity::~ObjStackEntity()
    void ObjStackEntity::~ObjStackEntity() {
        ~ObjStackEntity(this);
        operator_delete(this);
    }

    // 0x1003ed690, 64 bytes, placed by class name
    // ObjStackEntity::AddObj(unsigned int, unsigned int)
    void ObjStackEntity::AddObj(uint param_1, uint param_2) {
        uint local_18;
        uint local_14;

        _local_18 = CONCAT44(param_2, param_1);
        eastl::vector<ObjStackEntry, eastl::allocator>::emplace_back<unsigned int&, unsigned int&>(
            (vector<ObjStackEntry, eastl::allocator>*)&field_216, &local_18, &local_14);
        field_304 = '\0';
        SortAllObjs(this);
    }

    // 0x1003ed760, 192 bytes, placed by class name
    // ObjStackEntity::SortAllObjs()
    void ObjStackEntity::SortAllObjs() {
        undefined1* this_00;
        ConfigProvider* this_01;
        undefined8 uVar2;
        undefined8 uVar3;
        long lVar4;
        int* piVar5;
        shared_ptr* this_02;

        if (field_304 == '\0') {
            if (field_280 == (ConfigProvider*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_configProvider != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "entities/ObjStackEntity.cpp",
                          276, (char*)0);
            }
            this_00 = &field_216;
            uVar2 = this_00->HeapBeginPtr();
            uVar3 = this_00->end();
            eastl::sort<ObjStackEntry*, ObjStackEntity::SortAllObjs()::__0>(uVar2, uVar3, this);
            this_01 = field_280;
            lVar4 = this_00->size();
            piVar5 = (int*)eastl::vector<ObjStackEntry, eastl::allocator>::operator[](
                (vector<ObjStackEntry, eastl::allocator>*)this_00, lVar4 - 1);
            this_02 = game::ConfigProvider::GetConfig<game::ObjType>(this_01, *piVar5, (DataStatus**)0);
            if (shared_ptr::operator_cast_to_bool(this_02)) {
                field_304 = '\x01';
            }
            UpdateDisplayObjs(this);
        }
    }

    // 0x1003ed820, 96 bytes, placed by class name
    // ObjStackEntity::DelObj(unsigned int)
    void ObjStackEntity::DelObj(uint param_1) {
        undefined1* this_00;
        ObjStackEntry* pOVar1;
        ObjStackEntry* pOVar2;

        this_00 = &field_216;
        pOVar1 = (ObjStackEntry*)this_00->end();
        pOVar2 = (ObjStackEntry*)this_00->HeapBeginPtr();
        while (true) {
            if (pOVar2 == pOVar1) {
                return;
            }
            if (pOVar2->field_0 == param_1)
                break;
            pOVar2 = (ObjStackEntry*)pOVar2[1].field_8;
        }
        this_00->erase(pOVar2);
        UpdateDisplayObjs(this);
    }

    // 0x1003ed8e0, 288 bytes, placed by class name
    // ObjStackEntity::UpdateDisplayObjs()
    void ObjStackEntity::UpdateDisplayObjs() {
        undefined1* this_00;
        uint uVar1;
        shared_ptr* this_01;
        ObjStackEntry* pOVar3;
        ObjStackEntry* pOVar4;
        ObjStackEntry* pOVar5;
        uint uVar6;
        ObjStackEntry* pOVar7;
        uint uVar8;

        this_01 = (shared_ptr*)GetWorld();
        if (shared_ptr::operator_cast_to_bool(this_01)) {
            this_00 = &field_248;
            this_00->clear();
            pOVar3 = (ObjStackEntry*)(&field_216)->HeapBeginPtr();
            pOVar4 = (ObjStackEntry*)(&field_216)->end();
            if (pOVar3 == pOVar4) {
                pOVar5 = (ObjStackEntry*)0;
            } else {
                uVar6 = 4294967295;
                uVar8 = 4294967295;
                pOVar7 = (ObjStackEntry*)0;
                do {
                    uVar1 = pOVar3->field_0;
                    if (uVar6 == 4294967295) {
                        eastl::vector<ObjStackEntry, eastl::allocator>::emplace_back<ObjStackEntry_const&>(
                            (vector<ObjStackEntry, eastl::allocator>*)this_00, pOVar3);
                        uVar6 = uVar1;
                    }
                    if ((uVar8 == 4294967295) && (uVar8 = 4294967295, uVar1 != uVar6)) {
                        eastl::vector<ObjStackEntry, eastl::allocator>::emplace_back<ObjStackEntry_const&>(
                            (vector<ObjStackEntry, eastl::allocator>*)this_00, pOVar3);
                        uVar8 = uVar1;
                    }
                    pOVar5 = pOVar3;
                    if (uVar1 == uVar8) {
                        pOVar5 = pOVar7;
                    }
                    if (uVar1 == uVar6) {
                        pOVar5 = pOVar7;
                    }
                    pOVar3 = (ObjStackEntry*)pOVar3[1].field_8;
                    pOVar7 = pOVar5;
                } while (pOVar3 != pOVar4);
            }
            if (pOVar5 != (ObjStackEntry*)0) {
                eastl::vector<ObjStackEntry, eastl::allocator>::emplace_back<ObjStackEntry_const&>(
                    (vector<ObjStackEntry, eastl::allocator>*)this_00, pOVar5);
            }
            field_208 = -1.0;
        }
    }

    // 0x1003eda00, 128 bytes, placed by class name
    // ObjStackEntity::AdjustCount(unsigned int, unsigned int, unsigned int)
    void ObjStackEntity::AdjustCount(uint param_1, uint param_2, uint param_3) {
        uint* puVar1;
        uint* puVar2;

        puVar1 = (uint*)(&field_216)->HeapBeginPtr();
        puVar2 = (uint*)(&field_216)->end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 36) {
            if ((*puVar1 == param_1) && (puVar1[1] == param_2)) {
                puVar1[1] = param_3;
                field_304 = '\0';
            }
        }
    }

    // 0x1003edaa0, 608 bytes, placed by class name
    // ObjStackEntity::Build(graphics::RT7Core&, game::AssetBuilder&)
    undefined8 ObjStackEntity::Build(RT7Core* param_1, AssetBuilder* param_2) {
        Js5ResourceProvider* this_00;
        char cVar1;
        bool bVar2;
        uint uVar3;
        undefined8* puVar4;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        World* this_02;
        RT7Core* this_03;
        GraphNode* this_04;
        uint* puVar5;
        uint* puVar6;
        shared_ptr* this_05;
        ObjType* this_06;
        vector* this_07;
        MakeSharedPool<graphics::Model, 3072>* this_08;
        GraphicsApp* pGVar7;
        BuildRequest<graphics::Model, game::BuildModelMain>* pBVar8;
        BuildRequest<graphics::Model, game::BuildModelMain>* this_09;
        bool bVar9;
        undefined1 local_60[16];
        RT7Core* local_48;
        Js5ResourceProvider* local_40;
        undefined4 local_34;

        local_48 = param_1;
        puVar4 = (undefined8*)Instance();
        pBVar8 = (BuildRequest<graphics::Model, game::BuildModelMain>*)*puVar4;
        cVar1 = (**(code**)(pBVar8 + 224))(puVar4);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("GraphicsApp::Instance()->IsInsideMainLogic()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/ObjStackEntity.cpp",
                      157, (char*)0);
        }
        SortAllObjs(this);
        this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)GetWorld();
        this_02 = (World*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
        if (this_02 == (World*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("world != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/ObjStackEntity.cpp",
                      161, (char*)0);
        }
        this_03 = (RT7Core*)GetNode();
        cVar1 = this_03->IsAttached();
        if (cVar1 == '\0') {
            this_04 = (GraphNode*)this_02->GetRootNode();
            if (this_04 == (GraphNode*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("rootNode != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "entities/ObjStackEntity.cpp",
                          168, (char*)0);
            }
            param_1 = this_03;
            this_04->AddChild(this_03);
        }
        if ((float)this_03->GetTranslationY() == -1.0) {
            SetHeight(this);
        }
        puVar5 = (uint*)(&field_248)->HeapBeginPtr();
        puVar6 = (uint*)(&field_248)->end();
        if (puVar5 != puVar6) {
            bVar9 = false;
            local_40 = (Js5ResourceProvider*)this;
            do {
                this_09 = (BuildRequest<graphics::Model, game::BuildModelMain>*)(puVar5 + 2);
                cVar1 = this_09->IsTaskDone();
                if (cVar1 == '\0') {
                LAB_1003edc14:
                    param_1 = (RT7Core*)(ulong)*puVar5;
                    this_05 = game::ConfigProvider::GetConfig<game::ObjType>(*(ConfigProvider**)&local_40->field_280,
                                                                             *puVar5, (DataStatus**)0);
                    bVar2 = shared_ptr::operator_cast_to_bool(this_05);
                    if (bVar2) {
                        this_06 = (ObjType*)shared_ptr<game::ObjType>::operator->((shared_ptr<game::ObjType>*)this_05);
                        param_1 = local_48;
                        this_06->GetStackModel(local_48, param_2, this_09, (ulong)puVar5[1], 0);
                        pBVar8 = this_09;
                    }
                } else {
                    cVar1 = this_09->IsEmpty();
                    if (cVar1 != '\0')
                        goto LAB_1003edc14;
                    bVar2 = ((puVar5 + 10))->operator_cast_to_bool();
                    if (!bVar2) {
                        this_07 = this_09->SSOBeginPtr(param_1);
                        this_08 = (MakeSharedPool<graphics::Model, 3072>*)shared_ptr<graphics::Model>::operator*(
                            (shared_ptr<graphics::Model>*)this_07);
                        local_34 = 2;
                        MakeSharedPool<graphics::Model, 3072>::MakeShared<graphics::Model&, graphics::ModelCopyType>(
                            (shared_ptr*)local_60, this_08, (Model*)&local_34, (ModelCopyType*)pBVar8);
                        param_1 = (RT7Core*)local_60;
                        shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)(puVar5 + 10),
                                                               (shared_ptr*)local_60);
                        local_60->~shared_ptr();
                    }
                }
                pGVar7 = (GraphicsApp*)(puVar5 + 10);
                bVar2 = pGVar7->operator_cast_to_bool();
                this_00 = local_40;
                if (bVar2) {
                    bVar9 = true;
                }
                puVar5 = puVar5 + 36;
            } while (puVar5 != puVar6);
            if (bVar9) {
                pGVar7 = (GraphicsApp*)pGVar7->Instance();
                uVar3 = pGVar7->GetLogicTick();
                UpdateHighlighting((ObjStackEntity*)this_00, uVar3);
            }
        }
        return 1;
    }

    // 0x1003edf40, 464 bytes, placed by class name
    // ObjStackEntity::UpdateHighlighting(unsigned int)
    void ObjStackEntity::UpdateHighlighting(uint param_1) {
        undefined1* this_00;
        bool bVar1;
        bool bVar2;
        char cVar3;
        long lVar4;
        long lVar5;
        shared_ptr* this_01;
        shared_ptr<game::World>* this_02;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_03;
        SceneManager* this_04;
        EntityHighlightGlobalState* this_05;
        EntityHighlightVisualConfig* this_06;
        Model* this_07;
        long lVar6;
        float fVar7;
        float local_58[4];
        Vector4T local_48[16];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = &field_248;
        lVar4 = this_00->HeapBeginPtr();
        lVar5 = this_00->end();
        bVar1 = false;
        if (lVar4 != lVar5) {
            do {
                lVar6 = lVar4 + 144;
                bVar2 = ((lVar4 + 40))->operator_cast_to_bool();
                bVar1 = false;
                if (!bVar2)
                    break;
                lVar4 = lVar6;
                bVar1 = true;
            } while (lVar6 != lVar5);
            bVar1 = !bVar1;
        }
        this_01 = (shared_ptr*)GetWorld();
        bVar2 = shared_ptr::operator_cast_to_bool(this_01);
        if ((bVar2) && (!bVar1)) {
            this_02 = (shared_ptr<game::World>*)GetWorld();
            this_03 =
                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                           eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                           eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)shared_ptr<game::World>::operator->(this_02);
            this_04 =
                (SceneManager*)eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                                eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                                eastl::equal_to<long long>, eastl::hash<long long>,
                                                eastl::mod_range_hashing, eastl::default_ranged_hash,
                                                eastl::prime_rehash_policy, false, true, true>::size(this_03);
            this_05 = (EntityHighlightGlobalState*)this_04->GetEntityHighlightGlobalState();
            cVar3 = this_05->IsEnabled();
            if (cVar3 != '\0') {
                this_06 = (EntityHighlightVisualConfig*)game::EntityHighlightVisualConfig::GetDefault(6);
                if (this_06->field_0 == 2) {
                    new (field_308, param_1) oldscape::ServerConnectionWorkItem();
                }
                fVar7 = (float)FrameTime::GetFrameDelta();
                (field_308, this_05, fVar7, param_1)->Update();
                new (local_58) game::EntityHighlightVisualData();
                cVar3 = this_06->Evaluate((EntityHighlightState*)field_308, this_05,
                                          (EntityHighlightVisualData*)local_58, 1.0);
                if (cVar3 != '\0') {
                    lVar4 = this_00->HeapBeginPtr();
                    lVar5 = this_00->end();
                    if (lVar4 != lVar5) {
                        do {
                            this_07 = (Model*)shared_ptr<graphics::Model>::operator->(
                                (shared_ptr<graphics::Model>*)(lVar4 + 40));
                            this_07->SetHighlight(local_58[0], local_48);
                            lVar4 = lVar4 + 144;
                        } while (lVar4 != lVar5);
                    }
                    goto LAB_1003ee0df;
                }
            }
            ClearHighlighting(this);
        }
    LAB_1003ee0df:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003ee110, 96 bytes, placed by class name
    // ObjStackEntity::Destruct()
    void ObjStackEntity::Destruct() {
        GraphNode* this_00;

        (&field_248)->clear();
        (&field_216)->clear();
        this_00 = (GraphNode*)GetNode();
        this_00->Detach();
        shared_ptr<game::World>::reset();
        field_208 = -1.0;
        field_305 = 0;
    }

    // 0x1003ee1a0, 32 bytes, placed by class name
    // ObjStackEntity::IsEmpty() const
    void ObjStackEntity::IsEmpty() {
        (&field_216)->empty();
    }

    // 0x1003ee2b0, 128 bytes, placed by class name
    // ObjStackEntity::Contains(unsigned int)
    byte ObjStackEntity::Contains(uint param_1) {
        uint uVar1;
        uint* puVar2;
        uint* puVar3;
        bool bVar4;

        puVar3 = (uint*)(&field_216)->HeapBeginPtr();
        puVar2 = (uint*)(&field_216)->end();
        bVar4 = puVar3 == puVar2;
        if (!bVar4) {
            uVar1 = *puVar3;
            while (uVar1 != param_1) {
                puVar3 = puVar3 + 36;
                bVar4 = puVar3 == puVar2;
                if (bVar4)
                    break;
                uVar1 = *puVar3;
            }
        }
        return bVar4 ^ 1;
    }

    // 0x1003ee330, 1216 bytes, placed by class name
    // ObjStackEntity::MainLogic(graphics::RT7Core&, unsigned int, math::Matrix44T<float> const&)
    void ObjStackEntity::MainLogic(RT7Core* param_1, uint param_2, Matrix44T* param_3) {
        shared_ptr* this_00;
        bool bVar1;
        char cVar2;
        byte bVar3;
        undefined4 uVar4;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        World* pWVar5;
        GraphNode* this_02;
        int* piVar6;
        Model* pMVar7;
        Matrix44T* pMVar8;
        shared_ptr* psVar9;
        ObjType* pOVar10;
        NXTPixToolkit* this_03;
        undefined8 uVar11;
        shared_ptr<game::World>* this_04;
        IrradianceEffect* this_05;
        IrradianceEffect* this_06;
        ModelUpdateManager* this_07;
        int iVar12;
        int iVar13;
        int iVar14;
        Matrix44T<float>* this_08;
        float fVar15;
        Matrix44T local_118[2];
        undefined1 local_a0[48];
        GraphNode* local_70;
        World* local_68;
        reverse_iterator local_60[12];
        float local_54;
        float local_50[2];
        float local_48;
        HeightMap* local_40;
        bool local_31;

        this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)GetWorld();
        pWVar5 = (World*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
        if (pWVar5 == (World*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("world",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/ObjStackEntity.cpp",
                      332, (char*)0);
        }
        this_02 = (GraphNode*)GetNode();
        fVar15 = (float)this_02->GetTranslationY();
        if (fVar15 == -1.0) {
            SetHeight(this);
            fVar15 = (float)this_02->GetTranslationY();
            if (fVar15 == -1.0)
                goto LAB_1003ee3db;
            field_208 = -1.0;
        }
        fVar15 = (float)GetAbsoluteFloorHeight(64, 64);
        if (fVar15 != -1.0) {
            if (field_305 == '\0') {
                local_31 = true;
            } else {
                local_31 = fVar15 != field_208;
            }
            field_208 = fVar15;
            field_305 = 0;
            local_70 = this_02;
            local_68 = pWVar5;
            eastl::vector<ObjStackEntry, eastl::allocator>::rend();
            eastl::vector<unsigned long,
                          eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
            bVar1 = eastl::operator!=(local_60, (reverse_iterator*)(local_a0 + 40));
            if (!bVar1) {
                return;
            }
            do {
                piVar6 = (int*)eastl::reverse_iterator<ObjStackEntry*>::operator*(
                    (reverse_iterator<ObjStackEntry*>*)local_60);
                this_00 = (shared_ptr*)(piVar6 + 10);
                bVar1 = shared_ptr::operator_cast_to_bool(this_00);
                if (bVar1) {
                    pMVar7 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
                    cVar2 = pMVar7->IsLoaded();
                    if (cVar2 == '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssert("model->IsLoaded()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "scene/entities/ObjStackEntity.cpp",
                                  376, (char*)0);
                    }
                    if (local_31 != false) {
                        pMVar8 = (Matrix44T*)local_70->GetWorldTransformationMatrix();
                        this_08 = (Matrix44T<float>*)(piVar6 + 16);
                        math::Matrix44T<float>::operator=(this_08, pMVar8);
                        psVar9 = game::ConfigProvider::GetConfig<game::ObjType>(field_280, *piVar6, (DataStatus**)0);
                        bVar1 = shared_ptr::operator_cast_to_bool(psVar9);
                        if (bVar1) {
                            pOVar10 =
                                (ObjType*)shared_ptr<game::ObjType>::operator->((shared_ptr<game::ObjType>*)psVar9);
                            cVar2 = pOVar10->HasRandomPosition();
                            if (cVar2 == '\0')
                                goto LAB_1003ee62c;
                            fVar15 = (float)math::FRand(1.0);
                            local_40._0_4_ = fVar15;
                            fVar15 = (float)math::FRand(1.0);
                            local_40 = (HeightMap*)CONCAT44(local_40._4_4_, local_40._0_4_ * 32.0 + 48.0);
                            local_54 = fVar15 * 32.0 + 48.0;
                            new (local_50) math::Vector3T<int>();
                            local_50[0] = local_40._0_4_;
                            local_48 = local_54;
                            pMVar8 = (Matrix44T*)2;
                            local_50[1] = (float)GetRelativeFloorHeight((int)local_40._0_4_, (int)local_54);
                            this_08->Translate(local_50);
                            fVar15 = (float)math::FRand(1.0);
                            math::Matrix33RotationY<float>((math*)local_a0, fVar15 * 6.2831855 + -3.1415927);
                            math::operator*(local_118, (math*)local_a0, this_08, pMVar8);
                            math::Matrix44T<float>::operator=(this_08, local_118);
                        } else {
                        LAB_1003ee62c:
                            new (local_50) math::Vector3T<int>();
                            local_50[0] = 64.0;
                            local_48 = 64.0;
                            local_50[1] = (float)GetRelativeFloorHeight(64, 64, 2);
                            this_08->Translate(local_50);
                        }
                        fVar15 = (float)GetAbsoluteFloorHeight(64, 64, 0);
                        if (fVar15 == field_208) {
                            local_40 = (HeightMap*)local_68->GetHeightMap();
                            uVar4 = GetHeightMapLevel();
                            this_03 = (NXTPixToolkit*)shared_ptr<graphics::Model>::operator->(
                                (shared_ptr<graphics::Model>*)this_00);
                            uVar11 = this_03->GetScreen();
                            cVar2 = local_40->ApplyHillRotation(uVar4, uVar11, this_08, 0);
                            if (cVar2 == '\0') {
                                field_305 = 0;
                                field_208 = -1.0;
                                return;
                            }
                        }
                        piVar6[29] = (int)((float)piVar6[29] + 15.0);
                    }
                    if (piVar6[32] == 2) {
                        psVar9 = game::ConfigProvider::GetConfig<game::ObjType>(field_280, *piVar6, (DataStatus**)0);
                        bVar1 = shared_ptr::operator_cast_to_bool(psVar9);
                        if (bVar1) {
                            pOVar10 =
                                (ObjType*)shared_ptr<game::ObjType>::operator->((shared_ptr<game::ObjType>*)psVar9);
                            bVar3 = pOVar10->CastsShadows();
                            piVar6[32] = (uint)(bVar3 ^ 1);
                        }
                    }
                    this_04 = (shared_ptr<game::World>*)GetWorld();
                    pWVar5 = (World*)shared_ptr<game::World>::operator->(this_04);
                    iVar12 = (int)(float)piVar6[28];
                    iVar14 = iVar12 + 8191;
                    if (-1 < iVar12) {
                        iVar14 = iVar12;
                    }
                    iVar13 = (int)(float)piVar6[30];
                    iVar12 = iVar13 + 8191;
                    if (-1 < iVar13) {
                        iVar12 = iVar13;
                    }
                    this_05 = (IrradianceEffect*)pWVar5->GetMapSquare(iVar14 >> 13, iVar12 >> 13);
                    this_06 = this_05;
                    bVar1 = operator!=((shared_ptr*)this_05, (_func_decltype_nullptr*)0);
                    if (bVar1) {
                        pMVar7 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
                        this_06 = (IrradianceEffect*)pMVar7->GetIrradianceEffect();
                        shared_ptr<game::MapSquare>::operator->((shared_ptr<game::MapSquare>*)this_05);
                        local_118->GetIrradianceSHConsts();
                        this_06->SetCoefficients(local_118);
                    }
                    this_07 = (ModelUpdateManager*)this_06->Instance();
                    this_07->AddToUpdateList(this_00);
                    field_305 = 1;
                } else {
                    field_208 = -1.0;
                }
                eastl::reverse_iterator<ObjStackEntry*>::operator++((reverse_iterator<ObjStackEntry*>*)local_60);
                bVar1 = eastl::operator!=(local_60, (reverse_iterator*)(local_a0 + 40));
                if (!bVar1) {
                    return;
                }
            } while (true);
        }
    LAB_1003ee3db:
        field_305 = 0;
    }

    // 0x1003ef080, 736 bytes, placed by class name
    // ObjStackEntity::GatherDrawableElements(graphics::DrawableQueue&, graphics::RT7Core&, math::Matrix44T<float> const&, graphics::SceneViewData const&, graphics::EffectManager const&)
    void ObjStackEntity::GatherDrawableElements(DrawableQueue* param_1, RT7Core* param_2, Matrix44T* param_3,
                                                SceneViewData* param_4, EffectManager* param_5) {
        shared_ptr* this_00;
        shared_ptr<game::World>* this_01;
        SceneViewData* this_02;
        char cVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        long lVar6;
        Model* pMVar7;
        World* pWVar8;
        RemoveRoof* this_03;
        CoordGrid local_b0;
        reverse_iterator local_a0[8];
        undefined8 local_98[2];
        shared_ptr<game::World>* local_88;
        Matrix44T* local_80;
        undefined1 local_60[24];
        SceneViewData* local_48;
        undefined1* local_40;
        byte local_31;

        cVar1 = (*(code*)field_0[35])();
        if ((cVar1 != '\0') && (cVar1 = FilterRenderPasses((ObjStackEntity*)this, param_4), cVar1 != '\0')) {
            local_88 = (shared_ptr<game::World>*)GetWorld();
            local_60._16_8_ = param_4;
            local_31 = param_4->HasShadowPass();
            local_48 = (SceneViewData*)this;
            eastl::vector<unsigned long,
                          eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
            eastl::vector<ObjStackEntry, eastl::allocator>::rend();
            bVar2 = eastl::operator!=(local_a0, (reverse_iterator*)local_60);
            if (bVar2) {
                local_31 = local_31 ^ 1;
                local_40 = &field_248;
                do {
                    lVar6 =
                        eastl::reverse_iterator<ObjStackEntry*>::operator*((reverse_iterator<ObjStackEntry*>*)local_a0);
                    this_00 = (shared_ptr*)(lVar6 + 40);
                    bVar2 = shared_ptr::operator_cast_to_bool(this_00);
                    if (bVar2) {
                        pMVar7 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
                        cVar1 = pMVar7->IsLoaded();
                        if (cVar1 == '\0') {
                            /* WARNING: Subroutine does not return */
                            LogAssert("displayObj.m_model->IsLoaded()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/scene/entities/ObjStackEntity.cpp",
                                      495, (char*)0);
                        }
                        local_60._0_8_ = ((lVar6 + 64))->GetPos();
                        bVar2 = math::operator==((Vector3T*)local_60, (Vector3T*)PTR_ZERO_100ee66e8);
                        if ((!bVar2) && ((*(int*)(lVar6 + 128) == 0 | local_31) == 1)) {
                            local_80 = (Matrix44T*)(lVar6 + 64);
                            local_98[0] = ((lVar6 + 112))->GetXYZ();
                            this_01 = local_88;
                            pWVar8 = (World*)shared_ptr<game::World>::operator->(local_88);
                            cVar1 = pWVar8->IsRemoveRoofSelective();
                            this_02 = local_48;
                            if (cVar1 == '\0') {
                                iVar3 = local_48->GetDuration();
                                iVar4 = this_02->GetWrapMode();
                                pWVar8 = (World*)shared_ptr<game::World>::operator->(this_01);
                                iVar5 = pWVar8->GetMaxRenderLevel();
                                cVar1 = game::LinkConstants::IsAffectedByMaxRenderLevel(iVar3, iVar4, iVar5);
                            } else {
                                pWVar8 = (World*)shared_ptr<game::World>::operator->(this_01);
                                this_03 = (RemoveRoof*)pWVar8->GetRemoveRoof();
                                cVar1 = this_03->AnyRoofRemoved();
                                if (cVar1 != '\0') {
                                    new (local_60) game::CoordFine(*(uint*)&local_48->field_68, (Vector3T*)local_98);
                                    new (&local_b0) game::CoordGrid(local_60);
                                    cVar1 = this_03->IsRoofRemoved(&local_b0);
                                    if (cVar1 != '\0')
                                        goto joined_r0x0001003ef31a;
                                }
                                cVar1 = '\0';
                            }
                        joined_r0x0001003ef31a:
                            if (cVar1 == '\0') {
                                pMVar7 = (Model*)shared_ptr<graphics::Model>::operator->(
                                    (shared_ptr<graphics::Model>*)this_00);
                                pMVar7->SetWorldTransform(local_80);
                                pMVar7 = (Model*)shared_ptr<graphics::Model>::operator->(
                                    (shared_ptr<graphics::Model>*)this_00);
                                pMVar7->GatherDrawableElements(param_1, param_2, local_60._16_8_, param_5);
                            }
                        }
                    }
                    eastl::reverse_iterator<ObjStackEntry*>::operator++((reverse_iterator<ObjStackEntry*>*)local_a0);
                    eastl::vector<ObjStackEntry, eastl::allocator>::rend();
                    bVar2 = eastl::operator!=(local_a0, (reverse_iterator*)local_60);
                } while (bVar2);
            }
            DebugPrimitiveOutput(local_48);
        }
    }

    // 0x1003ef360, 48 bytes, placed by class name
    // ObjStackEntity::FilterRenderPasses(graphics::SceneViewData const&)
    ulong ObjStackEntity::FilterRenderPasses(SceneViewData* param_1) {
        ulong uVar2;

        if (param_1->HasShadowPass() == '\0') {
            uVar2 = param_1->HasRenderPass(2);
            uVar2 = uVar2 ^ 1;
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x1003ef3c0, 912 bytes, placed by class name
    // ObjStackEntity::DebugPrimitiveOutput(graphics::SceneViewData const&)
    void ObjStackEntity::DebugPrimitiveOutput(SceneViewData* param_1) {
        undefined1* puVar1;
        float fVar2;
        float fVar3;
        char cVar4;
        bool bVar5;
        uint* puVar6;
        shared_ptr* this;
        vector* pvVar7;
        float* pfVar8;
        Mouse* pMVar9;
        undefined8 uVar10;
        long* plVar11;
        char* pcVar12;
        type* ptVar13;
        eastl::string local_1c0[32];
        allocator local_1a0[8];
        undefined1 local_198[16];
        reverse_iterator local_188[8];
        undefined8 local_180[2];
        SceneViewData* local_170;
        int local_168;
        float local_164;
        undefined8 local_160[37];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_170 = param_1;
        if (m_debugPrimitiveText == '\0') {
            if (m_debugPrimitiveTextOnMouseover == '\0')
                goto LAB_1003ef6ed;
            cVar4 = param_1->PickTestDebugCursor();
            if (cVar4 == '\0')
                goto LAB_1003ef6ed;
        }
        cVar4 = graphics::SceneViewData::HasRenderPass();
        if (cVar4 != '\0') {
            puVar1 = &local_170->field_248;
            eastl::vector<unsigned long,
                          eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
            local_198._8_8_ = puVar1;
            eastl::vector<ObjStackEntry, eastl::allocator>::rend();
            bVar5 = eastl::operator!=(local_188, (reverse_iterator*)local_160);
            if (bVar5) {
                local_168 = 0;
                do {
                    puVar6 = (uint*)eastl::reverse_iterator<ObjStackEntry*>::operator*(
                        (reverse_iterator<ObjStackEntry*>*)local_188);
                    local_160[0] = ((puVar6 + 16))->GetPos();
                    bVar5 = math::operator==((Vector3T*)local_160, (Vector3T*)PTR_ZERO_100ee66e8);
                    if (!bVar5) {
                        local_180[0] = ((puVar6 + 28))->GetXYZ();
                        new (local_160) eastl::fixed_string<char, 256, true, eastl::allocator>();
                        ptVar13 = (type*)(ulong)*puVar6;
                        this = game::ConfigProvider::GetConfig<game::ObjType>(*(ConfigProvider**)&local_170->field_280,
                                                                              *puVar6, (DataStatus**)0);
                        local_164 = (float)*puVar6;
                        pvVar7 = local_180->SSOBeginPtr(ptVar13);
                        fVar2 = *(float*)pvVar7;
                        pfVar8 = (float*)local_180->second();
                        fVar3 = *pfVar8;
                        bVar5 = shared_ptr::operator_cast_to_bool(this);
                        if (bVar5) {
                            pMVar9 = (Mouse*)shared_ptr<game::ObjType>::operator->((shared_ptr<game::ObjType>*)this);
                            pMVar9->GetScaledMousePosition();
                            cVar4 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::empty();
                            if (cVar4 == '\0') {
                                pMVar9 =
                                    (Mouse*)shared_ptr<game::ObjType>::operator->((shared_ptr<game::ObjType>*)this);
                                pMVar9->GetScaledMousePosition();
                                uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                eastl::basic_string<
                                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                                    sprintf((char*)local_160, "[OBJSTACK] [%d,%d] %d(%s)",
                                            (ulong)((int)(fVar2 * 0.0078125) & 63),
                                            (ulong)((int)(fVar3 * 0.0078125) & 63), (ulong)(uint)local_164, uVar10);
                                goto LAB_1003ef60c;
                            }
                        }
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                            sprintf((char*)local_160, "[OBJSTACK] [%d,%d] %d", (ulong)((int)(fVar2 * 0.0078125) & 63),
                                    (ulong)((int)(fVar3 * 0.0078125) & 63), (ulong)(uint)local_164);
                    LAB_1003ef60c:
                        local_164 = (float)local_168;
                        pfVar8 = (float*)local_180->y();
                        *pfVar8 = local_164 + *pfVar8;
                        plVar11 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                        if (plVar11 != (long*)0) {
                            pcVar12 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            eastl::allocator::allocator(local_1a0, "EASTL basic_string");
                            eastl::string::basic_string(local_1c0, pcVar12, local_1a0);
                            new (local_198) oldscape::sidebars::SideBarData(-5197569, 1);
                            (**(code**)(*plVar11 + 136))(plVar11, local_180, local_1c0, (SideBarData*)local_198);
                            eastl::string::~basic_string(local_1c0);
                        }
                        local_168 = local_168 + 50;
                        /* WARNING: Subroutine does not return */
                        local_160->~fixed_string();
                    }
                    eastl::reverse_iterator<ObjStackEntry*>::operator++((reverse_iterator<ObjStackEntry*>*)local_188);
                    eastl::vector<ObjStackEntry, eastl::allocator>::rend();
                    bVar5 = eastl::operator!=(local_188, (reverse_iterator*)local_160);
                } while (bVar5);
            }
        }
    LAB_1003ef6ed:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003ef750, 1408 bytes, placed by class name
    // ObjStackEntity::AddPickableEntity(game::World&, math::Matrix44T<float> const&)
    void ObjStackEntity::AddPickableEntity(World* param_1, Matrix44T* param_2) {
        shared_ptr* this_00;
        undefined8 this_01;
        undefined8 uVar1;
        char cVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        long lVar6;
        long lVar7;
        NXTPixToolkit* this_02;
        AABB* pAVar8;
        Model* this_03;
        SceneManager* pSVar9;
        Minimap* this_04;
        GraphNode* pGVar10;
        Matrix44T* pMVar11;
        shared_ptr<game::World>* this_05;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_06;
        CoordMapSquare* pCVar12;
        CoordMapSquare* this_07;
        vector* pvVar13;
        float* pfVar14;
        long* plVar15;
        char* pcVar16;
        Matrix44T* pMVar17;
        AABB local_208;
        Vector2T<int> local_1e0[8];
        undefined8 local_1d8[2];
        allocator local_1c8[8];
        undefined1 local_1c0[16];
        undefined1 local_1b0[64];
        Matrix44T* local_170;
        AABB local_168[8];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_1b0._32_8_ = param_1;
        cVar2 = (*(code*)field_0[35])();
        if (cVar2 != '\0') {
            local_170 = param_2;
            new (&local_208) math::AABB();
            local_1c0._8_8_ = this;
            lVar6 = (&field_248)->HeapBeginPtr();
            lVar7 = (&field_248)->end();
            if (lVar6 != lVar7) {
                do {
                    this_00 = (shared_ptr*)(lVar6 + 40);
                    bVar3 = shared_ptr::operator_cast_to_bool(this_00);
                    if (bVar3) {
                        this_03 =
                            (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
                        cVar2 = this_03->IsLoaded();
                        if (cVar2 == '\0') {
                            /* WARNING: Subroutine does not return */
                            LogAssert("displayObj.m_model->IsLoaded()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/scene/entities/ObjStackEntity.cpp",
                                      550, (char*)0);
                        }
                        this_02 = (NXTPixToolkit*)shared_ptr<graphics::Model>::operator->(
                            (shared_ptr<graphics::Model>*)this_00);
                        pAVar8 = (AABB*)this_02->GetScreen();
                        math::AABB::AABB(local_168, pAVar8);
                        local_168->Transform((Matrix44T*)(lVar6 + 64));
                        local_208.Union(local_168);
                    }
                    lVar6 = lVar6 + 144;
                } while (lVar6 != lVar7);
            }
            uVar1 = local_1b0._32_8_;
            pSVar9 = (SceneManager*)local_1b0._32_8_->size();
            this_04 = (Minimap*)pSVar9->GetGameSceneRect();
            this_01 = local_1c0._8_8_;
            local_1b0._40_8_ = local_1c0._8_8_ + 76;
            local_1b0._48_8_ = uVar1->GetLastCameraProjectionMatrix();
            local_1b0._56_8_ = uVar1->GetLastViewProjectionMatrix();
            iVar4 = this_04->GetPos();
            iVar5 = this_04->GetLevel();
            pGVar10 = (GraphNode*)this_01->GetNode();
            pAVar8 = (AABB*)pGVar10->GetWorldAABB();
            local_1b0._40_8_->FillFromAABB(local_1b0._48_8_, local_1b0._56_8_, iVar4, iVar5, pAVar8);
            local_1b0._40_8_ = uVar1->GetLastCameraViewMatrix();
            local_1b0._48_8_ = uVar1->GetLastCameraProjectionMatrix();
            pMVar11 = (Matrix44T*)uVar1->GetLastViewProjectionMatrix();
            iVar4 = this_04->GetPos();
            iVar5 = this_04->GetLevel();
            pAVar8 = &local_208;
            pMVar17 = (Matrix44T*)local_1b0._40_8_;
            local_1b0._56_8_ = (undefined1*)(this_01 + 100);
            cVar2 = ((this_01 + 100))->Set(local_1b0._40_8_, local_1b0._48_8_, pMVar11, iVar4, iVar5, pAVar8);
            local_1b0._0_8_ = local_170->GetPos();
            local_168[0]._0_8_ = math::operator-((math*)local_1b0, (Vector3T*)pMVar17);
            pAVar8->Translate(local_168);
            this_01->SetAABB(pAVar8);
            if (cVar2 != '\0') {
                if (game::World::m_debugPicking != '\0') {
                    math::Vector2T<int>::Vector2T(local_1e0);
                    this_05 = (shared_ptr<game::World>*)this_01->GetWorld();
                    this_06 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                         eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                         eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                                  shared_ptr<game::World>::operator->(this_05);
                    pSVar9 = (SceneManager*)eastl::hashtable<
                        long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                        eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                        eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                        eastl::prime_rehash_policy, false, true, true>::size(this_06);
                    pCVar12 = (CoordMapSquare*)pSVar9->GetGameSceneRect();
                    iVar4 = pCVar12->GetX();
                    uVar1 = local_1b0._56_8_;
                    local_170._0_4_ = (float)iVar4;
                    this_07 = (CoordMapSquare*)local_1b0._56_8_->SSOBeginPtr(pAVar8);
                    iVar4 = this_07->GetX();
                    local_170._0_4_ = (float)iVar4 + local_170._0_4_;
                    pvVar13 = local_1e0->SSOBeginPtr(pAVar8);
                    *(float*)pvVar13 = local_170._0_4_;
                    iVar4 = pCVar12->GetZ();
                    local_170._0_4_ = (float)iVar4;
                    pCVar12 = (CoordMapSquare*)uVar1->SSOBeginPtr(pAVar8);
                    iVar4 = pCVar12->GetZ();
                    local_170._0_4_ = (float)iVar4 + local_170._0_4_;
                    pfVar14 = (float*)local_1e0->y();
                    *pfVar14 = local_170._0_4_;
                    iVar4 = uVar1->GetPos();
                    plVar15 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                    if (plVar15 != (long*)0) {
                        local_170._0_4_ = (float)iVar4;
                        new (local_168) oldscape::sidebars::SideBarData(1073807104, 0);
                        (**(code**)(*plVar15 + 160))(local_170._0_4_, plVar15, local_1e0, 1, local_168);
                    }
                    new (local_168) eastl::fixed_string<char, 256, true, eastl::allocator>();
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                        sprintf((char*)local_168, "Pick[ObjStackEntity]");
                    plVar15 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                    if (plVar15 != (long*)0) {
                        pGVar10 = (GraphNode*)this_01->GetNode();
                        pAVar8 = (AABB*)pGVar10->GetWorldAABB();
                        local_1d8[0] = pAVar8->GetCentrePos();
                        pcVar16 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        eastl::allocator::allocator(local_1c8, "EASTL basic_string");
                        new (local_1b0) eastl::string(pcVar16, local_1c8);
                        new (local_1c0) oldscape::sidebars::SideBarData(-16711936, 0);
                        (**(code**)(*plVar15 + 136))(plVar15, local_1d8, local_1b0, local_1c0);
                        local_1b0->~basic_string();
                    }
                    /* WARNING: Subroutine does not return */
                    local_168->~fixed_string();
                }
                local_1b0->shared_from_this();
                shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider,
                                                                            void>(
                    (shared_ptr<oldscape::RSevenDebugPresetProvider>*)local_168, (shared_ptr*)local_1b0);
                local_1b0._32_8_->AddPickableEntity(local_168);
                local_168->~shared_ptr();
                local_1b0->~shared_ptr();
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003efd00, 240 bytes, placed by class name
    // ObjStackEntity::NotifyPickable(unsigned int, bool, float)
    void ObjStackEntity::NotifyPickable(uint param_1, bool param_2, float param_3) {
        bool bVar1;
        char cVar2;
        int* piVar3;
        shared_ptr* this_00;
        shared_ptr<game::World>* psVar4;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar5;
        SceneManager* pSVar6;
        EntityHighlightGlobalState* pEVar7;

        piVar3 = (int*)game::EntityHighlightVisualConfig::GetDefault(6);
        if (*piVar3 != 2) {
            if (*piVar3 != 1) {
                return;
            }
            this_00 = (shared_ptr*)GetWorld();
            bVar1 = shared_ptr::operator_cast_to_bool(this_00);
            if (!bVar1) {
                return;
            }
            psVar4 = (shared_ptr<game::World>*)GetWorld();
            phVar5 =
                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                           eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                           eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)shared_ptr<game::World>::operator->(psVar4);
            pSVar6 =
                (SceneManager*)eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                                eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                                eastl::equal_to<long long>, eastl::hash<long long>,
                                                eastl::mod_range_hashing, eastl::default_ranged_hash,
                                                eastl::prime_rehash_policy, false, true, true>::size(phVar5);
            pEVar7 = (EntityHighlightGlobalState*)pSVar6->GetEntityHighlightGlobalState();
            cVar2 = pEVar7->IsRadialHighlightActive();
            if (cVar2 == '\0') {
                return;
            }
        }
        if (param_2) {
            new (field_308, param_1) oldscape::ServerConnectionWorkItem();
        } else {
            psVar4 = (shared_ptr<game::World>*)GetWorld();
            phVar5 =
                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                           eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                           eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)shared_ptr<game::World>::operator->(psVar4);
            pSVar6 =
                (SceneManager*)eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                                eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                                eastl::equal_to<long long>, eastl::hash<long long>,
                                                eastl::mod_range_hashing, eastl::default_ranged_hash,
                                                eastl::prime_rehash_policy, false, true, true>::size(phVar5);
            pEVar7 = (EntityHighlightGlobalState*)pSVar6->GetEntityHighlightGlobalState();
            (field_308, pEVar7, param_1)->TryKeepVisible();
        }
        if (param_3 != -1.0) {
            *(float*)field_308 = param_3;
        }
    }

    // 0x1003efdf0, 192 bytes, placed by class name
    // ObjStackEntity::CanRender() const
    ulong ObjStackEntity::CanRender() {
        bool bVar1;
        GraphNode* this_00;
        undefined1* puVar2;
        undefined1* puVar3;
        shared_ptr* this_01;
        undefined1* this_02;
        ulong uVar4;
        bool bVar5;

        if ((m_showObjStacks != '\0') && (field_305 != '\0')) {
            this_00 = (GraphNode*)GetNode();
            if ((float)this_00->GetTranslationY() != -1.0) {
                this_02 = &field_248;
                puVar2 = (undefined1*)this_02->HeapBeginPtr();
                puVar3 = (undefined1*)this_02->end();
                bVar5 = puVar2 == puVar3;
                if (!bVar5) {
                    bVar1 = ((puVar2 + 40))->operator_cast_to_bool();
                    if (!bVar1) {
                        this_01 = (shared_ptr*)(puVar2 + 184);
                        do {
                            bVar5 = &this_01[-3].field_8 == (long*)puVar3;
                            if (bVar5)
                                break;
                            bVar1 = shared_ptr::operator_cast_to_bool(this_01);
                            this_01 = this_01 + 9;
                        } while (!bVar1);
                    }
                }
                uVar4 = CONCAT71((int7)((ulong)this_02 >> 8), bVar5) ^ 1;
                goto LAB_1003efe2b;
            }
        }
        uVar4 = 0;
    LAB_1003efe2b:
        return uVar4 & 4294967295;
    }

    // 0x1003efeb0, 16 bytes, placed by class name
    // ObjStackEntity::CreateRenderingResources()
    void ObjStackEntity::CreateRenderingResources() {
        UpdateDisplayObjs(this);
    }

    // 0x1003efec0, 32 bytes, placed by class name
    // ObjStackEntity::DestroyRenderingResources()
    void ObjStackEntity::DestroyRenderingResources() {
        (&field_248)->clear();
    }

    // 0x1003efee0, 96 bytes, placed by class name
    // ObjStackEntity::ClearHighlighting()
    void ObjStackEntity::ClearHighlighting() {
        long lVar1;
        long lVar2;
        Model* this_00;

        lVar1 = (&field_248)->HeapBeginPtr();
        lVar2 = (&field_248)->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 144) {
            this_00 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)(lVar1 + 40));
            this_00->ClearHighlight();
        }
    }

    // 0x1004042c0, 192 bytes, placed by class name
    // ObjStackEntity::SortAllObjs()::$_0::operator()(ObjStackEntry const&, ObjStackEntry const&) const
    /* ObjStackEntity::SortAllObjs()::$_0::TEMPNAMEPLACEHOLDERVALUE(ObjStackEntry const&,
   ObjStackEntry const&) const */

    bool ObjStackEntity::SortAllObjs()::$_0::operator()(ObjStackEntry* param_1, ObjStackEntry* param_2) {
        bool bVar1;
        shared_ptr* this_00;
        shared_ptr* this_01;
        long lVar2;

        lVar2 = field_0;
        this_00 = game::ConfigProvider::GetConfig<game::ObjType>(*(ConfigProvider**)(lVar2 + 280), param_1->field_0,
                                                                 (DataStatus**)0);
        this_01 = game::ConfigProvider::GetConfig<game::ObjType>(*(ConfigProvider**)(lVar2 + 280), param_2->field_0,
                                                                 (DataStatus**)0);
        bVar1 = shared_ptr::operator_cast_to_bool(this_00);
        if (!bVar1) {
            bVar1 = shared_ptr::operator_cast_to_bool(this_01);
            if (bVar1) {
                return true;
            }
        }
        bVar1 = shared_ptr::operator_cast_to_bool(this_00);
        if (((bVar1) && (bVar1 = shared_ptr::operator_cast_to_bool(this_01), !bVar1)) ||
            ((bVar1 = shared_ptr::operator_cast_to_bool(this_00),
              !bVar1 && (bVar1 = shared_ptr::operator_cast_to_bool(this_01), !bVar1)))) {
            bVar1 = false;
        } else {
            lVar2 = param_1->GetObjEntrySortValue(this_00);
            bVar1 = param_2->GetObjEntrySortValue(this_01) < lVar2;
        }
        return bVar1;
    }

} // namespace jag
