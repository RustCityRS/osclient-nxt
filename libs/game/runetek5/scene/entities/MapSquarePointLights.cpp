// libs/game/runetek5/scene/entities/MapSquarePointLights.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "MapSquarePointLights.h"

namespace jag::game {
    // 0x1000096a0: MapSquarePointLights::GetStaticPointLightsLoaded() const has the same machine code as BaseApp::GetExitAfterInit()

    // 0x10002d850: MapSquarePointLights::GetLightSourcesLocal() const has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x1000b7910: MapSquarePointLights::GetLightSourcesRemote() const has the same machine code as oldscape::minimenu::MinimenuEntry::GetSubjectName() const

    // 0x100411c10
    char MapSquarePointLights::LoadStaticPointLights(MapSquare& mapSquare, Js5ResourceProvider* js5ResourceProvider,
                                                     ConfigProvider* configProvider, const LODLevel& lodLevel,
                                                     const LODSettings& lodSettings) {
        unsigned int arg2;
        uint8_t uVar2;
        bool cVar3;
        unsigned int uVar5;
        GraphNode* pGVar6;
        shared_ptr<ClientCompositeData>* clientCompositeData;
        shared_ptr<World>* psVar7;
        World* pWVar8;
        HeightMap* heightMap;
        shared_ptr* psVar9;
        Entity* pEVar10;
        GraphNode* pGVar11;
        long lVar12;
        GraphNode* pGVar13;
        ConfigProvider** arg3;
        unsigned int* arg5;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        LightSource* pLVar14;
        char* pcVar15;
        MapSquare* pMVar16;
        MapSquarePointLights* pMVar17;
        int iVar18;
        int iVar19;
        unsigned long uVar20;
        vector<shared_ptr<LightSource>, BucketAllocatorEASTL>* this_01;
        StaticPointLightLoader local_f0;
        unsigned long local_a0;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* local_98;
        vector<shared_ptr<LightSource>, BucketAllocatorEASTL>* local_90;
        GraphNode* local_80;
        unsigned int local_70;
        char local_69;
        unsigned long local_68[6];

        ConfigProvider* local_a8 = configProvider;
        if (field_336 != '\0') {
            field_336 = 0;
            pGVar6 = mapSquare.GetNode();
            ClearExistingLights(pGVar6);
        }
        char cVar4 = '\x01';
        if ((uint8_t)(char)(LODLevel)lodLevel < 4) {
            uVar2 = lodSettings.GetLowestUsableLOD();
            if (((uint8_t)uVar2 < (uint8_t)(char)(LODLevel)lodLevel) || (m_staticPointLightsLoaded != '\0')) {
                cVar4 = '\x01';
            } else {
                local_90 = (vector<shared_ptr<LightSource>, BucketAllocatorEASTL>*)&field_32;
                cVar3 = local_90->empty();
                pMVar16 = mapSquare;
                cVar4 = '\x01';
                if (cVar3) {
                    uVar5 = field_0;
                    arg2 = field_4;
                    clientCompositeData = (shared_ptr<ClientCompositeData>*)mapSquare.GetContentType();
                    local_f0 = StaticPointLightLoader(uVar5, arg2, *clientCompositeData);
                    psVar7 = (shared_ptr<World>*)pMVar16->GetWorld();
                    pWVar8 = (World*)(*psVar7).operator->();
                    heightMap = pWVar8->GetHeightMap();
                    local_69 = local_f0.Load(js5ResourceProvider, *heightMap);
                    if (local_69 != '\0') {
                        local_98 =
                            (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)local_f0.second();
                        uVar5 = local_98->size();
                        this_01 = local_90;
                        local_a0 = (unsigned long)uVar5;
                        local_90->reserve(local_a0);
                        pMVar16 = mapSquare;
                        if (uVar5 != 0) {
                            uVar20 = 0;
                            do {
                                local_70 = (unsigned int)uVar20 | (field_0 & 255) << 16 | (field_4 & 255) << 8;
                                psVar7 = (shared_ptr<World>*)pMVar16->GetWorld();
                                pWVar8 = (World*)(*psVar7).operator->();
                                psVar9 = pWVar8->GetPointLight(local_70);
                                cVar4 = shared_ptr::operator_cast_to_bool(psVar9);
                                if (!cVar4) {
                                    local_68[0] = local_68[0] & 18446744069414584320;
                                    local_80 = graphics::GraphNode::Create<int>(*local_68);
                                    pGVar6 = pMVar16->GetNode();
                                    pGVar6->AddChild(local_80);
                                    arg3 = (ConfigProvider**)pMVar16->GetWorld();
                                    arg5 = (unsigned int*)(*local_98)[uVar20];
                                    MakeSharedPool<LightSource, 1024>::MakeShared<
                                        graphics::GraphNode*&, shared_ptr<World> const&, ConfigProvider*&,
                                        shared_ptr<StaticPointLight> const&, unsigned int&>(
                                        (GraphNode**)local_68, (shared_ptr<World>*)&local_80, arg3,
                                        (shared_ptr<StaticPointLight>*)&local_a8, arg5);
                                    this_01->push_back(*local_68);
                                    this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                                  this_01->back();
                                    pGVar6 = local_80;
                                    pGVar6->SetEntity((GraphEntity*)this_00->end());
                                    pGVar6 = local_80;
                                    pLVar14 = (LightSource*)(*this_00).operator->();
                                    local_68[0] = pLVar14->GetLocalPosition();
                                    pGVar6->SetTranslation(*local_68);
                                    pLVar14 = (LightSource*)(*this_00).operator->();
                                    pLVar14->RecalculateAABB();
                                    psVar7 = (shared_ptr<World>*)pMVar16->GetWorld();
                                    pWVar8 = (World*)(*psVar7).operator->();
                                    pWVar8->AddPointLight(local_70, *this_00);
                                } else {
                                    this_01->push_back(*psVar9);
                                    pEVar10 = (Entity*)(*psVar9).operator->();
                                    pGVar6 = pEVar10->GetNode();
                                    pEVar10 = (Entity*)(*psVar9).operator->();
                                    pGVar11 = pEVar10->GetNode();
                                    lVar12 = pGVar11->GetParent();
                                    if (lVar12 == 0) {
                                        pGVar11 = pMVar16->GetNode();
                                        pGVar11->AddChild(pGVar6);
                                    } else {
                                        pEVar10 = (Entity*)(*psVar9).operator->();
                                        pGVar11 = pEVar10->GetNode();
                                        pGVar11 = (GraphNode*)pGVar11->GetParent();
                                        pGVar13 = pMVar16->GetNode();
                                        if (pGVar11 != pGVar13) {
                                            LogAssert(
                                                "existingLight->GetNode()->GetParent() == mapSquare.GetNode()",
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "game/runetek5/scene/entities/MapSquarePointLights.cpp",
                                                61, nullptr);
                                        }
                                    }
                                    pLVar14 = (LightSource*)(*psVar9).operator->();
                                    local_68[0] = pLVar14->GetLocalPosition();
                                    pGVar6->SetTranslation(*local_68);
                                    pLVar14 = (LightSource*)(*psVar9).operator->();
                                    pLVar14->RecalculateAABB();
                                }
                                uVar20 = uVar20 + 1;
                                this_01 = local_90;
                            } while (local_a0 != uVar20);
                        }
                        pMVar17 = this;
                        ValidateStaticPointLights((MapSquarePointLights*)local_68);
                        lVar12 = 0;
                        uVar20 = 0;
                        do {
                            pcVar15 = (char*)(*local_68)[uVar20];
                            if (*pcVar15 != '\0') {
                                iVar18 = 0;
                                iVar19 = 0;
                                if ((unsigned int)uVar20 < 8) {
                                    iVar18 = *(int*)((long)&PTR___mh_execute_header_100d42c90 + lVar12);
                                    iVar19 = *(int*)((long)&reinterpret_cast<const uint64_t*>(&LEVELS)[7] + lVar12);
                                }
                                psVar7 = (shared_ptr<World>*)mapSquare.GetWorld();
                                pWVar8 = (World*)(*psVar7).operator->();
                                psVar9 = (shared_ptr*)pWVar8->GetMapSquare(iVar18 + field_0, iVar19 + field_4);
                                cVar4 = shared_ptr::operator_cast_to_bool(psVar9);
                                pMVar17 = this;
                                if (cVar4) {
                                    pMVar16 = (MapSquare*)(*psVar9).operator->();
                                    pMVar17 = (MapSquarePointLights*)pMVar16->GetMapSquarePointLights();
                                    RequestRemoteLightSourceUpdate(pMVar17);
                                    pMVar17 = this;
                                }
                            }
                            uVar20 = uVar20 + 1;
                            lVar12 = lVar12 + 4;
                        } while (uVar20 != 8);
                        pMVar17->m_staticPointLightsLoaded = '\x01';
                        pMVar17->field_344 = 1;
                        pMVar17->field_352 = 1;
                        pMVar17->field_360 = true;
                    }
                    cVar4 = local_69;
                }
            }
        }
        return cVar4;
    }

    // 0x100412e60
    void MapSquarePointLights::ClearExistingLights(graphics::GraphNode* graphNode) {
        shared_ptr<LightSource>* psVar3;
        shared_ptr<LightSource>* psVar4;
        Entity* pEVar5;
        GraphNode* pGVar6;

        if (graphNode == nullptr) {
            LogAssert("mapSquareNode != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/MapSquarePointLights.cpp",
                      332, nullptr);
        }
        m_staticPointLightsLoaded = '\0';
        uint8_t* puVar1 = &field_32;
        if (!(puVar1->empty())) {
            psVar3 = (shared_ptr<LightSource>*)puVar1->HeapBeginPtr();
            psVar4 = (shared_ptr<LightSource>*)puVar1->end();
            for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
                pEVar5 = (Entity*)(*psVar3).operator->();
                pGVar6 = pEVar5->GetNode();
                pGVar6 = (GraphNode*)pGVar6->GetParent();
                if (pGVar6 != graphNode) {
                    LogAssert("lightSource->GetNode()->GetParent() == mapSquareNode",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/entities/MapSquarePointLights.cpp",
                              342, nullptr);
                }
                pEVar5 = (Entity*)(*psVar3).operator->();
                pGVar6 = pEVar5->GetNode();
                graphNode->RemoveChild(pGVar6);
            }
            puVar1->clear();
        }
        puVar1 = &field_312;
        if (!(puVar1->empty())) {
            psVar3 = (shared_ptr<LightSource>*)puVar1->HeapBeginPtr();
            psVar4 = (shared_ptr<LightSource>*)puVar1->end();
            for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
                pEVar5 = (Entity*)(*psVar3).operator->();
                pGVar6 = pEVar5->GetNode();
                pGVar6 = (GraphNode*)pGVar6->GetParent();
                if (pGVar6 == graphNode) {
                    pEVar5 = (Entity*)(*psVar3).operator->();
                    pGVar6 = pEVar5->GetNode();
                    graphNode->RemoveChild(pGVar6);
                }
            }
            puVar1->clear();
        }
        auto this_00 = field_80.HeapBeginPtr();
        auto pvVar7 = field_80.end();
        for (; this_00 != pvVar7; this_00 = this_00 + 24) {
            this_00->clear();
        }
        puVar1 = &field_56;
        psVar3 = (shared_ptr<LightSource>*)puVar1->HeapBeginPtr();
        psVar4 = (shared_ptr<LightSource>*)puVar1->end();
        for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
            ((LightSource*)(*psVar3).operator->())->RemoveRemoteMapSquare(field_0, field_4);
        }
        puVar1->clear();
    }

    // 0x100415150
    MapSquarePointLights* MapSquarePointLights::ValidateStaticPointLights() {
        bool bVar1;
        uint64_t uVar2;
        Array<unsigned int>* this_00;
        uint64_t uVar4;
        uint64_t uVar5;
        uint8_t bVar6;
        unsigned int uVar7;
        int extraout_var;
        uint8_t* pbVar9;
        unsigned long uVar10;
        LightSource* pLVar12;
        unsigned int* puVar13;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_03;
        Array<bool, BucketAllocatorEASTL>* pAVar14;
        uint8_t* puVar15;
        float* pfVar16;
        char* pcVar17;
        Logger* pLVar18;
        unsigned int uVar19;
        int iVar20;
        unsigned long uVar21;
        uint32_t* in_RSI;
        LogStream* this_06;
        uint8_t uVar22;
        unsigned int uVar23;
        unsigned int uVar24;
        unsigned long arg1;
        unsigned long uVar25;
        unsigned int uVar26;
        float in_XMM1_Da;
        float fVar27;
        char* in_stack_fffffffffffffda8;
        uint32_t uVar28;
        uint64_t local_220;
        float local_218;
        Array<Array<bool, BucketAllocatorEASTL>, BucketAllocatorEASTL> local_1e8;
        shared_ptr<LightSource>* local_1d0;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* local_1c0;
        unsigned int local_1b4;
        unsigned long local_1a8;
        unsigned long local_1a0;
        unsigned long local_198;
        unsigned int local_18c;
        unsigned long local_188;
        Array<unsigned int>* local_180;
        unsigned int local_174;
        unsigned int local_170;
        unsigned int local_16c;
        unsigned int local_168;
        unsigned int local_164;
        uint8_t local_160[2];
        uint8_t auStack_15e[4];
        uint16_t uStack_15a;
        LogStream local_158;
        LogStream local_c8;

        new (this) eastl::fixed_vector<bool, 8ul>(8);
        vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>>* this_05 =
            (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>>*)(in_RSI + 20);
        uint32_t* local_1b0 = in_RSI;
        long lVar8 = this_05->size();
        if (lVar8 != 0) {
            uVar25 = 0;
            do {
                bVar6 = ((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(*this_05)[uVar25])
                            ->empty();
                pbVar9 = (uint8_t*)(*this)[uVar25];
                *pbVar9 = *pbVar9 | bVar6 ^ 1;
                ((vector<shared_ptr<oldscape::rseven::Terrain>>*)(*this_05)[uVar25])->clear();
                uVar25 = uVar25 + 1;
                uVar10 = this_05->size();
            } while (uVar25 < uVar10);
        }
        uint32_t* puVar3 = local_1b0;
        *(uint8_t*)((long)local_1b0 + 9) = 0;
        vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>>* local_210 = this_05;
        vector<shared_ptr<LightSource>, BucketAllocatorEASTL> local_200;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_07 =
            (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)(puVar3 + 8);
        uVar25 = this_07->size();
        local_200.reserve(uVar25);
        auto psVar11 = this_07->HeapBeginPtr();
        auto local_208 = this_07->end();
        if (psVar11 != local_208) {
            local_1c0 = this_07;
            do {
                local_1d0 = psVar11;
                pLVar12 = (LightSource*)(*psVar11).operator->();
                local_220 = pLVar12->GetLocalPosition();
                psVar11 = local_1d0;
                local_218 = in_XMM1_Da;
                lVar8 = (*local_1d0).operator->();
                puVar13 = (unsigned int*)((lVar8 + 192))->SSOBeginPtr();
                local_168 = *puVar13;
                pLVar12 = (LightSource*)(*psVar11).operator->();
                this_03 =
                    (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pLVar12->GetInfluenceRanges();
                local_1e8 = Array<Array<bool, BucketAllocatorEASTL>, BucketAllocatorEASTL>();
                uVar7 = this_03->end();
                local_188 = (unsigned long)(int)uVar7;
                local_1e8.set_max_size(local_188, 0);
                if ((int)uVar7 < 1) {
                    bVar1 = false;
                } else {
                    local_198 = (unsigned long)uVar7;
                    uVar25 = 0;
                    bVar1 = false;
                    local_180 = (Array<unsigned int>*)this_03;
                    do {
                        this_00 = local_180;
                        pAVar14 = &local_1e8[uVar25];
                        pAVar14->set_max_size(local_188, 0);
                        puVar13 = (unsigned int*)(*this_00)[uVar25];
                        uVar7 = *puVar13;
                        pbVar9 = (uint8_t*)(*this_00)[uVar25];
                        uVar10 = (unsigned long)*pbVar9;
                        if (uVar10 != 0) {
                            arg1 = (unsigned long)(uVar7 >> 8);
                            uVar21 = uVar10 + arg1;
                            do {
                                pAVar14 = &local_1e8[uVar25];
                                puVar15 = (uint8_t*)(*pAVar14)[arg1];
                                *puVar15 = 1;
                                arg1 = arg1 + 1;
                            } while (arg1 < uVar21);
                        }
                        bVar1 = (bool)(bVar1 | uVar10 != 0);
                        uVar25 = uVar25 + 1;
                    } while (uVar25 != local_198);
                }
                if (bVar1) {
                    pfVar16 = (float*)local_220.SSOBeginPtr();
                    fVar27 = 64.0 - (float)local_168;
                    uVar19 = (unsigned int)(*pfVar16 + fVar27);
                    uVar26 = (int)uVar19 >> 7;
                    local_188._0_4_ = (float)local_168;
                    local_180._0_4_ = fVar27;
                    pfVar16 = (float*)local_220.SSOBeginPtr();
                    in_XMM1_Da = (float)local_188 - 64.0;
                    local_188 = (((uint64_t)local_188._4_4_ << 32) | (uint32_t)in_XMM1_Da);
                    local_170 = (unsigned int)(*pfVar16 + in_XMM1_Da);
                    local_18c = (int)local_170 >> 7;
                    pfVar16 = (float*)local_220.second();
                    local_164 = (unsigned int)(local_180._0_4_ + *pfVar16);
                    local_180 =
                        (Array<unsigned int>*)(((uint64_t)local_180._4_4_ << 32) | (uint32_t)((int)local_164 >> 7));
                    pfVar16 = (float*)local_220.second();
                    this_07 = local_1c0;
                    uVar28 = (uint32_t)((unsigned long)in_stack_fffffffffffffda8 >> 32);
                    local_16c = (unsigned int)((float)local_188 + *pfVar16);
                    uVar7 = (int)local_16c >> 7;
                    local_1a8 = (unsigned long)uVar7;
                    local_174 = uVar19;
                    if (((((int)uVar19 < 8192) && ((int)local_164 < 8192)) && (-1 < (int)local_170)) &&
                        (-1 < (int)local_16c)) {
                        uVar23 = uVar26;
                        if ((int)uVar19 < 0) {
                            uVar23 = 0;
                        }
                        uVar24 = local_18c;
                        if (8191 < (int)local_170) {
                            uVar24 = 63;
                        }
                        iVar20 = (int)local_180._0_4_;
                        if ((int)local_164 < 0) {
                            iVar20 = 0;
                        }
                        if (8191 < (int)local_16c) {
                            uVar7 = 63;
                        }
                        local_198 = (((uint64_t)local_198._4_4_ << 32) | (uint32_t)uVar7);
                        if (iVar20 <= (int)uVar7) {
                            local_1a0 = (unsigned long)(int)((int)uVar19 >> 31 & -uVar26);
                            uVar25 = (unsigned long)((int)local_164 >> 31 & -(int)local_180._0_4_);
                            bVar1 = false;
                            local_1b4 = uVar26;
                            local_168 = uVar23;
                            do {
                                local_188 = (((uint64_t)local_188._4_4_ << 32) | (uint32_t)iVar20);
                                uVar10 = local_1a0;
                                uVar7 = local_168;
                                if ((int)local_168 <= (int)uVar24) {
                                    while (!bVar1) {
                                        pAVar14 = &local_1e8[uVar25];
                                        pcVar17 = (char*)(*pAVar14)[uVar10];
                                        if (*pcVar17 != '\0') {
                                            bVar1 = true;
                                        }
                                        if ((int)uVar24 <= (int)uVar7)
                                            break;
                                        uVar10 = uVar10 + 1;
                                        uVar7 = uVar7 + 1;
                                    }
                                }
                                uVar7 = local_1b4;
                                this_07 = local_1c0;
                                if ((int)(unsigned int)local_198 <= (int)(float)local_188)
                                    break;
                                iVar20 = (int)(float)local_188 + 1;
                                uVar25 = uVar25 + 1;
                            } while (!bVar1);
                            if (bVar1) {
                                local_200.push_back(*local_1d0);
                                _local_160 = 0;
                                if ((((int)local_174 < 0) || (8191 < (int)local_170)) ||
                                    (((int)local_164 < 0 || (8191 < (int)local_16c)))) {
                                    local_164 = extraout_var << 8;
                                    local_174 = local_174 & 4294967040;
                                    local_1a0 = (((uint64_t)local_1a0._4_4_ << 32) | (uint32_t)(extraout_var << 8));
                                    local_168 = extraout_var << 8;
                                    local_16c = local_16c & 4294967040;
                                    local_198 = (((uint64_t)local_198._4_4_ << 32) | (uint32_t)(extraout_var << 8));
                                    uVar22 = 0;
                                    local_170 = local_170 & 4294967040;
                                    if ((int)local_180._0_4_ <= (int)local_1a8) {
                                        uVar19 = local_18c;
                                        if ((int)local_18c < (int)uVar7) {
                                            uVar19 = uVar7;
                                        }
                                        local_1a8 = (unsigned long)(((int)local_1a8 - (int)local_180._0_4_) + 1);
                                        local_188 = (unsigned long)uVar7;
                                        uVar25 = 0;
                                        uVar26 = uVar7;
                                        do {
                                            if ((int)uVar26 <= (int)local_18c) {
                                                uVar10 = 0;
                                                do {
                                                    pAVar14 = &local_1e8[uVar25];
                                                    pcVar17 = (char*)(*pAVar14)[uVar10];
                                                    if (*pcVar17 != '\0') {
                                                        iVar20 = (int)local_188 + (int)uVar10;
                                                        if ((int)local_180._0_4_ < 0) {
                                                            if (iVar20 < 0) {
                                                                local_170 =
                                                                    (((uint32_t)local_170._1_3_ << 8) | (uint8_t)1);
                                                            } else {
                                                                if (63 < iVar20) {
                                                                    uVar22 = 1;
                                                                }
                                                                uVar26 = (unsigned int)local_198 & 255;
                                                                if (iVar20 < 64) {
                                                                    uVar26 = 1;
                                                                }
                                                                local_198 = (((uint64_t)local_198._4_4_ << 32) |
                                                                             (uint32_t)uVar26);
                                                            }
                                                        } else if ((int)local_180._0_4_ < 64) {
                                                            if (iVar20 < 0) {
                                                                local_174 =
                                                                    (((uint32_t)local_174._1_3_ << 8) | (uint8_t)1);
                                                            } else {
                                                                local_164 = local_164 & 255;
                                                                if (63 < iVar20) {
                                                                    local_164 = 1;
                                                                }
                                                            }
                                                        } else if (iVar20 < 0) {
                                                            local_16c = (((uint32_t)local_16c._1_3_ << 8) | (uint8_t)1);
                                                        } else {
                                                            local_168 = local_168 & 255;
                                                            if (63 < iVar20) {
                                                                local_168 = 1;
                                                            }
                                                            uVar26 = (unsigned int)local_1a0 & 255;
                                                            if (iVar20 < 64) {
                                                                uVar26 = 1;
                                                            }
                                                            local_1a0 =
                                                                (((uint64_t)local_1a0._4_4_ << 32) | (uint32_t)uVar26);
                                                        }
                                                    }
                                                    uVar10 = uVar10 + 1;
                                                } while ((uVar19 - uVar7) + 1 != uVar10);
                                            }
                                            local_180 = (Array<unsigned int>*)(((uint64_t)local_180._4_4_ << 32) |
                                                                               (uint32_t)((int)local_180._0_4_ + 1));
                                            uVar25 = uVar25 + 1;
                                            uVar26 = local_1b4;
                                        } while (uVar25 != local_1a8);
                                    }
                                    _local_160 = (((uint64_t)((uint8_t)local_174) << 48) |
                                                  (uint64_t)((uint64_t)(uint8_t)local_164 << 16));
                                    uVar2 = (uint64_t)_local_160 >> 16;
                                    _auStack_15e = (uint64_t)uVar2;
                                    local_160 =
                                        (uint8_t[2])(((uint16_t)((char)local_168) << 8) | (uint8_t)((char)local_1a0));
                                    uVar4 = _local_160;
                                    _local_160 = (((uint64_t)((uint8_t)local_16c) << 56) | (uint64_t)_local_160);
                                    uVar5 = _local_160;
                                    _local_160 = (((uint32_t)uVar22 << 24) | (uint32_t)((int32_t)uVar4));
                                    uStack_15a = (uint16_t)(uVar5 >> 48);
                                    _local_160 = (((uint64_t)uStack_15a << 48) |
                                                  (uint64_t)((((uint64_t)((uint8_t)local_170) << 40) |
                                                              (uint64_t)((int64_t)(((uint64_t)((int)local_198) << 32) |
                                                                                   (uint32_t)_local_160)))));
                                    this_07 = local_1c0;
                                }
                                uVar25 = 0;
                                do {
                                    if (local_160[uVar25] != '\0') {
                                        ((vector<shared_ptr<LightSource>, BucketAllocatorEASTL>*)(*local_210)[uVar25])
                                            ->push_back(*local_1d0);
                                        puVar15 = (uint8_t*)(*this)[uVar25];
                                        *puVar15 = 1;
                                        *(uint8_t*)((long)local_1b0 + 9) = 1;
                                    }
                                    uVar25 = uVar25 + 1;
                                } while (uVar25 != 8);
                                goto LAB_100415288;
                            }
                        }
                        this_07 = local_1c0;
                        pLVar18 = logger::default_logger();
                        this_06 = &local_158;
                        new (this_06) logger::LogStream(LOGGER_SCENE);
                        in_stack_fffffffffffffda8 = "MapSquare::ValidateStaticLightsForPointLightIndices - light "
                                                    "skipped in %u,%u - influence grid doesn\'t overlap tiles";
                        ((uint8_t)pLVar18)
                            ->Log(nullptr, (LogLevel)this_06, 8, 14425787, 239,
                                  "MapSquare::ValidateStaticLightsForPointLightIndices - light skipped in %u,%u - "
                                  "influence grid doesn\'t overlap tiles",
                                  *local_1b0, local_1b0[1]);
                        goto LAB_100415283;
                    }
                    pLVar18 = logger::default_logger();
                    in_stack_fffffffffffffda8 = (char*)(((uint64_t)uVar28 << 32) | (uint32_t)(*local_1b0));
                    pLVar18->Log(false, 8,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                 "scene/entities/MapSquarePointLights.cpp",
                                 190,
                                 "MapSquare::ValidateStaticLightsForPointLightIndices - light skipped in %u,%u - out "
                                 "of bounds X: %d->%d, Z: %d->%d",
                                 in_stack_fffffffffffffda8, local_1b0[1], uVar26, local_18c, local_180._0_4_,
                                 (int)local_1a8);
                } else {
                    pLVar18 = logger::default_logger();
                    this_07 = local_1c0;
                    local_c8 = logger::LogStream(LOGGER_SCENE);
                    in_stack_fffffffffffffda8 = "MapSquare::ValidateStaticLightsForPointLightIndices - light skipped "
                                                "in %u,%u - missing influence grid";
                    this_06 = &local_c8;
                    ((uint8_t)pLVar18)
                        ->Log(nullptr, (LogLevel)this_06, 8, 14425787, 176,
                              "MapSquare::ValidateStaticLightsForPointLightIndices - light skipped in %u,%u - missing "
                              "influence grid",
                              *local_1b0, local_1b0[1]);
                LAB_100415283:
                    this_06->~LogStream();
                }
            LAB_100415288:
                local_1e8.~Array();
                psVar11 = local_1d0 + 16;
            } while (psVar11 != local_208);
        }
        uVar25 = local_200.size();
        this_07->reserve(uVar25);
        psVar11 = (shared_ptr<LightSource>*)local_200.HeapBeginPtr();
        auto lightSource2 = local_200.end();
        this_07->assign<shared_ptr<LightSource> const*>(psVar11, lightSource2);
        return this;
    }

    // 0x1004160b0
    void MapSquarePointLights::MainLogic(const MapSquare* mapSquare, ConfigProvider* configProvider,
                                         unsigned int arg3) {
        uint8_t* puVar1;
        shared_ptr<LightSource>* psVar2;
        shared_ptr<LightSource>* psVar3;
        bool bVar4;
        uint8_t auVar5[16];

        if (field_12 != arg3) {
            field_12 = arg3;
            if (field_344 != '\0') {
                field_344 = 0;
                UpdateRemoteLightSources(mapSquare, arg3);
            }
            if (field_352 != '\0') {
                field_352 = 0;
                UpdateDynamicLightSources(mapSquare, configProvider, arg3);
            }
            if (field_360 == false) {
                puVar1 = &field_32;
                psVar2 = (shared_ptr<LightSource>*)puVar1->HeapBeginPtr();
                auVar5 = puVar1->end();
                psVar2 = std::find_if<shared_ptr<LightSource>*,
                                      (MapSquare const*)->MainLogic(ConfigProvider*, unsigned int)::__1>(
                    psVar2, auVar5._0_8_, auVar5._8_8_);
                psVar3 = (shared_ptr<LightSource>*)puVar1->end();
                bVar4 = true;
                if (psVar2 == psVar3) {
                    puVar1 = &field_56;
                    psVar2 = (shared_ptr<LightSource>*)puVar1->HeapBeginPtr();
                    auVar5 = puVar1->end();
                    psVar2 = std::find_if<shared_ptr<LightSource>*,
                                          (MapSquare const*)->MainLogic(ConfigProvider*, unsigned int)::__1>(
                        psVar2, auVar5._0_8_, auVar5._8_8_);
                    psVar3 = (shared_ptr<LightSource>*)puVar1->end();
                    if (psVar2 == psVar3) {
                        puVar1 = &field_312;
                        psVar2 = (shared_ptr<LightSource>*)puVar1->HeapBeginPtr();
                        auVar5 = puVar1->end();
                        psVar2 = std::find_if<shared_ptr<LightSource>*,
                                              (MapSquare const*)->MainLogic(ConfigProvider*, unsigned int)::__1>(
                            psVar2, auVar5._0_8_, auVar5._8_8_);
                        psVar3 = (shared_ptr<LightSource>*)puVar1->end();
                        bVar4 = psVar2 != psVar3;
                    }
                }
                field_360 = bVar4;
            }
            if (field_360 != false) {
                field_360 = false;
                RebuildPointLightGridTexture(arg3);
            }
        }
    }

    // 0x100416200
    void MapSquarePointLights::UpdateRemoteLightSources(const MapSquare* mapSquare, unsigned int arg2) {
        uint8_t* this_00;
        bool cVar1;
        shared_ptr<LightSource>* this_01;
        shared_ptr<LightSource>* psVar3;
        LightSource* pLVar4;
        shared_ptr<World>* this_02;
        World* pWVar5;
        shared_ptr<MapSquare>* psVar6;
        shared_ptr<MapSquare>* psVar7;
        shared_ptr* this_03;
        MapSquare* this_04;
        MapSquarePointLights* this_05;
        Layout* this_06;
        shared_ptr<postprocess::PostProcessEffect>* postProcessEffect3;
        shared_ptr<postprocess::PostProcessEffect>* psVar8;
        shared_ptr<postprocess::PostProcessEffect>* psVar9;
        shared_ptr<postprocess::PostProcessEffect>* psVar10;
        unsigned long arg1;
        fixed_vector<shared_ptr<MapSquare>, 8ul> local_e0;

        if (field_348 != arg2) {
            field_348 = arg2;
            this_00 = &field_56;
            cVar1 = this_00->empty();
            this_01 = (shared_ptr<LightSource>*)this_00->HeapBeginPtr();
            psVar3 = (shared_ptr<LightSource>*)this_00->end();
            for (; this_01 != psVar3; this_01 = this_01 + 16) {
                pLVar4 = (LightSource*)(*this_01).operator->();
                pLVar4->RemoveRemoteMapSquare(field_0, field_4);
            }
            this_00->clear();
            local_e0 = eastl::fixed_vector<shared_ptr<MapSquare>, 8ul>(8);
            if (mapSquare != nullptr) {
                this_02 = (shared_ptr<World>*)mapSquare->GetWorld();
                pWVar5 = (World*)(*this_02).operator->();
                psVar6 = (shared_ptr<MapSquare>*)pWVar5->GetMapSquare(field_0, field_4 + 1);
                psVar7 = &local_e0[0];
                *psVar7 = *psVar6;
                pWVar5 = (World*)(*this_02).operator->();
                psVar6 = (shared_ptr<MapSquare>*)pWVar5->GetMapSquare(field_0 + 1, field_4 + 1);
                psVar7 = &local_e0[1];
                *psVar7 = *psVar6;
                pWVar5 = (World*)(*this_02).operator->();
                psVar6 = (shared_ptr<MapSquare>*)pWVar5->GetMapSquare(field_0 + 1, field_4);
                psVar7 = &local_e0[2];
                *psVar7 = *psVar6;
                pWVar5 = (World*)(*this_02).operator->();
                psVar6 = (shared_ptr<MapSquare>*)pWVar5->GetMapSquare(field_0 + 1, field_4 - 1);
                psVar7 = &local_e0[3];
                *psVar7 = *psVar6;
                pWVar5 = (World*)(*this_02).operator->();
                psVar6 = (shared_ptr<MapSquare>*)pWVar5->GetMapSquare(field_0, field_4 - 1);
                psVar7 = &local_e0[4];
                *psVar7 = *psVar6;
                pWVar5 = (World*)(*this_02).operator->();
                psVar6 = (shared_ptr<MapSquare>*)pWVar5->GetMapSquare(field_0 - 1, field_4 - 1);
                psVar7 = &local_e0[5];
                *psVar7 = *psVar6;
                pWVar5 = (World*)(*this_02).operator->();
                psVar6 = (shared_ptr<MapSquare>*)pWVar5->GetMapSquare(field_0 - 1, field_4);
                psVar7 = &local_e0[6];
                *psVar7 = *psVar6;
                pWVar5 = (World*)(*this_02).operator->();
                psVar6 = (shared_ptr<MapSquare>*)pWVar5->GetMapSquare(field_0 - 1, field_4 + 1);
                psVar7 = &local_e0[7];
                *psVar7 = *psVar6;
                arg1 = 0;
                do {
                    this_03 = &local_e0[arg1];
                    if (shared_ptr::operator_cast_to_bool(this_03) != '\0') {
                        psVar6 = &local_e0[arg1];
                        this_04 = (MapSquare*)(*psVar6).operator->();
                        this_05 = (MapSquarePointLights*)this_04->GetMapSquarePointLights();
                        this_06 = (Layout*)GetBoundaryLights(this_05, (int)arg1 + 4 & 7);
                        postProcessEffect3 = (shared_ptr<postprocess::PostProcessEffect>*)this_06->HeapBeginPtr();
                        psVar8 = (shared_ptr<postprocess::PostProcessEffect>*)this_06->end();
                        for (; postProcessEffect3 != psVar8; postProcessEffect3 = postProcessEffect3 + 16) {
                            psVar9 = (shared_ptr<postprocess::PostProcessEffect>*)this_00->HeapBeginPtr();
                            psVar10 = (shared_ptr<postprocess::PostProcessEffect>*)this_00->end();
                            psVar9 = eastl::find<shared_ptr<Entity>*, shared_ptr<Entity>>(psVar9, psVar10,
                                                                                          *postProcessEffect3);
                            psVar10 = (shared_ptr<postprocess::PostProcessEffect>*)this_00->end();
                            if (psVar9 == psVar10) {
                                this_00->push_back(*postProcessEffect3);
                                pLVar4 = (LightSource*)(*postProcessEffect3).operator->();
                                pLVar4->AddRemoteMapSquare(field_0, field_4);
                            }
                        }
                    }
                    arg1 = arg1 + 1;
                } while (arg1 != 8);
            }
            if ((!cVar1) || (cVar1 = this_00->empty(), !cVar1)) {
                field_360 = true;
            }
        }
    }

    // 0x100416600
    void MapSquarePointLights::UpdateDynamicLightSources(const MapSquare* mapSquare, ConfigProvider* configProvider,
                                                         unsigned int arg3) {
        uint8_t* this_00;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_01;
        bool cVar1;
        unsigned int uVar2;
        shared_ptr<LightSource>* this_02;
        shared_ptr<LightSource>* psVar3;
        LightSource* pLVar4;
        shared_ptr<StaticPointLight>* psVar5;
        TextRun* pTVar6;
        StockPlayerOffer* pSVar7;
        Entity* pEVar8;
        GraphNode* pGVar9;
        shared_ptr<World>* psVar10;
        WorldmapAreaMetadata* this_03;
        DynamicPointLightManager* this_04;
        World* pWVar11;
        shared_ptr* this_06;
        GraphNode* pGVar12;
        long* plVar13;
        ConfigProvider** arg3_00;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_07;
        vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL> local_80;
        ConfigProvider* local_68;
        shared_ptr<StaticPointLight>* local_60;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* local_58;
        GraphNode* local_50;
        unsigned long local_48[2];
        unsigned int local_38;
        char local_31;

        if ((mapSquare != nullptr) && (field_356 != arg3)) {
            field_356 = arg3;
            this_00 = &field_312;
            local_68 = configProvider;
            local_31 = this_00->empty();
            this_02 = (shared_ptr<LightSource>*)this_00->HeapBeginPtr();
            psVar3 = (shared_ptr<LightSource>*)this_00->end();
            for (; this_02 != psVar3; this_02 = this_02 + 16) {
                pLVar4 = (LightSource*)(*this_02).operator->();
                psVar5 = pLVar4->GetConfigurationSource();
                pTVar6 = (TextRun*)(*psVar5).operator->();
                uVar2 = pTVar6->GetMaxLineWidth();
                if (uVar2 == field_0) {
                    pLVar4 = (LightSource*)(*this_02).operator->();
                    psVar5 = pLVar4->GetConfigurationSource();
                    pSVar7 = (StockPlayerOffer*)(*psVar5).operator->();
                    uVar2 = pSVar7->GetCompletedGold();
                    if (uVar2 == field_4) {
                        pEVar8 = (Entity*)(*this_02).operator->();
                        pGVar9 = pEVar8->GetNode();
                        pGVar9->Detach();
                    }
                }
            }
            local_58 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)this_00;
            this_00->clear();
            psVar10 = (shared_ptr<World>*)mapSquare->GetWorld();
            this_03 = (WorldmapAreaMetadata*)(*psVar10).operator->();
            this_04 = (DynamicPointLightManager*)this_03->GetOrigin();
            local_80 = eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>();
            local_80.reserve(8);
            this_04->GetLightsInMapSquare(local_80, field_0, field_4);
            psVar5 = (shared_ptr<StaticPointLight>*)local_80.HeapBeginPtr();
            local_60 = (shared_ptr<StaticPointLight>*)local_80.end();
            if (psVar5 != local_60) {
                do {
                    local_38 = ((OSRenderCore_RenderThread_Common*)(*psVar5).operator->())->GetNumVerts();
                    local_38 = ~local_38;
                    psVar10 = (shared_ptr<World>*)mapSquare->GetWorld();
                    pWVar11 = (World*)(*psVar10).operator->();
                    this_06 = pWVar11->GetPointLight(local_38);
                    cVar1 = shared_ptr::operator_cast_to_bool(this_06);
                    if (!cVar1) {
                        local_48[0] = local_48[0] & 18446744069414584320;
                        local_50 = graphics::GraphNode::Create<int>(*local_48);
                        pGVar9 = mapSquare->GetNode();
                        pGVar9->AddChild(local_50);
                        arg3_00 = (ConfigProvider**)mapSquare->GetWorld();
                        MakeSharedPool<LightSource, 1024>::MakeShared<
                            graphics::GraphNode*&, shared_ptr<World> const&, ConfigProvider*&,
                            shared_ptr<StaticPointLight> const&, unsigned int&>(
                            (GraphNode**)local_48, (shared_ptr<World>*)&local_50, arg3_00,
                            (shared_ptr<StaticPointLight>*)&local_68, (unsigned int*)psVar5);
                        this_01 = local_58;
                        local_58->push_back(*local_48);
                        this_07 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_01->back();
                        pGVar9 = local_50;
                        pGVar9->SetEntity((GraphEntity*)this_07->end());
                        pGVar9 = local_50;
                        pLVar4 = (LightSource*)(*this_07).operator->();
                        local_48[0] = pLVar4->GetLocalPosition();
                        pGVar9->SetTranslation(*local_48);
                        pLVar4 = (LightSource*)(*this_07).operator->();
                        pLVar4->RecalculateAABB();
                        psVar10 = (shared_ptr<World>*)mapSquare->GetWorld();
                        pWVar11 = (World*)(*psVar10).operator->();
                        pWVar11->AddPointLight(local_38, *this_07);
                    } else {
                        pTVar6 = (TextRun*)(*psVar5).operator->();
                        uVar2 = pTVar6->GetMaxLineWidth();
                        if (uVar2 == field_0) {
                            pSVar7 = (StockPlayerOffer*)(*psVar5).operator->();
                            uVar2 = pSVar7->GetCompletedGold();
                            if (uVar2 == field_4) {
                                pEVar8 = (Entity*)(*this_06).operator->();
                                pGVar9 = pEVar8->GetNode();
                                pGVar9 = (GraphNode*)pGVar9->GetParent();
                                pGVar12 = mapSquare->GetNode();
                                if (pGVar9 != pGVar12) {
                                    pEVar8 = (Entity*)(*this_06).operator->();
                                    pGVar9 = pEVar8->GetNode();
                                    pGVar9->Detach();
                                    pGVar9 = mapSquare->GetNode();
                                    pEVar8 = (Entity*)(*this_06).operator->();
                                    pGVar12 = pEVar8->GetNode();
                                    pGVar9->AddChild(pGVar12);
                                }
                            }
                        }
                        local_58->push_back(*this_06);
                        plVar13 = (long*)(*this_06).operator->();
                        pLVar4 = (LightSource*)(*this_06).operator->();
                        local_48[0] = pLVar4->GetLocalPosition();
                        (**(void (**)(...))(*plVar13 + 88))(plVar13, local_48);
                        pLVar4 = (LightSource*)(*this_06).operator->();
                        pLVar4->RecalculateAABB();
                    }
                    psVar5 = psVar5 + 16;
                } while (psVar5 != local_60);
            }
            if ((local_31 == '\0') || (cVar1 = local_58->empty(), !cVar1)) {
                field_360 = true;
            }
        }
    }

    // 0x100416a40
    void MapSquarePointLights::RebuildPointLightGridTexture(unsigned int arg1) {
        uint8_t* this_00;
        unsigned int uVar1;
        Layout* this_01;
        MapSquarePointLights* pMVar2;
        int iVar3;
        int iVar4;
        unsigned int uVar5;
        uint32_t uVar6;
        long lVar7;
        long lVar8;
        long lVar9;
        shared_ptr<LightSource>* psVar10;
        shared_ptr<LightSource>* psVar11;
        shared_ptr<LightSource>* psVar12;
        LightSource* pLVar13;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        unsigned long uVar14;
        unsigned int* puVar15;
        uint8_t* pbVar16;
        array<bool, 129ul>* this_03;
        uint8_t* puVar17;
        float* pfVar18;
        shared_ptr<StaticPointLight>* psVar19;
        StockPlayerOffer* this_05;
        Layout* this_06;
        PointLightGridTextureData* pPVar20;
        PointLightSM* pPVar21;
        Logger* this_07;
        int iVar22;
        int iVar23;
        unsigned long uVar24;
        unsigned long uVar25;
        uint32_t in_XMM1_Da;
        Array<std::array<bool, 129ul>, BucketAllocatorEASTL>* in_stack_fffffffffffffed8;
        uint32_t uVar26;
        PointLight local_118;
        Array<std::array<bool, 129ul>, BucketAllocatorEASTL> local_e0;
        Vector3T<float>* local_c8;
        ReturnValue local_c0;
        LightSource* local_b0;
        Layout* local_a8;
        Vector3T<float> local_a0;
        int local_90;
        int local_8c;
        vector<shared_ptr<LightSource>, BucketAllocatorEASTL> local_88;
        unsigned long local_70;
        unsigned long local_68;
        LightSource* local_60;
        unsigned long local_58;
        unsigned int local_4c;
        unsigned long local_48;
        MapSquarePointLights* local_40;
        int local_34;

        if (field_364 != arg1) {
            field_364 = arg1;
            make_shared<graphics::PointLightGridTextureData>(&local_c0);
            local_88 = eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>();
            local_a8 = (Layout*)&field_32;
            lVar7 = local_a8->size();
            puVar17 = &field_56;
            lVar8 = puVar17->size();
            this_00 = &field_312;
            local_40 = this;
            lVar9 = this_00->size();
            local_88.reserve(lVar7 + lVar8 + lVar9);
            psVar10 = (shared_ptr<LightSource>*)local_88.end();
            this_01 = local_a8;
            psVar11 = (shared_ptr<LightSource>*)local_a8->HeapBeginPtr();
            psVar12 = (shared_ptr<LightSource>*)this_01->end();
            local_88.insert<shared_ptr<LightSource> const*>(psVar10, psVar11, psVar12);
            psVar10 = (shared_ptr<LightSource>*)local_88.end();
            psVar11 = (shared_ptr<LightSource>*)puVar17->HeapBeginPtr();
            psVar12 = (shared_ptr<LightSource>*)puVar17->end();
            local_88.insert<shared_ptr<LightSource> const*>(psVar10, psVar11, psVar12);
            psVar10 = (shared_ptr<LightSource>*)local_88.end();
            psVar11 = (shared_ptr<LightSource>*)this_00->HeapBeginPtr();
            psVar12 = (shared_ptr<LightSource>*)this_00->end();
            local_88.insert<shared_ptr<LightSource> const*>(psVar10, psVar11, psVar12);
            lVar7 = local_88.size();
            if (lVar7 != 0) {
                local_c8 = (Vector3T<float>*)&local_40->field_16;
                local_4c = 1;
                uVar14 = 0;
                do {
                    uVar26 = (uint32_t)((unsigned long)in_stack_fffffffffffffed8 >> 32);
                    if (uVar14 == 255) {
                        this_07 = logger::default_logger();
                        uVar5 = local_40->field_0;
                        uVar1 = local_40->field_4;
                        uVar6 = local_88.size();
                        iVar22 = local_88.size();
                        this_07->Log(false, 3,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                     "runetek5/scene/entities/MapSquarePointLights.cpp",
                                     630,
                                     "Map square %u,%u has too many point lights (%d) for the point light indices "
                                     "effect (max %u), skipping %d extra lights",
                                     uVar5, uVar1, uVar6, 255, (((uint64_t)uVar26 << 32) | (uint32_t)(iVar22 - 255)));
                        break;
                    }
                    local_58 = local_a8->size();
                    local_70 = uVar14;
                    psVar10 = &local_88[uVar14];
                    pLVar13 = (LightSource*)**psVar10;
                    local_b0 = pLVar13;
                    local_a0._0_8_ = pLVar13->GetLocalPosition();
                    local_a0._8_4_ = in_XMM1_Da;
                    local_60 = pLVar13;
                    this_02 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                  pLVar13->GetInfluenceRanges();
                    uVar14 = this_02->end();
                    local_e0 = Array<std::array<bool, 129ul>, BucketAllocatorEASTL>((long)(int)uVar14);
                    local_48 = uVar14;
                    if (0 < (int)uVar14) {
                        local_68 = uVar14 & 4294967295;
                        uVar14 = 0;
                        do {
                            puVar15 = (unsigned int*)(*this_02)[uVar14];
                            uVar5 = *puVar15;
                            pbVar16 = (uint8_t*)(*this_02)[uVar14];
                            if ((unsigned long)*pbVar16 != 0) {
                                uVar24 = (unsigned long)(uVar5 >> 8);
                                uVar25 = *pbVar16 + uVar24;
                                do {
                                    this_03 = &local_e0[uVar14];
                                    puVar17 = (uint8_t*)(*this_03)[uVar24];
                                    *puVar17 = 1;
                                    uVar24 = uVar24 + 1;
                                } while (uVar24 < uVar25);
                            }
                            uVar14 = uVar14 + 1;
                        } while (uVar14 != local_68);
                    }
                    if (local_70 < local_58) {
                        local_a0 -= *local_c8;
                    }
                    iVar22 = (int)(((unsigned int)(local_48 >> 31) & 1) + (int)local_48) >> 1;
                    pfVar18 = (float*)local_a0.SSOBeginPtr();
                    iVar23 = ((int)*pfVar18 >> 7) - iVar22;
                    pfVar18 = (float*)local_a0.SSOBeginPtr();
                    local_68 = (((uint64_t)local_68._4_4_ << 32) | (uint32_t)(((int)*pfVar18 >> 7) + iVar22));
                    pfVar18 = (float*)local_a0.second();
                    local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)(((int)*pfVar18 >> 7) - iVar22));
                    pfVar18 = (float*)local_a0.second();
                    pLVar13 = local_60;
                    iVar22 = ((int)*pfVar18 >> 7) + iVar22;
                    if (local_70 < local_58) {
                        iVar4 = (int)local_68;
                        local_90 = (int)local_48;
                    } else {
                        local_58 = (((uint64_t)local_58._4_4_ << 32) | (uint32_t)iVar23);
                        psVar19 = local_60->GetConfigurationSource();
                        iVar23 = ((TextRun*)(*psVar19).operator->())->GetMaxLineWidth();
                        pMVar2 = local_40;
                        uVar5 = local_40->field_0;
                        psVar19 = pLVar13->GetConfigurationSource();
                        this_05 = (StockPlayerOffer*)(*psVar19).operator->();
                        iVar4 = (iVar23 - uVar5) * 64;
                        iVar23 = this_05->GetCompletedGold();
                        iVar3 = (iVar23 - pMVar2->field_4) * 64;
                        iVar23 = (int)local_58 + iVar4;
                        iVar4 = (int)local_68 + iVar4;
                        local_90 = (int)local_48 + iVar3;
                        iVar22 = iVar22 + iVar3;
                    }
                    local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)local_90);
                    if (local_90 < 0) {
                        local_90 = 0;
                    }
                    if (62 < iVar22) {
                        iVar22 = 63;
                    }
                    local_58 = (((uint64_t)local_58._4_4_ << 32) | (uint32_t)iVar23);
                    if (iVar23 < 0) {
                        iVar23 = 0;
                    }
                    if (62 < iVar4) {
                        iVar4 = 63;
                    }
                    local_68 = (((uint64_t)local_68._4_4_ << 32) | (uint32_t)iVar4);
                    local_8c = iVar23;
                    this_06 = (Layout*)local_60->GetWorldPosition();
                    pfVar18 = (float*)this_06->SSOBeginPtr();
                    if ((((*pfVar18 <= 0.0 && *pfVar18 != 0.0) ||
                          (pfVar18 = (float*)this_06->y(), *pfVar18 <= 0.0 && *pfVar18 != 0.0)) ||
                         (pfVar18 = (float*)this_06->second(), *pfVar18 <= 0.0 && *pfVar18 != 0.0)) ||
                        (iVar23 = local_b0->field_192->GetX(), iVar23 != 0)) {
                        pfVar18 = (float*)local_a0.SSOBeginPtr();
                        in_XMM1_Da = 1115684864;
                        local_34 = (int)(*pfVar18 + 64.0) >> 7;
                        pfVar18 = (float*)local_a0.second();
                        iVar23 = (int)(*pfVar18 + 64.0) >> 7;
                        pfVar18 = (float*)this_06->SSOBeginPtr();
                        if (*pfVar18 <= 0.0 && *pfVar18 != 0.0) {
                            pfVar18 = (float*)this_06->SSOBeginPtr();
                            LogAssert("worldPosition.x() >= 0.0f",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/scene/entities/MapSquarePointLights.cpp",
                                      707, "Found light with invalid position X (%f) at %u,%u,%d,%d", (double)*pfVar18,
                                      (unsigned long)local_40->field_0, (unsigned long)local_40->field_4, local_34,
                                      iVar23);
                        }
                        pfVar18 = (float*)this_06->y();
                        if (*pfVar18 <= 0.0 && *pfVar18 != 0.0) {
                            pfVar18 = (float*)this_06->y();
                            LogAssert("worldPosition.y() >= 0.0f",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/scene/entities/MapSquarePointLights.cpp",
                                      708, "Found light with invalid position Y (%f) at %u,%u,%d,%d", (double)*pfVar18,
                                      (unsigned long)local_40->field_0, (unsigned long)local_40->field_4, local_34,
                                      iVar23);
                        }
                        pfVar18 = (float*)this_06->second();
                        if (*pfVar18 <= 0.0 && *pfVar18 != 0.0) {
                            pfVar18 = (float*)this_06->second();
                            LogAssert("worldPosition.z() >= 0.0f",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/scene/entities/MapSquarePointLights.cpp",
                                      709, "Found light with invalid position Z (%f) at %u,%u,%d,%d", (double)*pfVar18,
                                      (unsigned long)local_40->field_0, (unsigned long)local_40->field_4, local_34,
                                      iVar23);
                        }
                        puVar17 = local_b0->field_192;
                        iVar4 = puVar17->GetX();
                        if (iVar4 == 0) {
                            uVar5 = puVar17->GetX();
                            LogAssert("light.GetRadius() > 0.0f",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/scene/entities/MapSquarePointLights.cpp",
                                      710, "Found light with invalid radius (%f) at %u,%u,%d,%d", (unsigned long)uVar5,
                                      (unsigned long)local_40->field_0, local_40->field_4, local_34, iVar23);
                        }
                    }
                    pPVar20 = (PointLightGridTextureData*)local_c0.operator->();
                    iVar23 = local_60->GetLevelMin();
                    iVar4 = local_60->GetLevelMax();
                    in_stack_fffffffffffffed8 = &local_e0;
                    pPVar20->ApplyLightIDToTextureData(local_4c, iVar23, iVar4, local_90, iVar22, local_8c,
                                                       (int)local_68, (int)local_48 >> 31 & -(int)local_48,
                                                       (int)local_58 >> 31 & -(int)local_58, local_e0);
                    pPVar20 = (PointLightGridTextureData*)local_c0.operator->();
                    pLVar13 = local_60;
                    local_118.GetPointLight();
                    pPVar21 = pLVar13->GetPointLightSM();
                    if (pPVar21 == nullptr) {
                        iVar22 = -1;
                    } else {
                        pPVar21 = pLVar13->GetPointLightSM();
                        iVar22 = pPVar21->GetID();
                    }
                    pPVar20->ApplyLightDataToTextureData(local_118, local_4c, iVar22);
                    local_4c = local_4c + 1;
                    uVar14 = local_70 + 1;
                    uVar24 = local_88.size();
                } while (uVar14 < uVar24);
            }
            local_40->m_pointLightTexture->UpdateTexture(local_c0);
        }
    }

    // 0x100417200
    void MapSquarePointLights::MainDraw(unsigned int arg1) {
        UpdateEffect();
    }

    // 0x100417210
    void MapSquarePointLights::UpdateEffect() {
        uint8_t* this_00;
        uint8_t* this_01;
        uint8_t* this_02;
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        long lVar3;
        long lVar4;
        long lVar5;
        unsigned long uVar6;
        long lVar7;
        shared_ptr* psVar8;
        shared_ptr* psVar9;
        LightSource* pLVar10;
        uint32_t* puVar11;
        shared_ptr<graphics::PointLightIndicesEffect>* this_03;
        unsigned long uVar12;
        uint8_t* this_05;
        uint32_t uVar13;

        midiPlayerMainThread = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)m_pointLightTexture->GetScreen();
        if (*midiPlayerMainThread != nullptr) {
            this_00 = &field_32;
            lVar3 = this_00->size();
            this_01 = &field_56;
            lVar4 = this_01->size();
            this_02 = &field_312;
            lVar5 = this_02->size();
            uVar12 = lVar5 + lVar4 + lVar3;
            this_05 = &field_368;
            uVar6 = this_05->size();
            if (uVar6 != uVar12) {
                this_05->resize(uVar12);
            }
            lVar3 = this_05->size();
            lVar4 = this_00->size();
            lVar5 = this_01->size();
            lVar7 = this_02->size();
            if (lVar3 != lVar7 + lVar5 + lVar4) {
                LogAssert("m_pointLightIntensities.size() == m_lightSourcesLocal.size() + m_lightSourcesRemote.size() "
                          "+ m_lightSourcesDynamic.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "entities/MapSquarePointLights.cpp",
                          437, nullptr);
            }
            psVar8 = (shared_ptr*)this_00->HeapBeginPtr();
            psVar9 = (shared_ptr*)this_00->end();
            if (psVar8 == psVar9) {
                uVar6 = 0;
            } else {
                uVar12 = 0;
                do {
                    if (!(shared_ptr::operator_cast_to_bool(psVar8))) {
                        LogAssert("light",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "scene/entities/MapSquarePointLights.cpp",
                                  443, nullptr);
                    }
                    pLVar10 = (LightSource*)(*psVar8).operator->();
                    uVar13 = pLVar10->GetCurrentIntensity();
                    uVar6 = (unsigned long)((int)uVar12 + 1);
                    puVar11 = (uint32_t*)(*this_05)[uVar12];
                    *puVar11 = uVar13;
                    psVar8 = psVar8 + 1;
                    uVar12 = uVar6;
                } while (psVar8 != psVar9);
            }
            psVar8 = (shared_ptr*)this_01->HeapBeginPtr();
            psVar9 = (shared_ptr*)this_01->end();
            for (; psVar8 != psVar9; psVar8 = psVar8 + 1) {
                if (!(shared_ptr::operator_cast_to_bool(psVar8))) {
                    LogAssert("light",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/entities/MapSquarePointLights.cpp",
                              448, nullptr);
                }
                pLVar10 = (LightSource*)(*psVar8).operator->();
                uVar13 = pLVar10->GetCurrentIntensity();
                puVar11 = (uint32_t*)(*this_05)[uVar6];
                *puVar11 = uVar13;
                uVar6 = (unsigned long)((int)uVar6 + 1);
            }
            psVar8 = (shared_ptr*)this_02->HeapBeginPtr();
            psVar9 = (shared_ptr*)this_02->end();
            for (; psVar8 != psVar9; psVar8 = psVar8 + 1) {
                if (!(shared_ptr::operator_cast_to_bool(psVar8))) {
                    LogAssert("light",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/entities/MapSquarePointLights.cpp",
                              453, nullptr);
                }
                pLVar10 = (LightSource*)(*psVar8).operator->();
                uVar13 = pLVar10->GetCurrentIntensity();
                puVar11 = (uint32_t*)(*this_05)[uVar6];
                *puVar11 = uVar13;
                uVar6 = (unsigned long)((int)uVar6 + 1);
            }
            this_03 = (shared_ptr<graphics::PointLightIndicesEffect>*)m_pointLightTexture->GetScreen();
            ((PointLightIndicesEffect*)(*this_03).operator->())->SetPointLightIntensities(*this_05);
        }
    }

    // 0x100417850
    void MapSquarePointLights::SetLocalLightSources(
        const eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>& lightSources) {
        field_32.clear();
        auto lightSource1 = lightSources.HeapBeginPtr();
        auto lightSource2 = lightSources.end();
        field_32.assign<shared_ptr<LightSource> const*>(lightSource1, lightSource2);
        field_360 = true;
    }

    // 0x1004178a0
    void MapSquarePointLights::SetLocalOrigin(math::Vector3T<float> vector3) {
        Vector3T<float> local_18;

        ((vector3 + 16))->SetXYZ(local_18);
    }

    // 0x1004178d0
    uint8_t* MapSquarePointLights::GetLocalOrigin() {
        return &field_16;
    }

    // 0x1004491a0: MapSquarePointLights::GetLightSourcesDynamic() const has the same machine code as CombinedLocationSection::GetHighlightState()

} // namespace jag::game
