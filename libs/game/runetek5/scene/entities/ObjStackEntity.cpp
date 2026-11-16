// libs/game/runetek5/scene/entities/ObjStackEntity.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ObjStackEntity.h"

namespace jag {
    // 0x100f38518
    int32_t ObjStackEntity::m_showObjStacks[4] = {1, 0, 0, 0};

    // 0x1039b4cb8
    bool ObjStackEntity::m_debugPrimitiveText;

    // 0x1039b4cb9
    bool ObjStackEntity::m_debugPrimitiveTextOnMouseover;

    // 0x1003ed230
    ObjStackEntity::ObjStackEntity(graphics::GraphNode* graphNode, const shared_ptr<game::World>& world,
                                   const game::ConfigProvider* configProvider, const game::CoordFine& coordFine)
        : game::Entity(graphNode, world, 3, coordFine.field_0), MakeSharedPool<ObjStackEntity, 256>() {
        field_8 = &PTR__ObjStackEntity_100efea20;
        field_208 = -1.0;
        new (&field_216) eastl::vector<ObjStackEntry>();
        new (&field_248) eastl::vector<ObjStackEntry>();
        field_280 = configProvider;
        float fVar1 = coordFine.field_4;
        float fVar2 = coordFine.field_8;
        float fVar3 = coordFine.field_12;
        field_288 = coordFine.field_0;
        field_292 = fVar1;
        field_296 = fVar2;
        field_300 = fVar3;
        field_304 = '\0';
        field_305 = 0;
        new (field_308) game::EntityHighlightState();
        if (field_280 == nullptr) {
            LogAssert("m_configProvider != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/ObjStackEntity.cpp",
                      58, nullptr);
        }
        field_216.reserve(64);
        field_248.reserve(4);
        graphNode->SetTranslation(coordFine.field_4);
        SetHeight();
        SetNDCProjectionTestEnabled(false);
    }

    // 0x1003ed440
    void ObjStackEntity::SetHeight() {
        int iVar2;
        GraphNode* this_02;
        uint64_t* puVar4;
        shared_ptr<game::World>* psVar5;
        World* pWVar6;
        shared_ptr* this_03;
        LinkMap* linkMap;
        int iVar7;
        int iVar8;
        uint64_t local_38;
        float local_30;
        float local_2c;

        auto this_00 = GetNode();
        if (((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)GetWorld())->end() != 0) {
            this_02 = (GraphNode*)field_56.operator->();
            puVar4 = (uint64_t*)this_02->GetWorldTranslation();
            local_38 = *puVar4;
            local_30 = *(float*)(puVar4 + 1);
            psVar5 = (shared_ptr<game::World>*)GetWorld();
            pWVar6 = (World*)(*psVar5).operator->();
            this_03 = (shared_ptr*)pWVar6->GetClosestMapSquare(local_38);
            if (shared_ptr::operator_cast_to_bool(this_03)) {
                if (((MapSquare*)(*this_03).operator->())->IsTerrainBuilt()) {
                    local_2c = (float)GetAbsoluteFloorHeight(0, 0, 2);
                    this_00->SetTranslationY(local_2c);
                    if (local_2c == -1.0) {
                        return;
                    }
                    iVar8 = (int)(float)local_38;
                    iVar7 = (int)local_30;
                    psVar5 = (shared_ptr<game::World>*)GetWorld();
                    pWVar6 = (World*)(*psVar5).operator->();
                    linkMap = pWVar6->GetLinkMap();
                    iVar2 = GetDuration();
                    iVar2 =
                        game::RemoveRoof::CalculateMaxRemoveRoofLevel(*linkMap, iVar2, iVar8 >> 7, iVar7 >> 7, 1, 1);
                    SetMaximumRemoveRoofLevel(iVar2);
                    goto LAB_1003ed570;
                }
            }
        }
        this_00->SetTranslationY(-1.0);
    LAB_1003ed570:
        field_208 = -1.0;
    }

    // 0x1003ed5b0
    ObjStackEntity::~ObjStackEntity() {
        field_8 = &PTR__ObjStackEntity_100efea20;
        Destruct();
        field_248.~vector();
        field_216.~vector();
        field_192.~enable_shared_from_this();
    }

    // 0x1003ed690
    void ObjStackEntity::AddObj(unsigned int arg1, unsigned int arg2) {
        unsigned int local_18;
        unsigned int local_14;

        _local_18 = (((uint64_t)arg2 << 32) | (uint32_t)arg1);
        field_216.emplace_back<unsigned int&, unsigned int&>(local_18, local_14);
        field_304 = '\0';
        SortAllObjs();
    }

    // 0x1003ed760
    void ObjStackEntity::SortAllObjs() {
        uint8_t* this_00;
        ConfigProvider* this_01;
        __0 in_RAX;
        ObjStackEntry* objStackEntry1;
        ObjStackEntry* objStackEntry2;
        long lVar2;
        int* piVar3;
        shared_ptr* this_02;

        if (field_304 == '\0') {
            if (field_280 == nullptr) {
                LogAssert("m_configProvider != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "entities/ObjStackEntity.cpp",
                          276, nullptr);
            }
            this_00 = &field_216;
            objStackEntry1 = (ObjStackEntry*)this_00->HeapBeginPtr();
            objStackEntry2 = (ObjStackEntry*)this_00->end();
            eastl::sort<ObjStackEntry*, ObjStackEntity::SortAllObjs()::__0>(objStackEntry1, objStackEntry2, in_RAX);
            this_01 = field_280;
            lVar2 = this_00->size();
            piVar3 = (int*)(*this_00)[lVar2 - 1];
            this_02 = (shared_ptr*)this_01->GetConfig<game::ObjType>(*piVar3, nullptr);
            if (shared_ptr::operator_cast_to_bool(this_02) != '\0') {
                field_304 = '\x01';
            }
            UpdateDisplayObjs();
        }
    }

    // 0x1003ed820
    void ObjStackEntity::DelObj(unsigned int arg1) {
        ObjStackEntry* objStackEntry;

        uint8_t* this_00 = &field_216;
        auto pOVar1 = this_00->end();
        objStackEntry = (ObjStackEntry*)this_00->HeapBeginPtr();
        while (true) {
            if (objStackEntry == pOVar1) {
                return;
            }
            if (objStackEntry->field_0 == arg1)
                break;
            objStackEntry = (ObjStackEntry*)objStackEntry[1].field_8;
        }
        this_00->erase(objStackEntry);
        UpdateDisplayObjs();
    }

    // 0x1003ed8e0
    void ObjStackEntity::UpdateDisplayObjs() {
        uint8_t* this_00;
        unsigned int uVar1;
        ObjStackEntry* objStackEntry;
        ObjStackEntry* pOVar3;
        ObjStackEntry* objStackEntry_00;
        unsigned int uVar4;
        ObjStackEntry* pOVar5;
        unsigned int uVar6;

        auto this_01 = GetWorld();
        if (shared_ptr::operator_cast_to_bool(this_01) != '\0') {
            this_00 = &field_248;
            this_00->clear();
            objStackEntry = (ObjStackEntry*)field_216.HeapBeginPtr();
            pOVar3 = (ObjStackEntry*)field_216.end();
            if (objStackEntry == pOVar3) {
                objStackEntry_00 = nullptr;
            } else {
                uVar4 = 4294967295;
                uVar6 = 4294967295;
                pOVar5 = nullptr;
                do {
                    uVar1 = objStackEntry->field_0;
                    if (uVar4 == 4294967295) {
                        this_00->emplace_back<ObjStackEntry const&>(*objStackEntry);
                        uVar4 = uVar1;
                    }
                    if ((uVar6 == 4294967295) && (uVar6 = 4294967295, uVar1 != uVar4)) {
                        this_00->emplace_back<ObjStackEntry const&>(*objStackEntry);
                        uVar6 = uVar1;
                    }
                    objStackEntry_00 = objStackEntry;
                    if (uVar1 == uVar6) {
                        objStackEntry_00 = pOVar5;
                    }
                    if (uVar1 == uVar4) {
                        objStackEntry_00 = pOVar5;
                    }
                    objStackEntry = (ObjStackEntry*)objStackEntry[1].field_8;
                    pOVar5 = objStackEntry_00;
                } while (objStackEntry != pOVar3);
            }
            if (objStackEntry_00 != nullptr) {
                this_00->emplace_back<ObjStackEntry const&>(*objStackEntry_00);
            }
            field_208 = -1.0;
        }
    }

    // 0x1003eda00
    void ObjStackEntity::AdjustCount(unsigned int arg1, unsigned int arg2, unsigned int arg3) {
        auto puVar1 = field_216.HeapBeginPtr();
        auto puVar2 = field_216.end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 36) {
            if ((*puVar1 == arg1) && (puVar1[1] == arg2)) {
                puVar1[1] = arg3;
                field_304 = '\0';
            }
        }
    }

    // 0x1003edaa0
    uint64_t ObjStackEntity::Build(graphics::RT7Core& rt7Core, game::AssetBuilder& assetBuilder) {
        BuildRequest<graphics::Model, game::BuildModelMain>* this_00;
        ObjStackEntity* this_01;
        unsigned int arg1;
        GraphNode* this_05;
        shared_ptr* this_06;
        shared_ptr<graphics::Model>* this_08;
        ModelCopyType* modelCopyType;
        bool bVar5;
        uint8_t local_60[16];
        uint32_t local_34;

        auto plVar2 = GraphicsApp::Instance();
        bool cVar1 = (**(void (**)(...))(*plVar2 + 224))(plVar2);
        if (!cVar1) {
            LogAssert("GraphicsApp::Instance()->IsInsideMainLogic()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/ObjStackEntity.cpp",
                      157, nullptr);
        }
        SortAllObjs();
        auto this_02 = GetWorld();
        auto this_03 = this_02->end();
        if (this_03 == nullptr) {
            LogAssert("world != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/ObjStackEntity.cpp",
                      161, nullptr);
        }
        auto this_04 = GetNode();
        cVar1 = this_04->IsAttached();
        if (!cVar1) {
            this_05 = this_03->GetRootNode();
            if (this_05 == nullptr) {
                LogAssert("rootNode != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "entities/ObjStackEntity.cpp",
                          168, nullptr);
            }
            this_05->AddChild(this_04);
        }
        if ((float)this_04->GetTranslationY() == -1.0) {
            SetHeight();
        }
        auto piVar3 = field_248.HeapBeginPtr();
        auto piVar4 = field_248.end();
        if (piVar3 != piVar4) {
            bVar5 = false;
            do {
                this_00 = (BuildRequest<graphics::Model, game::BuildModelMain>*)(piVar3 + 2);
                cVar1 = this_00->IsTaskDone();
                if (!cVar1) {
                LAB_1003edc14:
                    this_06 = (shared_ptr*)field_280->GetConfig<game::ObjType>(*piVar3, nullptr);
                    cVar1 = shared_ptr::operator_cast_to_bool(this_06);
                    if (cVar1) {
                        ((ObjType*)(*this_06).operator->())
                            ->GetStackModel(rt7Core, assetBuilder, *this_00, (unsigned long)(unsigned int)piVar3[1],
                                            nullptr);
                    }
                } else {
                    cVar1 = this_00->IsEmpty();
                    if (cVar1)
                        goto LAB_1003edc14;
                    cVar1 = ((piVar3 + 10))->operator_cast_to_bool();
                    if (!cVar1) {
                        this_08 = (shared_ptr<graphics::Model>*)this_00->SSOBeginPtr();
                        modelCopyType = (ModelCopyType*)**this_08;
                        local_34 = 2;
                        MakeSharedPool<graphics::Model, 3072>::MakeShared<graphics::Model&, graphics::ModelCopyType>(
                            (Model*)local_60, modelCopyType);
                        (*((piVar3 + 10))) = *local_60;
                    }
                }
                cVar1 = ((piVar3 + 10))->operator_cast_to_bool();
                this_01 = this;
                if (cVar1) {
                    bVar5 = true;
                }
                piVar3 = piVar3 + 36;
            } while (piVar3 != piVar4);
            if (bVar5) {
                arg1 = ((GraphicsApp*)GraphicsApp::Instance())->GetLogicTick();
                UpdateHighlighting(this_01, arg1);
            }
        }
        return 1;
    }

    // 0x1003edf40
    void ObjStackEntity::UpdateHighlighting(unsigned int arg1) {
        bool cVar2;
        shared_ptr<game::World>* this_02;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_03;
        SceneManager* this_04;
        EntityHighlightGlobalState* this_05;
        EntityHighlightVisualConfig* this_06;
        long lVar5;
        float arg2;
        float local_58[4];
        Vector4T<float> local_48;

        uint8_t* this_00 = &field_248;
        long lVar3 = this_00->HeapBeginPtr();
        long lVar4 = this_00->end();
        EntityHighlightType entityHighlightType = (EntityHighlightType)(unsigned long)arg1;
        bool bVar1 = false;
        if (lVar3 != lVar4) {
            do {
                lVar5 = lVar3 + 144;
                cVar2 = ((lVar3 + 40))->operator_cast_to_bool();
                entityHighlightType = (EntityHighlightType)(unsigned long)arg1;
                bVar1 = false;
                if (!cVar2)
                    break;
                lVar3 = lVar5;
                bVar1 = true;
            } while (lVar5 != lVar4);
            bVar1 = !bVar1;
        }
        cVar2 = (GetWorld())->operator_cast_to_bool();
        if ((cVar2) && (!bVar1)) {
            this_02 = (shared_ptr<game::World>*)GetWorld();
            this_03 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                 eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                 eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)(*this_02)
                          .operator->();
            this_04 = (SceneManager*)this_03->size();
            this_05 = (EntityHighlightGlobalState*)this_04->GetEntityHighlightGlobalState();
            cVar2 = this_05->IsEnabled();
            if (cVar2) {
                this_06 = (EntityHighlightVisualConfig*)6->GetDefault(entityHighlightType);
                if (this_06->field_0 == 2) {
                    new (field_308) oldscape::ServerConnectionWorkItem(arg1);
                }
                arg2 = (float)FrameTime::GetFrameDelta();
                field_308->Update(*this_05, arg2, arg1);
                new (local_58) game::EntityHighlightVisualData();
                cVar2 = this_06->Evaluate(*field_308, *this_05, *local_58, 1.0);
                if (cVar2) {
                    lVar3 = this_00->HeapBeginPtr();
                    lVar4 = this_00->end();
                    if (lVar3 != lVar4) {
                        do {
                            ((Model*)(*((lVar3 + 40))).operator->())->SetHighlight(local_58[0], local_48);
                            lVar3 = lVar3 + 144;
                        } while (lVar3 != lVar4);
                    }
                    goto LAB_1003ee0df;
                }
            }
            ClearHighlighting();
        }
    LAB_1003ee0df:
    }

    // 0x1003ee110
    void ObjStackEntity::Destruct() {
        field_248.clear();
        field_216.clear();
        GetNode()->Detach();
        field_176.reset();
        field_208 = -1.0;
        field_305 = 0;
    }

    // 0x1003ee1a0
    void ObjStackEntity::IsEmpty() const {
        field_216.empty();
    }

    // 0x1003ee2b0
    uint8_t ObjStackEntity::Contains(unsigned int arg1) {
        unsigned int uVar1;

        auto puVar3 = field_216.HeapBeginPtr();
        auto puVar2 = field_216.end();
        bool bVar4 = puVar3 == puVar2;
        if (!bVar4) {
            uVar1 = *puVar3;
            while (uVar1 != arg1) {
                puVar3 = puVar3 + 36;
                bVar4 = puVar3 == puVar2;
                if (bVar4)
                    break;
                uVar1 = *puVar3;
            }
        }
        return bVar4 ^ 1;
    }

    // 0x1003ee330
    void ObjStackEntity::MainLogic(graphics::RT7Core& rt7Core, unsigned int arg2,
                                   const math::Matrix44T<float>& matrix44) {
        void result;
        shared_ptr* this_00;
        bool cVar2;
        uint8_t bVar3;
        int iVar4;
        int* piVar6;
        Model* pMVar7;
        Matrix44T<float>* matrix44_00;
        shared_ptr* psVar8;
        ObjType* pOVar9;
        NXTPixToolkit* this_03;
        AABB* aabb;
        shared_ptr<game::World>* this_04;
        IrradianceEffect* midiPlayerMainThread;
        IrradianceEffect* this_05;
        int iVar10;
        int iVar11;
        ReturnValue result;
        IrradianceSHCoefConsts local_118;
        Matrix44T<float> local_a0;
        ReturnValue local_78;
        GraphNode* local_70;
        World* local_68;
        ReturnValue local_60;
        float local_54;
        float local_50;
        uint32_t local_4c;
        float local_48;
        HeightMap* local_40;
        bool local_31;

        auto this_01 = GetWorld();
        auto pWVar5 = this_01->end();
        if (pWVar5 == nullptr) {
            LogAssert("world",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/ObjStackEntity.cpp",
                      332, nullptr);
        }
        auto this_02 = GetNode();
        float fVar12 = (float)this_02->GetTranslationY();
        if (fVar12 == -1.0) {
            SetHeight();
            fVar12 = (float)this_02->GetTranslationY();
            if (fVar12 == -1.0)
                goto LAB_1003ee3db;
            field_208 = -1.0;
        }
        fVar12 = (float)GetAbsoluteFloorHeight(64, 64, 2);
        if (fVar12 != -1.0) {
            if (field_305 == '\0') {
                local_31 = true;
            } else {
                local_31 = fVar12 != field_208;
            }
            field_208 = fVar12;
            field_305 = 0;
            local_70 = this_02;
            local_68 = pWVar5;
            local_78 = field_248.rend();
            local_60 = field_248.rbegin();
            if (!(local_60 != local_78)) {
                return;
            }
            do {
                piVar6 = (int*)*local_60;
                this_00 = (shared_ptr*)(piVar6 + 10);
                cVar2 = shared_ptr::operator_cast_to_bool(this_00);
                if (!cVar2) {
                    field_208 = -1.0;
                } else {
                    pMVar7 = (Model*)(*this_00).operator->();
                    cVar2 = pMVar7->IsLoaded();
                    if (!cVar2) {
                        LogAssert("model->IsLoaded()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "scene/entities/ObjStackEntity.cpp",
                                  376, nullptr);
                    }
                    if (local_31 != false) {
                        matrix44_00 = local_70->GetWorldTransformationMatrix();
                        &result = (ReturnValue*)(piVar6 + 16);
                        result = *matrix44_00;
                        psVar8 = (shared_ptr*)field_280->GetConfig<game::ObjType>(*piVar6, nullptr);
                        cVar2 = shared_ptr::operator_cast_to_bool(psVar8);
                        if (!cVar2) {
                        LAB_1003ee62c:
                            new (&local_50) math::Vector3T();
                            local_50 = 64.0;
                            local_48 = 64.0;
                            local_4c = GetRelativeFloorHeight(64, 64, 2);
                            result = math::Matrix44T<float>::Translate(local_50);
                        } else {
                            pOVar9 = (ObjType*)(*psVar8).operator->();
                            cVar2 = pOVar9->HasRandomPosition();
                            if (!cVar2)
                                goto LAB_1003ee62c;
                            fVar12 = (float)math::FRand(1.0);
                            local_40._0_4_ = fVar12;
                            fVar12 = (float)math::FRand(1.0);
                            local_40 = (HeightMap*)(((uint64_t)local_40._4_4_ << 32) |
                                                    (uint32_t)(local_40._0_4_ * 32.0 + 48.0));
                            local_54 = fVar12 * 32.0 + 48.0;
                            new (&local_50) math::Vector3T();
                            local_50 = local_40._0_4_;
                            local_48 = local_54;
                            local_4c = GetRelativeFloorHeight((int)local_40._0_4_, (int)local_54, 2);
                            result = math::Matrix44T<float>::Translate(local_50);
                            fVar12 = (float)math::FRand(1.0);
                            math::Matrix33RotationY<float>(fVar12 * 6.2831855f - 3.1415927f);
                            local_118* local_a0;
                            result = local_118;
                        }
                        fVar12 = (float)GetAbsoluteFloorHeight(64, 64, 0);
                        if (fVar12 == field_208) {
                            local_40 = local_68->GetHeightMap();
                            iVar4 = GetHeightMapLevel();
                            this_03 = (NXTPixToolkit*)(*this_00).operator->();
                            aabb = (AABB*)this_03->GetScreen();
                            cVar2 = local_40->ApplyHillRotation(iVar4, *aabb, result, 0);
                            if (!cVar2) {
                                field_305 = 0;
                                field_208 = -1.0;
                                return;
                            }
                        }
                        piVar6[29] = (int)((float)piVar6[29] + 15.0);
                    }
                    if (piVar6[32] == 2) {
                        psVar8 = (shared_ptr*)field_280->GetConfig<game::ObjType>(*piVar6, nullptr);
                        cVar2 = shared_ptr::operator_cast_to_bool(psVar8);
                        if (cVar2) {
                            pOVar9 = (ObjType*)(*psVar8).operator->();
                            bVar3 = pOVar9->CastsShadows();
                            piVar6[32] = (unsigned int)(bVar3 ^ 1);
                        }
                    }
                    this_04 = (shared_ptr<game::World>*)GetWorld();
                    pWVar5 = (World*)(*this_04).operator->();
                    iVar10 = (int)(float)piVar6[28];
                    iVar4 = iVar10 + 8191;
                    if (-1 < iVar10) {
                        iVar4 = iVar10;
                    }
                    iVar11 = (int)(float)piVar6[30];
                    iVar10 = iVar11 + 8191;
                    if (-1 < iVar11) {
                        iVar10 = iVar11;
                    }
                    midiPlayerMainThread = (IrradianceEffect*)pWVar5->GetMapSquare(iVar4 >> 13, iVar10 >> 13);
                    this_05 = midiPlayerMainThread;
                    if (*midiPlayerMainThread != nullptr) {
                        pMVar7 = (Model*)(*this_00).operator->();
                        this_05 = (IrradianceEffect*)pMVar7->GetIrradianceEffect();
                        local_118 = ((MapSquare*)(*midiPlayerMainThread).operator->())->GetIrradianceSHConsts();
                        this_05->SetCoefficients(local_118);
                    }
                    ((ModelUpdateManager*)this_05->Instance())->AddToUpdateList(*this_00);
                    field_305 = 1;
                }
                ++local_60;
                if (!(local_60 != local_78)) {
                    return;
                }
            } while (true);
        }
    LAB_1003ee3db:
        field_305 = 0;
    }

    // 0x1003ef080
    void ObjStackEntity::GatherDrawableElements(graphics::DrawableQueue& drawableQueue, graphics::RT7Core& rt7Core,
                                                const math::Matrix44T<float>& matrix44,
                                                const graphics::SceneViewData& sceneViewData,
                                                const graphics::EffectManager& effectManager) {
        shared_ptr* this_00;
        shared_ptr<game::World>* this_01;
        bool bVar2;
        int arg1;
        int arg2;
        int arg3;
        long lVar3;
        Model* pMVar4;
        World* pWVar5;
        RemoveRoof* this_02;
        vector<ObjStackEntry>* this_03;
        CoordGrid local_b0;
        ReturnValue local_a0;
        uint64_t local_98[2];
        shared_ptr<game::World>* local_88;
        Matrix44T<float>* local_80;
        uint8_t local_60[24];
        vector<ObjStackEntry>* local_40;
        uint8_t local_31;

        ObjStackEntity* pOVar6 = this;
        char cVar1 = CanRender();
        if ((cVar1) && (cVar1 = FilterRenderPasses(pOVar6, sceneViewData), cVar1)) {
            local_88 = (shared_ptr<game::World>*)GetWorld();
            local_60._16_8_ = sceneViewData;
            local_31 = sceneViewData.HasShadowPass();
            this_03 = (vector<ObjStackEntry>*)&field_248;
            local_a0 = this_03->rbegin();
            *local_60 = this_03->rend();
            bVar2 = local_a0 != *local_60;
            if (bVar2) {
                local_31 = local_31 ^ 1;
                local_40 = this_03;
                do {
                    lVar3 = *local_a0;
                    this_00 = (shared_ptr*)(lVar3 + 40);
                    cVar1 = shared_ptr::operator_cast_to_bool(this_00);
                    if (cVar1) {
                        pMVar4 = (Model*)(*this_00).operator->();
                        cVar1 = pMVar4->IsLoaded();
                        if (!cVar1) {
                            LogAssert("displayObj.m_model->IsLoaded()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/scene/entities/ObjStackEntity.cpp",
                                      495, nullptr);
                        }
                        local_60._0_8_ = ((lVar3 + 64))->GetPos();
                        bVar2 = *local_60 == *PTR_ZERO_100ee66e8;
                        if ((!bVar2) && ((*(int*)(lVar3 + 128) == 0 | local_31) == 1)) {
                            local_80 = (Matrix44T<float>*)(lVar3 + 64);
                            local_98[0] = ((lVar3 + 112))->GetXYZ();
                            this_01 = local_88;
                            pWVar5 = (World*)(*local_88).operator->();
                            cVar1 = pWVar5->IsRemoveRoofSelective();
                            pOVar6 = this;
                            if (!cVar1) {
                                arg1 = GetDuration();
                                arg2 = pOVar6->GetWrapMode();
                                pWVar5 = (World*)(*this_01).operator->();
                                arg3 = pWVar5->GetMaxRenderLevel();
                                cVar1 = game::LinkConstants::IsAffectedByMaxRenderLevel(arg1, arg2, arg3);
                                this_03 = local_40;
                            } else {
                                pWVar5 = (World*)(*this_01).operator->();
                                this_02 = (RemoveRoof*)pWVar5->GetRemoveRoof();
                                cVar1 = this_02->AnyRoofRemoved();
                                if (cVar1) {
                                    new (local_60) game::CoordFine(field_68, local_98);
                                    local_b0 = game::CoordGrid(local_60);
                                    cVar1 = this_02->IsRoofRemoved(local_b0);
                                    this_03 = local_40;
                                    if (cVar1)
                                        goto joined_r0x0001003ef31a;
                                }
                                cVar1 = '\0';
                                this_03 = local_40;
                            }
                        joined_r0x0001003ef31a:
                            local_40 = this_03;
                            if (!cVar1) {
                                pMVar4 = (Model*)(*this_00).operator->();
                                pMVar4->SetWorldTransform(*local_80);
                                pMVar4 = (Model*)(*this_00).operator->();
                                pMVar4->GatherDrawableElements(drawableQueue, rt7Core, *local_60._16_8_, effectManager);
                            }
                        }
                    }
                    ++local_a0;
                    *local_60 = this_03->rend();
                    bVar2 = local_a0 != *local_60;
                } while (bVar2);
            }
            DebugPrimitiveOutput(*local_60._16_8_);
        }
    }

    // 0x1003ef360
    unsigned long ObjStackEntity::FilterRenderPasses(const graphics::SceneViewData& sceneViewData) {
        unsigned long uVar2;

        if (sceneViewData.HasShadowPass() == '\0') {
            uVar2 = sceneViewData.HasRenderPass(2);
            uVar2 = uVar2 ^ 1;
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x1003ef3c0
    void ObjStackEntity::DebugPrimitiveOutput(const graphics::SceneViewData& sceneViewData) {
        uint8_t* this_00;
        float fVar1;
        float fVar2;
        bool cVar3;
        bool bVar4;
        unsigned int* puVar5;
        shared_ptr* this_01;
        float* pfVar6;
        Mouse* pMVar7;
        uint64_t uVar8;
        long* plVar9;
        char* str;
        eastl::string local_1c0;
        uint8_t local_198[16];
        ReturnValue local_188;
        uint64_t local_180[2];
        int local_168;
        float local_164;
        ReturnValue local_160;

        ObjStackEntity* local_170 = this;
        if (m_debugPrimitiveText == '\0') {
            if (m_debugPrimitiveTextOnMouseover == '\0')
                goto LAB_1003ef6ed;
            cVar3 = PickTestDebugCursor();
            if (!cVar3)
                goto LAB_1003ef6ed;
        }
        cVar3 = sceneViewData.HasRenderPass(4);
        if (cVar3) {
            this_00 = &local_170->field_248;
            local_188 = this_00->rbegin();
            local_198._8_8_ = this_00;
            local_160 = this_00->rend();
            bVar4 = local_188 != local_160;
            if (bVar4) {
                local_168 = 0;
                do {
                    puVar5 = (unsigned int*)*local_188;
                    local_160[0] = (ReturnValue)((puVar5 + 16))->GetPos();
                    bVar4 = local_160 == *PTR_ZERO_100ee66e8;
                    if (!bVar4) {
                        local_180[0] = ((puVar5 + 28))->GetXYZ();
                        local_160 = eastl::fixed_string<char, 256>();
                        this_01 = (shared_ptr*)local_170->field_280->GetConfig<game::ObjType>(*puVar5, nullptr);
                        local_164 = (float)*puVar5;
                        pfVar6 = (float*)local_180->SSOBeginPtr();
                        fVar1 = *pfVar6;
                        pfVar6 = (float*)local_180->second();
                        fVar2 = *pfVar6;
                        cVar3 = shared_ptr::operator_cast_to_bool(this_01);
                        if (cVar3) {
                            pMVar7 = (Mouse*)(*this_01).operator->();
                            cVar3 = ((basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)
                                         pMVar7->GetScaledMousePosition())
                                        ->empty();
                            if (!cVar3) {
                                pMVar7 = (Mouse*)(*this_01).operator->();
                                pMVar7->GetScaledMousePosition();
                                uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                local_160.sprintf("[OBJSTACK] [%d,%d] %d(%s)",
                                                  (unsigned long)((int)(fVar1 * 0.0078125f) & 63),
                                                  (unsigned long)((int)(fVar2 * 0.0078125f) & 63),
                                                  (unsigned long)(unsigned int)local_164, uVar8);
                                goto LAB_1003ef60c;
                            }
                        }
                        local_160.sprintf("[OBJSTACK] [%d,%d] %d", (unsigned long)((int)(fVar1 * 0.0078125f) & 63),
                                          (unsigned long)((int)(fVar2 * 0.0078125f) & 63),
                                          (unsigned long)(unsigned int)local_164);
                    LAB_1003ef60c:
                        local_164 = (float)local_168;
                        pfVar6 = (float*)local_180->y();
                        *pfVar6 = local_164 + *pfVar6;
                        plVar9 = DebugPrimitiveCollectorBasic::GetCollector("");
                        if (plVar9 != nullptr) {
                            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            local_1c0 = eastl::string(str);
                            new (local_198) oldscape::sidebars::SideBarData(-5197569, 1);
                            (**(void (**)(...))(*plVar9 + 136))(plVar9, local_180, &local_1c0, (SideBarData*)local_198);
                        }
                        local_168 = local_168 + 50;
                    }
                    ++local_188;
                    local_160 = local_198._8_8_->rend();
                    bVar4 = local_188 != local_160;
                } while (bVar4);
            }
        }
    LAB_1003ef6ed:
    }

    // 0x1003ef750
    void ObjStackEntity::AddPickableEntity(game::World& world, const math::Matrix44T<float>& matrix44) {
        shared_ptr* this_00;
        uint64_t this_01;
        CommandLine* this_03;
        int iVar2;
        int arg4;
        unsigned int uVar3;
        long lVar4;
        long lVar5;
        NXTPixToolkit* this_04;
        AABB* pAVar6;
        SceneManager* pSVar7;
        Minimap* this_06;
        GraphNode* pGVar8;
        Matrix44T<float>* pMVar9;
        shared_ptr<game::World>* this_07;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_08;
        CoordMapSquare* pCVar10;
        float* pfVar11;
        long* plVar12;
        char* str;
        AABB local_208;
        Vector2T<int> local_1e0;
        uint64_t local_1d8[2];
        uint8_t local_1c0[16];
        uint64_t local_1b0[4];
        Capsule2D* local_188;
        Matrix44T<float>* local_180;
        CommandLine* local_178;
        AABB local_168;

        bool cVar1 = CanRender();
        if (cVar1) {
            local_208 = math::AABB();
            local_1c0._8_8_ = this;
            lVar4 = field_248.HeapBeginPtr();
            lVar5 = field_248.end();
            if (lVar4 != lVar5) {
                do {
                    this_00 = (shared_ptr*)(lVar4 + 40);
                    cVar1 = shared_ptr::operator_cast_to_bool(this_00);
                    if (cVar1) {
                        cVar1 = ((Model*)(*this_00).operator->())->IsLoaded();
                        if (!cVar1) {
                            LogAssert("displayObj.m_model->IsLoaded()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/scene/entities/ObjStackEntity.cpp",
                                      550, nullptr);
                        }
                        this_04 = (NXTPixToolkit*)(*this_00).operator->();
                        pAVar6 = (AABB*)this_04->GetScreen();
                        local_168 = math::AABB(*pAVar6);
                        local_168.Transform(*((lVar4 + 64)));
                        local_208.Union(local_168);
                    }
                    lVar4 = lVar4 + 144;
                } while (lVar4 != lVar5);
            }
            pSVar7 = (SceneManager*)world.size();
            this_06 = (Minimap*)pSVar7->GetGameSceneRect();
            this_01 = local_1c0._8_8_;
            local_188 = (Capsule2D*)(local_1c0._8_8_ + 76);
            local_180 = world.GetLastCameraProjectionMatrix();
            local_178 = (CommandLine*)world.GetLastViewProjectionMatrix();
            iVar2 = this_06->GetPos();
            arg4 = this_06->GetLevel();
            pGVar8 = this_01->GetNode();
            pAVar6 = (AABB*)pGVar8->GetWorldAABB();
            local_188->FillFromAABB(*local_180, *local_178, iVar2, arg4, *pAVar6);
            local_188 = (Capsule2D*)world.GetLastCameraViewMatrix();
            local_180 = world.GetLastCameraProjectionMatrix();
            pMVar9 = world.GetLastViewProjectionMatrix();
            iVar2 = this_06->GetPos();
            uVar3 = this_06->GetLevel();
            local_178 = (CommandLine*)(this_01 + 100);
            cVar1 = math::Sphere2D::Set(*((this_01 + 100)), *local_188, *local_180, (int)pMVar9, iVar2,
                                        *((AABB*)(unsigned long)uVar3));
            local_1b0[0] = matrix44.GetPos();
            local_168[0]._0_8_ = math::operator-((Vector3T<float>*)local_1b0);
            local_208.Translate(local_168);
            this_01->SetAABB(local_208);
            if (cVar1) {
                if (game::World::m_debugPicking != '\0') {
                    local_1e0 = math::Vector2T();
                    this_07 = (shared_ptr<game::World>*)this_01->GetWorld();
                    this_08 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                         eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                         eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                         true>*)(*this_07)
                                  .operator->();
                    pSVar7 = (SceneManager*)this_08->size();
                    pCVar10 = (CoordMapSquare*)pSVar7->GetGameSceneRect();
                    iVar2 = pCVar10->GetX();
                    this_03 = local_178;
                    (matrix44)._0_4_ = (float)iVar2;
                    iVar2 = ((CoordMapSquare*)local_178->SSOBeginPtr())->GetX();
                    (matrix44)._0_4_ = (float)iVar2 + (matrix44)._0_4_;
                    pfVar11 = (float*)local_1e0.SSOBeginPtr();
                    *pfVar11 = (matrix44)._0_4_;
                    iVar2 = pCVar10->GetZ();
                    (matrix44)._0_4_ = (float)iVar2;
                    pCVar10 = (CoordMapSquare*)this_03->SSOBeginPtr();
                    iVar2 = pCVar10->GetZ();
                    (matrix44)._0_4_ = (float)iVar2 + (matrix44)._0_4_;
                    pfVar11 = (float*)local_1e0.y();
                    *pfVar11 = (matrix44)._0_4_;
                    iVar2 = this_03->GetPos();
                    plVar12 = DebugPrimitiveCollectorBasic::GetCollector("");
                    if (plVar12 != nullptr) {
                        (matrix44)._0_4_ = (float)iVar2;
                        local_168 = oldscape::sidebars::SideBarData(1073807104, 0);
                        (**(void (**)(...))(*plVar12 + 160))((matrix44)._0_4_, plVar12, &local_1e0, 1, &local_168);
                    }
                    local_168 = eastl::fixed_string<char, 256>();
                    local_168.sprintf("Pick[ObjStackEntity]");
                    plVar12 = DebugPrimitiveCollectorBasic::GetCollector("");
                    if (plVar12 != nullptr) {
                        pGVar8 = this_01->GetNode();
                        pAVar6 = (AABB*)pGVar8->GetWorldAABB();
                        local_1d8[0] = pAVar6->GetCentrePos();
                        str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        new (local_1b0) eastl::string(str);
                        new (local_1c0) oldscape::sidebars::SideBarData(-16711936, 0);
                        (**(void (**)(...))(*plVar12 + 136))(plVar12, local_1d8, local_1b0, local_1c0);
                    }
                }
                local_1b0->shared_from_this();
                local_168.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(*local_1b0);
                world.AddPickableEntity(local_168);
            }
        }
    }

    // 0x1003efd00
    void ObjStackEntity::NotifyPickable(unsigned int arg1, bool arg2, float arg3) {
        shared_ptr<game::World>* psVar3;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar4;
        SceneManager* pSVar5;
        EntityHighlightGlobalState* pEVar6;

        auto piVar2 = 6->GetDefault(arg1);
        if (*piVar2 != 2) {
            if (*piVar2 != 1) {
                return;
            }
            if (!((GetWorld())->operator_cast_to_bool())) {
                return;
            }
            psVar3 = (shared_ptr<game::World>*)GetWorld();
            phVar4 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)(*psVar3)
                         .operator->();
            pSVar5 = (SceneManager*)phVar4->size();
            pEVar6 = (EntityHighlightGlobalState*)pSVar5->GetEntityHighlightGlobalState();
            if (!(pEVar6->IsRadialHighlightActive())) {
                return;
            }
        }
        if (arg2) {
            new (field_308) oldscape::ServerConnectionWorkItem(arg1);
        } else {
            psVar3 = (shared_ptr<game::World>*)GetWorld();
            phVar4 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)(*psVar3)
                         .operator->();
            pSVar5 = (SceneManager*)phVar4->size();
            pEVar6 = (EntityHighlightGlobalState*)pSVar5->GetEntityHighlightGlobalState();
            field_308->TryKeepVisible(*pEVar6, arg1);
        }
        if (arg3 != -1.0) {
            *(float*)field_308 = arg3;
        }
    }

    // 0x1003efdf0
    unsigned long ObjStackEntity::CanRender() const {
        bool cVar1;
        GraphNode* this_00;
        uint8_t* puVar2;
        uint8_t* puVar3;
        shared_ptr* this_01;
        uint8_t* this_02;
        unsigned long uVar4;
        bool bVar5;

        if ((m_showObjStacks != '\0') && (field_305 != '\0')) {
            this_00 = GetNode();
            if ((float)this_00->GetTranslationY() != -1.0) {
                this_02 = &field_248;
                puVar2 = (uint8_t*)this_02->HeapBeginPtr();
                puVar3 = (uint8_t*)this_02->end();
                bVar5 = puVar2 == puVar3;
                if (!bVar5) {
                    cVar1 = ((puVar2 + 40))->operator_cast_to_bool();
                    if (!cVar1) {
                        this_01 = (shared_ptr*)(puVar2 + 184);
                        do {
                            bVar5 = &this_01[-3].field_8 == (long*)puVar3;
                            if (bVar5)
                                break;
                            cVar1 = shared_ptr::operator_cast_to_bool(this_01);
                            this_01 = this_01 + 9;
                        } while (!cVar1);
                    }
                }
                uVar4 = (((uint64_t)((int64_t)((unsigned long)this_02 >> 8)) << 8) | (uint8_t)bVar5) ^ 1;
                goto LAB_1003efe2b;
            }
        }
        uVar4 = 0;
    LAB_1003efe2b:
        return uVar4 & 4294967295;
    }

    // 0x1003efeb0
    void ObjStackEntity::CreateRenderingResources() {
        UpdateDisplayObjs();
    }

    // 0x1003efec0
    void ObjStackEntity::DestroyRenderingResources() {
        field_248.clear();
    }

    // 0x1003efee0
    void ObjStackEntity::ClearHighlighting() {
        long lVar1 = field_248.HeapBeginPtr();
        long lVar2 = field_248.end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 144) {
            ((Model*)(*((lVar1 + 40))).operator->())->ClearHighlight();
        }
    }

    // 0x1004042c0
    bool ObjStackEntity::SortAllObjs()::$_0::operator()(const ObjStackEntry& objStackEntry1,
                                                        const ObjStackEntry& objStackEntry2) const {
        bool bVar3;
        long lVar4;

        __0 _Var1 = *this;
        shared_ptr* this_00 = (shared_ptr*)(*(ConfigProvider**)((long)_Var1 + 280))
                                  ->GetConfig<game::ObjType>(objStackEntry1.field_0, nullptr);
        shared_ptr* this_01 = (shared_ptr*)(*(ConfigProvider**)((long)_Var1 + 280))
                                  ->GetConfig<game::ObjType>(objStackEntry2.field_0, nullptr);
        bool cVar2 = shared_ptr::operator_cast_to_bool(this_00);
        if (!cVar2) {
            cVar2 = shared_ptr::operator_cast_to_bool(this_01);
            if (cVar2) {
                return true;
            }
        }
        cVar2 = shared_ptr::operator_cast_to_bool(this_00);
        if (((!cVar2) || (cVar2 = shared_ptr::operator_cast_to_bool(this_01), cVar2)) &&
            ((cVar2 = shared_ptr::operator_cast_to_bool(this_00),
              cVar2 || (cVar2 = shared_ptr::operator_cast_to_bool(this_01), cVar2)))) {
            lVar4 = objStackEntry1.GetObjEntrySortValue(*this_00);
            bVar3 = objStackEntry2.GetObjEntrySortValue(*this_01) < lVar4;
        } else {
            bVar3 = false;
        }
        return bVar3;
    }

} // namespace jag
