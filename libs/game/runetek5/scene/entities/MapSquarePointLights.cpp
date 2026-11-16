// libs/game/runetek5/scene/entities/MapSquarePointLights.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "MapSquarePointLights.h"

namespace jag::game {
    // 0x1000096a0: the linker folded this into BaseApp::GetExitAfterInit(), which has identical code
    char MapSquarePointLights::GetStaticPointLightsLoaded() const;

    // 0x10002d850: the linker folded this into oldscape::option::Option<int>::GetDefaultValue() const, which has identical code
    MapSquarePointLights::GetLightSourcesLocal() const;

    // 0x1000b7910: the linker folded this into oldscape::minimenu::MinimenuEntry::GetSubjectName() const, which has identical code
    MapSquarePointLights::GetLightSourcesRemote() const;

    // 0x100411c10, 1296 bytes, placed by class name and debug map
    // MapSquarePointLights::LoadStaticPointLights(MapSquare&, Js5ResourceProvider*, ConfigProvider*, LODLevel const&, LODSettings const&)
    char MapSquarePointLights::LoadStaticPointLights(MapSquare* param_1, Js5ResourceProvider* param_2,
                                                     ConfigProvider* param_3, LODLevel* param_4, LODSettings* param_5) {
        byte bVar1;
        uint uVar2;
        char cVar4;
        char cVar5;
        bool bVar6;
        uint uVar7;
        GraphNode* pGVar8;
        shared_ptr* psVar9;
        shared_ptr<World>* psVar10;
        World* pWVar11;
        HeightMap* pHVar12;
        Entity* pEVar13;
        GraphNode* pGVar14;
        long lVar15;
        long lVar16;
        GraphNode** ppGVar17;
        ConfigProvider** ppCVar18;
        GraphEntity* pGVar19;
        LightSource* pLVar20;
        char* pcVar21;
        MapSquare* pMVar22;
        MapSquarePointLights* pMVar23;
        int iVar24;
        int iVar25;
        ulong uVar26;
        vector<shared_ptr<LightSource>, BucketAllocatorEASTL>* this_00;
        uint* in_stack_ffffffffffffff08;
        StaticPointLightLoader local_f0;
        ConfigProvider* local_a8;
        ulong local_a0;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* local_98;
        vector<shared_ptr<LightSource>, BucketAllocatorEASTL>* local_90;
        GraphNode* local_80;
        undefined1 local_70[8];
        shared_ptr local_68[3];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_a8 = param_3;
        if (field_336 != '\0') {
            field_336 = 0;
            pGVar8 = (GraphNode*)param_1->GetNode();
            ClearExistingLights(this, pGVar8);
        }
        bVar1 = *param_4;
        cVar4 = '\x01';
        if (bVar1 < 4) {
            if ((param_5->GetLowestUsableLOD() < bVar1) || (m_staticPointLightsLoaded != '\0')) {
                cVar4 = '\x01';
            } else {
                local_90 = (vector<shared_ptr<LightSource>, BucketAllocatorEASTL>*)field_32;
                cVar5 = local_90->empty();
                pMVar22 = param_1;
                cVar4 = '\x01';
                if (cVar5 != '\0') {
                    uVar7 = field_0;
                    uVar2 = field_4;
                    psVar9 = (shared_ptr*)param_1->GetContentType();
                    new (&local_f0) StaticPointLightLoader(uVar7, uVar2, psVar9);
                    psVar10 = (shared_ptr<World>*)pMVar22->GetWorld();
                    pWVar11 = (World*)shared_ptr<World>::operator->(psVar10);
                    pHVar12 = (HeightMap*)pWVar11->GetHeightMap();
                    local_70[7] = local_f0.Load(param_2, pHVar12);
                    if (local_70[7] != '\0') {
                        local_98 =
                            (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)local_f0.second();
                        uVar7 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(
                            local_98);
                        this_00 = local_90;
                        local_a0 = (ulong)uVar7;
                        eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>::reserve(local_90, local_a0);
                        pMVar22 = param_1;
                        if (uVar7 != 0) {
                            uVar26 = 0;
                            do {
                                local_70._0_4_ = (uint)uVar26 | (((MapSquarePointLights*)this)->field_0 & 255) << 16 |
                                                 (((MapSquarePointLights*)this)->field_4 & 255) << 8;
                                psVar10 = (shared_ptr<World>*)pMVar22->GetWorld();
                                pWVar11 = (World*)shared_ptr<World>::operator->(psVar10);
                                psVar9 = (shared_ptr*)pWVar11->GetPointLight(local_70._0_4_);
                                bVar6 = shared_ptr::operator_cast_to_bool(psVar9);
                                if (bVar6) {
                                    eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>::push_back(this_00,
                                                                                                            psVar9);
                                    pEVar13 =
                                        (Entity*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)psVar9);
                                    pGVar8 = (GraphNode*)pEVar13->GetNode();
                                    pEVar13 =
                                        (Entity*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)psVar9);
                                    pGVar14 = (GraphNode*)pEVar13->GetNode();
                                    lVar15 = pGVar14->GetParent();
                                    if (lVar15 == 0) {
                                        pGVar14 = (GraphNode*)pMVar22->GetNode();
                                        pGVar14->AddChild(pGVar8);
                                    } else {
                                        pEVar13 = (Entity*)shared_ptr<LightSource>::operator->(
                                            (shared_ptr<LightSource>*)psVar9);
                                        pGVar14 = (GraphNode*)pEVar13->GetNode();
                                        lVar15 = pGVar14->GetParent();
                                        lVar16 = pMVar22->GetNode();
                                        if (lVar15 != lVar16) {
                                            /* WARNING: Subroutine does not return */
                                            LogAssert(
                                                "existingLight->GetNode()->GetParent() == mapSquare.GetNode()",
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "game/runetek5/scene/entities/MapSquarePointLights.cpp",
                                                61, (char*)0);
                                        }
                                    }
                                    pLVar20 = (LightSource*)shared_ptr<LightSource>::operator->(
                                        (shared_ptr<LightSource>*)psVar9);
                                    local_68[0]._0_8_ = pLVar20->GetLocalPosition();
                                    pGVar8->SetTranslation((Vector3T*)(local_70 + 8));
                                    pLVar20 = (LightSource*)shared_ptr<LightSource>::operator->(
                                        (shared_ptr<LightSource>*)psVar9);
                                    pLVar20->RecalculateAABB();
                                } else {
                                    local_68[0]._0_8_ = local_68[0]._0_8_ & 18446744069414584320;
                                    local_80 = graphics::GraphNode::Create<int>((int*)(local_70 + 8));
                                    pGVar8 = (GraphNode*)pMVar22->GetNode();
                                    pGVar8->AddChild(local_80);
                                    ppGVar17 = (GraphNode**)pMVar22->GetWorld();
                                    ppCVar18 = (ConfigProvider**)
                                        eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>::operator[](
                                            (vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>*)local_98,
                                            uVar26);
                                    psVar9 = (shared_ptr*)(local_70 + 8);
                                    MakeSharedPool<LightSource, 1024>::MakeShared<
                                        graphics::GraphNode*&, shared_ptr<World> const&, ConfigProvider*&,
                                        shared_ptr<StaticPointLight> const&, unsigned int&>(
                                        psVar9, (MakeSharedPool<LightSource, 1024>*)&local_80, ppGVar17,
                                        (shared_ptr*)&local_a8, ppCVar18, (shared_ptr*)local_70,
                                        in_stack_ffffffffffffff08);
                                    eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>::push_back(this_00,
                                                                                                            psVar9);
                                    psVar9->~shared_ptr();
                                    psVar9 =
                                        (shared_ptr*)eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>::back(
                                            this_00);
                                    pGVar8 = local_80;
                                    pGVar19 = (GraphEntity*)psVar9->end();
                                    pGVar8->SetEntity(pGVar19);
                                    pGVar8 = local_80;
                                    pLVar20 = (LightSource*)shared_ptr<LightSource>::operator->(
                                        (shared_ptr<LightSource>*)psVar9);
                                    local_68[0]._0_8_ = pLVar20->GetLocalPosition();
                                    pGVar8->SetTranslation((Vector3T*)(local_70 + 8));
                                    pLVar20 = (LightSource*)shared_ptr<LightSource>::operator->(
                                        (shared_ptr<LightSource>*)psVar9);
                                    pLVar20->RecalculateAABB();
                                    psVar10 = (shared_ptr<World>*)pMVar22->GetWorld();
                                    pWVar11 = (World*)shared_ptr<World>::operator->(psVar10);
                                    pWVar11->AddPointLight(local_70._0_4_, psVar9);
                                }
                                uVar26 = uVar26 + 1;
                                this_00 = local_90;
                            } while (local_a0 != uVar26);
                        }
                        pMVar23 = (MapSquarePointLights*)this;
                        ValidateStaticPointLights((MapSquarePointLights*)(local_70 + 8));
                        lVar15 = 0;
                        uVar26 = 0;
                        do {
                            pcVar21 = (char*)eastl::vector<
                                bool, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>::
                            operator[]((vector<bool, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true,
                                                                                   eastl::allocator>>*)(local_70 + 8),
                                       uVar26);
                            if (*pcVar21 != '\0') {
                                iVar24 = 0;
                                iVar25 = 0;
                                if ((uint)uVar26 < 8) {
                                    iVar24 = *(int*)((long)&PTR___mh_execute_header_100d42c90 + lVar15);
                                    iVar25 = *(int*)((long)&DAT_100d42cb0 + lVar15);
                                }
                                psVar10 = (shared_ptr<World>*)param_1->GetWorld();
                                pWVar11 = (World*)shared_ptr<World>::operator->(psVar10);
                                psVar9 =
                                    (shared_ptr*)pWVar11->GetMapSquare(iVar24 + ((MapSquarePointLights*)this)->field_0,
                                                                       iVar25 + ((MapSquarePointLights*)this)->field_4);
                                bVar6 = shared_ptr::operator_cast_to_bool(psVar9);
                                pMVar23 = (MapSquarePointLights*)this;
                                if (bVar6) {
                                    pMVar22 =
                                        (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)psVar9);
                                    pMVar23 = (MapSquarePointLights*)pMVar22->GetMapSquarePointLights();
                                    RequestRemoteLightSourceUpdate(pMVar23);
                                    pMVar23 = (MapSquarePointLights*)this;
                                }
                            }
                            uVar26 = uVar26 + 1;
                            lVar15 = lVar15 + 4;
                        } while (uVar26 != 8);
                        pMVar23->m_staticPointLightsLoaded = '\x01';
                        pMVar23->field_344 = 1;
                        pMVar23->field_352 = 1;
                        pMVar23->field_360 = true;
                        ((local_70 + 8))->~fixed_vector();
                    }
                    local_f0.~StaticPointLightLoader();
                    cVar4 = local_70[7];
                }
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return cVar4;
    }

    // 0x100412e60, 512 bytes, placed by class name and debug map
    // MapSquarePointLights::ClearExistingLights(graphics::GraphNode*)
    void MapSquarePointLights::ClearExistingLights(GraphNode* param_1) {
        undefined1* puVar1;
        char cVar2;
        shared_ptr<LightSource>* psVar3;
        shared_ptr<LightSource>* psVar4;
        Entity* pEVar5;
        GraphNode* pGVar6;
        vector<shared_ptr<oldscape::rseven::Terrain>, eastl::allocator>* this_00;
        vector<shared_ptr<oldscape::rseven::Terrain>, eastl::allocator>* pvVar7;
        LightSource* this_01;

        if (param_1 == (GraphNode*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("mapSquareNode != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/MapSquarePointLights.cpp",
                      332, (char*)0);
        }
        m_staticPointLightsLoaded = '\0';
        puVar1 = field_32;
        cVar2 = puVar1->empty();
        if (cVar2 == '\0') {
            psVar3 = (shared_ptr<LightSource>*)puVar1->HeapBeginPtr();
            psVar4 = (shared_ptr<LightSource>*)puVar1->end();
            for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
                pEVar5 = (Entity*)shared_ptr<LightSource>::operator->(psVar3);
                pGVar6 = (GraphNode*)pEVar5->GetNode();
                pGVar6 = (GraphNode*)pGVar6->GetParent();
                if (pGVar6 != param_1) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("lightSource->GetNode()->GetParent() == mapSquareNode",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/entities/MapSquarePointLights.cpp",
                              342, (char*)0);
                }
                pEVar5 = (Entity*)shared_ptr<LightSource>::operator->(psVar3);
                pGVar6 = (GraphNode*)pEVar5->GetNode();
                param_1->RemoveChild(pGVar6);
            }
            puVar1->clear();
        }
        puVar1 = &field_312;
        cVar2 = puVar1->empty();
        if (cVar2 == '\0') {
            psVar3 = (shared_ptr<LightSource>*)puVar1->HeapBeginPtr();
            psVar4 = (shared_ptr<LightSource>*)puVar1->end();
            for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
                pEVar5 = (Entity*)shared_ptr<LightSource>::operator->(psVar3);
                pGVar6 = (GraphNode*)pEVar5->GetNode();
                pGVar6 = (GraphNode*)pGVar6->GetParent();
                if (pGVar6 == param_1) {
                    pEVar5 = (Entity*)shared_ptr<LightSource>::operator->(psVar3);
                    pGVar6 = (GraphNode*)pEVar5->GetNode();
                    param_1->RemoveChild(pGVar6);
                }
            }
            puVar1->clear();
        }
        this_00 = (vector<shared_ptr<oldscape::rseven::Terrain>, eastl::allocator>*)(&field_80)->HeapBeginPtr();
        pvVar7 = (vector<shared_ptr<oldscape::rseven::Terrain>, eastl::allocator>*)(&field_80)->end();
        for (; this_00 != pvVar7; this_00 = this_00 + 24) {
            eastl::vector<shared_ptr<oldscape::rseven::Terrain>, eastl::allocator>::clear(this_00);
        }
        puVar1 = &field_56;
        psVar3 = (shared_ptr<LightSource>*)puVar1->HeapBeginPtr();
        psVar4 = (shared_ptr<LightSource>*)puVar1->end();
        for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
            this_01 = (LightSource*)shared_ptr<LightSource>::operator->(psVar3);
            this_01->RemoveRemoteMapSquare(field_0, field_4);
        }
        puVar1->clear();
    }

    // 0x100415150, 2704 bytes, placed by class name
    // MapSquarePointLights::ValidateStaticPointLights()
    MapSquarePointLights* MapSquarePointLights::ValidateStaticPointLights() {
        bool bVar1;
        uint7 uVar2;
        undefined4* puVar3;
        Array<unsigned int, eastl::allocator>* this_00;
        undefined8 uVar4;
        byte bVar5;
        uint uVar6;
        int extraout_var;
        long lVar7;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_01;
        byte* pbVar8;
        vector<shared_ptr<oldscape::rseven::Terrain>, eastl::allocator>* this_02;
        ulong uVar9;
        shared_ptr* psVar10;
        shared_ptr* psVar11;
        LightSource* pLVar12;
        vector* pvVar13;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_03;
        Array<bool, BucketAllocatorEASTL>* pAVar14;
        uint* puVar15;
        undefined1* puVar16;
        float* pfVar17;
        char* pcVar18;
        undefined8 uVar19;
        vector<shared_ptr<LightSource>, BucketAllocatorEASTL>* this_04;
        uint uVar20;
        int iVar21;
        vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>* this_05;
        type* ptVar22;
        undefined4* in_RSI;
        type* ptVar23;
        LogStream* this_06;
        undefined1 uVar24;
        uint uVar25;
        type* ptVar26;
        uint uVar27;
        type* ptVar28;
        ulong uVar29;
        shared_ptr* psVar30;
        uint uVar31;
        float in_XMM1_Da;
        float fVar32;
        char* in_stack_fffffffffffffda8;
        undefined4 uVar33;
        undefined8 local_220;
        float local_218;
        vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>* local_210;
        shared_ptr* local_208;
        vector<shared_ptr<LightSource>, BucketAllocatorEASTL> local_200[24];
        Array<Array<bool, BucketAllocatorEASTL>, BucketAllocatorEASTL> local_1e8[24];
        shared_ptr* local_1d0;
        MapSquarePointLights* local_1c8;
        shared_ptr* local_1c0;
        uint local_1b4;
        undefined4* local_1b0;
        ulong local_1a8;
        ulong local_1a0;
        type* local_198;
        uint local_18c;
        type* local_188;
        Array<unsigned int, eastl::allocator>* local_180;
        uint local_174;
        uint local_170;
        uint local_16c;
        uint local_168;
        uint local_164;
        undefined1 local_160[2];
        undefined1 auStack_15e[4];
        undefined2 uStack_15a;
        LogStream local_158;
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_1c8 = this;
        eastl::fixed_vector<bool, 8ul, true, eastl::allocator>::fixed_vector((ulong)this);
        this_05 =
            (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>*)(in_RSI + 20);
        local_1b0 = in_RSI;
        lVar7 = eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>::size(
            this_05);
        if (lVar7 != 0) {
            uVar29 = 0;
            do {
                this_01 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                    eastl::vector<eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>,
                                  eastl::fixed_vector_allocator<24ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>,
                                eastl::fixed_vector_allocator<24ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)this_05,
                        uVar29);
                bVar5 = eastl::vector<
                    int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(this_01);
                pbVar8 = (byte*)eastl::
                    vector<bool, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<bool, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>*)
                            local_1c8,
                        uVar29);
                *pbVar8 = *pbVar8 | bVar5 ^ 1;
                this_02 = (vector<shared_ptr<oldscape::rseven::Terrain>, eastl::allocator>*)
                    eastl::vector<eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>,
                                  eastl::fixed_vector_allocator<24ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>,
                                eastl::fixed_vector_allocator<24ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)this_05,
                        uVar29);
                eastl::vector<shared_ptr<oldscape::rseven::Terrain>, eastl::allocator>::clear(this_02);
                uVar29 = uVar29 + 1;
                uVar9 = eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>,
                                      eastl::allocator>::size(this_05);
            } while (uVar29 < uVar9);
        }
        puVar3 = local_1b0;
        *(undefined1*)((long)local_1b0 + 9) = 0;
        local_210 = this_05;
        eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>::vector();
        psVar30 = (shared_ptr*)(puVar3 + 8);
        psVar10 = (shared_ptr*)psVar30->size();
        eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>::reserve(local_200, (ulong)psVar10);
        psVar11 = (shared_ptr*)psVar30->HeapBeginPtr();
        local_208 = (shared_ptr*)psVar30->end();
        if (psVar11 != local_208) {
            local_1c0 = psVar30;
            do {
                local_1d0 = psVar11;
                pLVar12 = (LightSource*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)psVar11);
                local_220 = pLVar12->GetLocalPosition();
                psVar30 = local_1d0;
                local_218 = in_XMM1_Da;
                lVar7 = shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)local_1d0);
                pvVar13 = ((lVar7 + 192))->SSOBeginPtr(psVar10);
                local_168 = *(uint*)pvVar13;
                pLVar12 = (LightSource*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)psVar30);
                this_03 =
                    (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pLVar12->GetInfluenceRanges();
                Array<Array<bool, BucketAllocatorEASTL>, BucketAllocatorEASTL>::Array(local_1e8);
                uVar6 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_03);
                ptVar23 = (type*)(long)(int)uVar6;
                local_188 = ptVar23;
                local_1e8->set_max_size((ulong)ptVar23, 0);
                if ((int)uVar6 < 1) {
                    bVar1 = false;
                } else {
                    local_198 = (type*)(ulong)uVar6;
                    ptVar26 = (type*)0;
                    bVar1 = false;
                    local_180 = (Array<unsigned int, eastl::allocator>*)this_03;
                    do {
                        this_00 = local_180;
                        pAVar14 = (Array<bool, BucketAllocatorEASTL>*)
                            Array<Array<bool, BucketAllocatorEASTL>, BucketAllocatorEASTL>::operator[](local_1e8,
                                                                                                       (ulong)ptVar26);
                        pAVar14->set_max_size((ulong)local_188, 0);
                        puVar15 = (uint*)Array<unsigned int, eastl::allocator>::operator[](this_00, (ulong)ptVar26);
                        uVar6 = *puVar15;
                        ptVar23 = ptVar26;
                        pbVar8 = (byte*)Array<unsigned int, eastl::allocator>::operator[](this_00, (ulong)ptVar26);
                        uVar29 = (ulong)*pbVar8;
                        if (uVar29 != 0) {
                            ptVar28 = (type*)(ulong)(uVar6 >> 8);
                            ptVar22 = ptVar28 + uVar29;
                            do {
                                pAVar14 = (Array<bool, BucketAllocatorEASTL>*)
                                    Array<Array<bool, BucketAllocatorEASTL>, BucketAllocatorEASTL>::operator[](
                                        local_1e8, (ulong)ptVar26);
                                ptVar23 = ptVar28;
                                puVar16 =
                                    (undefined1*)Array<bool, BucketAllocatorEASTL>::operator[](pAVar14, (ulong)ptVar28);
                                *puVar16 = 1;
                                ptVar28 = ptVar28 + 1;
                            } while (ptVar28 < ptVar22);
                        }
                        bVar1 = (bool)(bVar1 | uVar29 != 0);
                        ptVar26 = ptVar26 + 1;
                    } while (ptVar26 != local_198);
                }
                if (bVar1) {
                    pvVar13 = local_220.SSOBeginPtr(ptVar23);
                    fVar32 = 64.0 - (float)local_168;
                    uVar20 = (uint)(*(float*)pvVar13 + fVar32);
                    uVar31 = (int)uVar20 >> 7;
                    local_188._0_4_ = (float)local_168;
                    local_180._0_4_ = fVar32;
                    pvVar13 = local_220.SSOBeginPtr(ptVar23);
                    in_XMM1_Da = local_188._0_4_ + -64.0;
                    local_188 = (type*)CONCAT44(local_188._4_4_, in_XMM1_Da);
                    local_170 = (uint)(*(float*)pvVar13 + in_XMM1_Da);
                    local_18c = (int)local_170 >> 7;
                    pfVar17 = (float*)local_220.second();
                    local_164 = (uint)(local_180._0_4_ + *pfVar17);
                    local_180 = (Array<unsigned int, eastl::allocator>*)CONCAT44(local_180._4_4_, (int)local_164 >> 7);
                    pfVar17 = (float*)local_220.second();
                    psVar30 = local_1c0;
                    uVar33 = (undefined4)((ulong)in_stack_fffffffffffffda8 >> 32);
                    local_16c = (uint)(local_188._0_4_ + *pfVar17);
                    uVar6 = (int)local_16c >> 7;
                    local_1a8 = (ulong)uVar6;
                    local_174 = uVar20;
                    if (((((int)uVar20 < 8192) && ((int)local_164 < 8192)) && (-1 < (int)local_170)) &&
                        (-1 < (int)local_16c)) {
                        uVar25 = uVar31;
                        if ((int)uVar20 < 0) {
                            uVar25 = 0;
                        }
                        uVar27 = local_18c;
                        if (8191 < (int)local_170) {
                            uVar27 = 63;
                        }
                        iVar21 = (int)local_180._0_4_;
                        if ((int)local_164 < 0) {
                            iVar21 = 0;
                        }
                        if (8191 < (int)local_16c) {
                            uVar6 = 63;
                        }
                        local_198 = (type*)CONCAT44(local_198._4_4_, uVar6);
                        if (iVar21 <= (int)uVar6) {
                            local_1a0 = (ulong)(int)((int)uVar20 >> 31 & -uVar31);
                            uVar29 = (ulong)((int)local_164 >> 31 & -(int)local_180._0_4_);
                            bVar1 = false;
                            local_1b4 = uVar31;
                            local_168 = uVar25;
                            do {
                                local_188 = (type*)CONCAT44(local_188._4_4_, iVar21);
                                uVar9 = local_1a0;
                                uVar6 = local_168;
                                if ((int)local_168 <= (int)uVar27) {
                                    while (!bVar1) {
                                        pAVar14 = (Array<bool, BucketAllocatorEASTL>*)
                                            Array<Array<bool, BucketAllocatorEASTL>, BucketAllocatorEASTL>::operator[](
                                                local_1e8, uVar29);
                                        pcVar18 = (char*)Array<bool, BucketAllocatorEASTL>::operator[](pAVar14, uVar9);
                                        if (*pcVar18 != '\0') {
                                            bVar1 = true;
                                        }
                                        if ((int)uVar27 <= (int)uVar6)
                                            break;
                                        uVar9 = uVar9 + 1;
                                        uVar6 = uVar6 + 1;
                                    }
                                }
                                uVar6 = local_1b4;
                                psVar30 = local_1c0;
                                if ((int)(uint)local_198 <= (int)local_188._0_4_)
                                    break;
                                iVar21 = (int)local_188._0_4_ + 1;
                                uVar29 = uVar29 + 1;
                            } while (!bVar1);
                            if (bVar1) {
                                psVar10 = local_1d0;
                                eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>::push_back(local_200,
                                                                                                        local_1d0);
                                _local_160 = 0;
                                if ((((int)local_174 < 0) || (8191 < (int)local_170)) ||
                                    (((int)local_164 < 0 || (8191 < (int)local_16c)))) {
                                    local_164 = extraout_var << 8;
                                    local_174 = local_174 & 4294967040;
                                    local_1a0 = CONCAT44(local_1a0._4_4_, extraout_var << 8);
                                    local_168 = extraout_var << 8;
                                    local_16c = local_16c & 4294967040;
                                    local_198 = (type*)CONCAT44(local_198._4_4_, extraout_var << 8);
                                    uVar24 = 0;
                                    local_170 = local_170 & 4294967040;
                                    if ((int)local_180._0_4_ <= (int)local_1a8) {
                                        uVar20 = local_18c;
                                        if ((int)local_18c < (int)uVar6) {
                                            uVar20 = uVar6;
                                        }
                                        local_1a8 = (ulong)(((int)local_1a8 - (int)local_180._0_4_) + 1);
                                        local_188 = (type*)(ulong)uVar6;
                                        uVar29 = 0;
                                        uVar31 = uVar6;
                                        do {
                                            if ((int)uVar31 <= (int)local_18c) {
                                                psVar30 = (shared_ptr*)0;
                                                do {
                                                    pAVar14 = (Array<bool, BucketAllocatorEASTL>*)
                                                        Array<Array<bool, BucketAllocatorEASTL>,
                                                              BucketAllocatorEASTL>::operator[](local_1e8, uVar29);
                                                    psVar10 = psVar30;
                                                    pcVar18 = (char*)Array<bool, BucketAllocatorEASTL>::operator[](
                                                        pAVar14, (ulong)psVar30);
                                                    if (*pcVar18 != '\0') {
                                                        iVar21 = (int)local_188 + (int)psVar30;
                                                        if ((int)local_180._0_4_ < 0) {
                                                            if (iVar21 < 0) {
                                                                local_170 = CONCAT31(local_170._1_3_, 1);
                                                            } else {
                                                                if (63 < iVar21) {
                                                                    uVar24 = 1;
                                                                }
                                                                uVar31 = (uint)local_198 & 255;
                                                                if (iVar21 < 64) {
                                                                    uVar31 = 1;
                                                                }
                                                                local_198 = (type*)CONCAT44(local_198._4_4_, uVar31);
                                                            }
                                                        } else if ((int)local_180._0_4_ < 64) {
                                                            if (iVar21 < 0) {
                                                                local_174 = CONCAT31(local_174._1_3_, 1);
                                                            } else {
                                                                local_164 = local_164 & 255;
                                                                if (63 < iVar21) {
                                                                    local_164 = 1;
                                                                }
                                                            }
                                                        } else if (iVar21 < 0) {
                                                            local_16c = CONCAT31(local_16c._1_3_, 1);
                                                        } else {
                                                            local_168 = local_168 & 255;
                                                            if (63 < iVar21) {
                                                                local_168 = 1;
                                                            }
                                                            uVar31 = (uint)local_1a0 & 255;
                                                            if (iVar21 < 64) {
                                                                uVar31 = 1;
                                                            }
                                                            local_1a0 = CONCAT44(local_1a0._4_4_, uVar31);
                                                        }
                                                    }
                                                    psVar30 = (shared_ptr*)&psVar30->field_1;
                                                } while ((shared_ptr*)(ulong)((uVar20 - uVar6) + 1) != psVar30);
                                            }
                                            local_180 = (Array<unsigned int, eastl::allocator>*)CONCAT44(
                                                local_180._4_4_, (int)local_180._0_4_ + 1);
                                            uVar29 = uVar29 + 1;
                                            uVar31 = local_1b4;
                                        } while (uVar29 != local_1a8);
                                    }
                                    _local_160 = CONCAT16((undefined1)local_174, (uint6)(byte)local_164 << 16);
                                    uVar2 = (uint7)_local_160 >> 16;
                                    _auStack_15e = (uint6)uVar2;
                                    local_160 = (undefined1[2])CONCAT11((char)local_168, (char)local_1a0);
                                    uVar19 = _local_160;
                                    _local_160 = CONCAT17((undefined1)local_16c, _local_160);
                                    uVar4 = _local_160;
                                    _local_160 = CONCAT13(uVar24, (int3)uVar19);
                                    uStack_15a = SUB82(uVar4, 6);
                                    _local_160 =
                                        CONCAT26(uStack_15a, CONCAT15((undefined1)local_170,
                                                                      (int5)CONCAT44((int)local_198, _local_160)));
                                    psVar30 = local_1c0;
                                }
                                psVar11 = (shared_ptr*)0;
                                do {
                                    if (local_160[(long)psVar11] != '\0') {
                                        this_04 = (vector<shared_ptr<LightSource>, BucketAllocatorEASTL>*)
                                            eastl::vector<eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>,
                                                          eastl::fixed_vector_allocator<24ul, 8ul, 8ul, 0ul, true,
                                                                                        eastl::allocator>>::
                                            operator[](
                                                (vector<eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>,
                                                        eastl::fixed_vector_allocator<24ul, 8ul, 8ul, 0ul, true,
                                                                                      eastl::allocator>>*)local_210,
                                                (ulong)psVar11);
                                        eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>::push_back(
                                            this_04, local_1d0);
                                        psVar10 = psVar11;
                                        puVar16 = (undefined1*)eastl::vector<
                                            bool,
                                            eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>::
                                        operator[](
                                            (vector<bool, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true,
                                                                                        eastl::allocator>>*)local_1c8,
                                            (ulong)psVar11);
                                        *puVar16 = 1;
                                        *(undefined1*)((long)local_1b0 + 9) = 1;
                                    }
                                    psVar11 = (shared_ptr*)&psVar11->field_1;
                                } while (psVar11 != (shared_ptr*)8);
                                goto LAB_100415288;
                            }
                        }
                        psVar30 = local_1c0;
                        uVar19 = logger::default_logger();
                        this_06 = &local_158;
                        logger::LogStream::LogStream(this_06, (LogStream*)&LOGGER_SCENE);
                        in_stack_fffffffffffffda8 = "MapSquare::ValidateStaticLightsForPointLightIndices - light "
                                                    "skipped in %u,%u - influence grid doesn\'t overlap tiles";
                        psVar10 = (shared_ptr*)0;
                        logger::Logger::Log(uVar19, 0, this_06, 8,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "game/runetek5/scene/entities/MapSquarePointLights.cpp",
                                            239,
                                            "MapSquare::ValidateStaticLightsForPointLightIndices - light skipped in "
                                            "%u,%u - influence grid doesn\'t overlap tiles",
                                            *local_1b0, local_1b0[1]);
                        goto LAB_100415283;
                    }
                    uVar19 = logger::default_logger();
                    in_stack_fffffffffffffda8 = (char*)CONCAT44(uVar33, *local_1b0);
                    psVar10 = (shared_ptr*)0;
                    logger::Logger::Log(uVar19, 0, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/scene/entities/MapSquarePointLights.cpp",
                                        190,
                                        "MapSquare::ValidateStaticLightsForPointLightIndices - light skipped in %u,%u "
                                        "- out of bounds X: %d->%d, Z: %d->%d",
                                        in_stack_fffffffffffffda8, local_1b0[1], uVar31, local_18c, local_180._0_4_,
                                        (int)local_1a8);
                } else {
                    uVar19 = logger::default_logger();
                    psVar30 = local_1c0;
                    new (&local_c8) logger::LogStream((LogStream*)&LOGGER_SCENE);
                    in_stack_fffffffffffffda8 = "MapSquare::ValidateStaticLightsForPointLightIndices - light skipped "
                                                "in %u,%u - missing influence grid";
                    psVar10 = (shared_ptr*)0;
                    this_06 = &local_c8;
                    logger::Logger::Log(uVar19, 0, this_06, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/scene/entities/MapSquarePointLights.cpp",
                                        176,
                                        "MapSquare::ValidateStaticLightsForPointLightIndices - light skipped in %u,%u "
                                        "- missing influence grid",
                                        *local_1b0, local_1b0[1]);
                LAB_100415283:
                    this_06->~LogStream();
                }
            LAB_100415288:
                local_1e8->~Array();
                psVar11 = local_1d0 + 1;
            } while (psVar11 != local_208);
        }
        uVar29 = local_200->size();
        psVar30->reserve(uVar29);
        psVar10 = (shared_ptr*)local_200->HeapBeginPtr();
        local_200->end();
        eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>::assign<shared_ptr<LightSource> const*>(psVar30,
                                                                                                             psVar10);
        eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>::~vector(local_200);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return local_1c8;
    }

    // 0x1004160b0, 336 bytes, placed by class name
    // MapSquarePointLights::MainLogic(MapSquare const*, ConfigProvider*, unsigned int)
    void MapSquarePointLights::MainLogic(MapSquare* param_1, ConfigProvider* param_2, uint param_3) {
        undefined1* puVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        shared_ptr* psVar4;
        shared_ptr* psVar5;
        bool bVar6;

        if (field_12 != param_3) {
            field_12 = param_3;
            if (field_344 != '\0') {
                field_344 = 0;
                UpdateRemoteLightSources(this, param_1, param_3);
            }
            if (field_352 != '\0') {
                field_352 = 0;
                UpdateDynamicLightSources(this, param_1, param_2, param_3);
            }
            if (field_360 == false) {
                puVar1 = field_32;
                uVar2 = puVar1->HeapBeginPtr();
                uVar3 = puVar1->end();
                psVar4 = std::find_if<shared_ptr<LightSource>*,
                                      (MapSquare_const*)->MainLogic(ConfigProvider*, unsigned int)::__1>(uVar2, uVar3);
                psVar5 = (shared_ptr*)puVar1->end();
                bVar6 = true;
                if (psVar4 == psVar5) {
                    puVar1 = &field_56;
                    uVar2 = puVar1->HeapBeginPtr();
                    uVar3 = puVar1->end();
                    psVar4 =
                        std::find_if<shared_ptr<LightSource>*,
                                     (MapSquare_const*)->MainLogic(ConfigProvider*, unsigned int)::__1>(uVar2, uVar3);
                    psVar5 = (shared_ptr*)puVar1->end();
                    if (psVar4 == psVar5) {
                        puVar1 = &field_312;
                        uVar2 = puVar1->HeapBeginPtr();
                        uVar3 = puVar1->end();
                        psVar4 = std::find_if<shared_ptr<LightSource>*,
                                              (MapSquare_const*)->MainLogic(ConfigProvider*, unsigned int)::__1>(uVar2,
                                                                                                                 uVar3);
                        psVar5 = (shared_ptr*)puVar1->end();
                        bVar6 = psVar4 != psVar5;
                    }
                }
                field_360 = bVar6;
            }
            if (field_360 != false) {
                field_360 = false;
                RebuildPointLightGridTexture(this, param_3);
            }
        }
    }

    // 0x100416200, 1024 bytes, placed by class name
    // MapSquarePointLights::UpdateRemoteLightSources(MapSquare const*, unsigned int)
    void MapSquarePointLights::UpdateRemoteLightSources(MapSquare* param_1, uint param_2) {
        undefined1* this_00;
        char cVar1;
        shared_ptr<LightSource>* this_01;
        shared_ptr<LightSource>* psVar3;
        LightSource* pLVar4;
        shared_ptr<World>* this_02;
        World* pWVar5;
        shared_ptr* psVar6;
        shared_ptr<MapSquare>* psVar7;
        MapSquare* this_03;
        MapSquarePointLights* pMVar8;
        Layout* this_04;
        shared_ptr* psVar9;
        shared_ptr* psVar10;
        shared_ptr* psVar11;
        ulong uVar12;
        fixed_vector<shared_ptr<MapSquare>, 8ul, true, eastl::allocator> local_e0[168];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (field_348 != param_2) {
            field_348 = param_2;
            this_00 = &field_56;
            cVar1 = this_00->empty();
            this_01 = (shared_ptr<LightSource>*)this_00->HeapBeginPtr();
            psVar3 = (shared_ptr<LightSource>*)this_00->end();
            for (; this_01 != psVar3; this_01 = this_01 + 16) {
                pLVar4 = (LightSource*)shared_ptr<LightSource>::operator->(this_01);
                pLVar4->RemoveRemoteMapSquare(field_0, field_4);
            }
            this_00->clear();
            eastl::fixed_vector<shared_ptr<MapSquare>, 8ul, true, eastl::allocator>::fixed_vector(local_e0, 8);
            if (param_1 != (MapSquare*)0) {
                this_02 = (shared_ptr<World>*)param_1->GetWorld();
                pWVar5 = (World*)shared_ptr<World>::operator->(this_02);
                psVar6 = (shared_ptr*)pWVar5->GetMapSquare(field_0, field_4 + 1);
                psVar7 = (shared_ptr<MapSquare>*)eastl::vector<
                    shared_ptr<MapSquare>, eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<shared_ptr<MapSquare>,
                            eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)local_e0,
                    0);
                shared_ptr<MapSquare>::operator=(psVar7, psVar6);
                pWVar5 = (World*)shared_ptr<World>::operator->(this_02);
                psVar6 = (shared_ptr*)pWVar5->GetMapSquare(field_0 + 1, field_4 + 1);
                psVar7 = (shared_ptr<MapSquare>*)eastl::vector<
                    shared_ptr<MapSquare>, eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<shared_ptr<MapSquare>,
                            eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)local_e0,
                    1);
                shared_ptr<MapSquare>::operator=(psVar7, psVar6);
                pWVar5 = (World*)shared_ptr<World>::operator->(this_02);
                psVar6 = (shared_ptr*)pWVar5->GetMapSquare(field_0 + 1, field_4);
                psVar7 = (shared_ptr<MapSquare>*)eastl::vector<
                    shared_ptr<MapSquare>, eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<shared_ptr<MapSquare>,
                            eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)local_e0,
                    2);
                shared_ptr<MapSquare>::operator=(psVar7, psVar6);
                pWVar5 = (World*)shared_ptr<World>::operator->(this_02);
                psVar6 = (shared_ptr*)pWVar5->GetMapSquare(field_0 + 1, field_4 - 1);
                psVar7 = (shared_ptr<MapSquare>*)eastl::vector<
                    shared_ptr<MapSquare>, eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<shared_ptr<MapSquare>,
                            eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)local_e0,
                    3);
                shared_ptr<MapSquare>::operator=(psVar7, psVar6);
                pWVar5 = (World*)shared_ptr<World>::operator->(this_02);
                psVar6 = (shared_ptr*)pWVar5->GetMapSquare(field_0, field_4 - 1);
                psVar7 = (shared_ptr<MapSquare>*)eastl::vector<
                    shared_ptr<MapSquare>, eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<shared_ptr<MapSquare>,
                            eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)local_e0,
                    4);
                shared_ptr<MapSquare>::operator=(psVar7, psVar6);
                pWVar5 = (World*)shared_ptr<World>::operator->(this_02);
                psVar6 = (shared_ptr*)pWVar5->GetMapSquare(field_0 - 1, field_4 - 1);
                psVar7 = (shared_ptr<MapSquare>*)eastl::vector<
                    shared_ptr<MapSquare>, eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<shared_ptr<MapSquare>,
                            eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)local_e0,
                    5);
                shared_ptr<MapSquare>::operator=(psVar7, psVar6);
                pWVar5 = (World*)shared_ptr<World>::operator->(this_02);
                psVar6 = (shared_ptr*)pWVar5->GetMapSquare(field_0 - 1, field_4);
                psVar7 = (shared_ptr<MapSquare>*)eastl::vector<
                    shared_ptr<MapSquare>, eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<shared_ptr<MapSquare>,
                            eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)local_e0,
                    6);
                shared_ptr<MapSquare>::operator=(psVar7, psVar6);
                pWVar5 = (World*)shared_ptr<World>::operator->(this_02);
                psVar6 = (shared_ptr*)pWVar5->GetMapSquare(field_0 - 1, field_4 + 1);
                psVar7 = (shared_ptr<MapSquare>*)eastl::vector<
                    shared_ptr<MapSquare>, eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<shared_ptr<MapSquare>,
                            eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)local_e0,
                    7);
                shared_ptr<MapSquare>::operator=(psVar7, psVar6);
                uVar12 = 0;
                do {
                    psVar6 = (shared_ptr*)
                        eastl::vector<shared_ptr<MapSquare>,
                                      eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<shared_ptr<MapSquare>,
                                           eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)
                                       local_e0,
                                   uVar12);
                    if (shared_ptr::operator_cast_to_bool(psVar6)) {
                        psVar7 = (shared_ptr<MapSquare>*)
                            eastl::vector<shared_ptr<MapSquare>,
                                          eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<shared_ptr<MapSquare>,
                                        eastl::fixed_vector_allocator<16ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    local_e0,
                                uVar12);
                        this_03 = (MapSquare*)shared_ptr<MapSquare>::operator->(psVar7);
                        pMVar8 = (MapSquarePointLights*)this_03->GetMapSquarePointLights();
                        this_04 = (Layout*)GetBoundaryLights(pMVar8, (int)uVar12 + 4U & 7);
                        psVar6 = (shared_ptr*)eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(this_04);
                        psVar9 = (shared_ptr*)this_04->end();
                        for (; psVar6 != psVar9; psVar6 = psVar6 + 1) {
                            psVar10 = (shared_ptr*)this_00->HeapBeginPtr();
                            psVar11 = (shared_ptr*)this_00->end();
                            psVar10 = eastl::find<shared_ptr<Entity>*, shared_ptr<Entity>>(psVar10, psVar11, psVar6);
                            psVar11 = (shared_ptr*)this_00->end();
                            if (psVar10 == psVar11) {
                                this_00->push_back(psVar6);
                                pLVar4 =
                                    (LightSource*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)psVar6);
                                pLVar4->AddRemoteMapSquare(field_0, field_4);
                            }
                        }
                    }
                    uVar12 = uVar12 + 1;
                } while (uVar12 != 8);
            }
            if ((cVar1 == '\0') || (cVar1 = this_00->empty(), cVar1 == '\0')) {
                field_360 = true;
            }
            eastl::fixed_vector<shared_ptr<MapSquare>, 8ul, true, eastl::allocator>::~fixed_vector(local_e0);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100416600, 1024 bytes, placed by class name
    // MapSquarePointLights::UpdateDynamicLightSources(MapSquare const*, ConfigProvider*, unsigned int)
    void MapSquarePointLights::UpdateDynamicLightSources(MapSquare* param_1, ConfigProvider* param_2, uint param_3) {
        undefined1* this_00;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_01;
        char cVar1;
        uint uVar3;
        shared_ptr<LightSource>* this_02;
        shared_ptr<LightSource>* psVar4;
        LightSource* pLVar5;
        shared_ptr<StaticPointLight>* psVar6;
        TextRun* pTVar7;
        StockPlayerOffer* pSVar8;
        Entity* pEVar9;
        GraphNode* pGVar10;
        shared_ptr<World>* psVar11;
        WorldmapAreaMetadata* this_03;
        DynamicPointLightManager* this_04;
        OSRenderCore_RenderThread_Common* this_05;
        World* pWVar12;
        shared_ptr* psVar13;
        long lVar14;
        long lVar15;
        GraphNode* pGVar16;
        long* plVar17;
        GraphNode** ppGVar18;
        GraphEntity* pGVar19;
        uint* in_stack_ffffffffffffff78;
        vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL> local_80[24];
        ConfigProvider* local_68;
        shared_ptr<StaticPointLight>* local_60;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* local_58;
        GraphNode* local_50;
        shared_ptr local_48;
        uint local_38;
        char local_31;

        if ((param_1 != (MapSquare*)0) && (field_356 != param_3)) {
            field_356 = param_3;
            this_00 = &field_312;
            local_68 = param_2;
            local_31 = this_00->empty();
            this_02 = (shared_ptr<LightSource>*)this_00->HeapBeginPtr();
            psVar4 = (shared_ptr<LightSource>*)this_00->end();
            for (; this_02 != psVar4; this_02 = this_02 + 16) {
                pLVar5 = (LightSource*)shared_ptr<LightSource>::operator->(this_02);
                psVar6 = (shared_ptr<StaticPointLight>*)pLVar5->GetConfigurationSource();
                pTVar7 = (TextRun*)shared_ptr<StaticPointLight>::operator->(psVar6);
                uVar3 = pTVar7->GetMaxLineWidth();
                if (uVar3 == field_0) {
                    pLVar5 = (LightSource*)shared_ptr<LightSource>::operator->(this_02);
                    psVar6 = (shared_ptr<StaticPointLight>*)pLVar5->GetConfigurationSource();
                    pSVar8 = (StockPlayerOffer*)shared_ptr<StaticPointLight>::operator->(psVar6);
                    uVar3 = pSVar8->GetCompletedGold();
                    if (uVar3 == field_4) {
                        pEVar9 = (Entity*)shared_ptr<LightSource>::operator->(this_02);
                        pGVar10 = (GraphNode*)pEVar9->GetNode();
                        pGVar10->Detach();
                    }
                }
            }
            local_58 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)this_00;
            this_00->clear();
            psVar11 = (shared_ptr<World>*)param_1->GetWorld();
            this_03 = (WorldmapAreaMetadata*)shared_ptr<World>::operator->(psVar11);
            this_04 = (DynamicPointLightManager*)this_03->GetOrigin();
            eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>::vector();
            eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>::reserve(local_80, 8);
            this_04->GetLightsInMapSquare(local_80, field_0, field_4);
            psVar6 = (shared_ptr<StaticPointLight>*)local_80->HeapBeginPtr();
            local_60 = (shared_ptr<StaticPointLight>*)local_80->end();
            if (psVar6 != local_60) {
                do {
                    this_05 = (OSRenderCore_RenderThread_Common*)shared_ptr<StaticPointLight>::operator->(psVar6);
                    local_38 = this_05->GetNumVerts();
                    local_38 = ~local_38;
                    psVar11 = (shared_ptr<World>*)param_1->GetWorld();
                    pWVar12 = (World*)shared_ptr<World>::operator->(psVar11);
                    psVar13 = (shared_ptr*)pWVar12->GetPointLight(local_38);
                    if (shared_ptr::operator_cast_to_bool(psVar13)) {
                        pTVar7 = (TextRun*)shared_ptr<StaticPointLight>::operator->(psVar6);
                        uVar3 = pTVar7->GetMaxLineWidth();
                        if (uVar3 == field_0) {
                            pSVar8 = (StockPlayerOffer*)shared_ptr<StaticPointLight>::operator->(psVar6);
                            uVar3 = pSVar8->GetCompletedGold();
                            if (uVar3 == field_4) {
                                pEVar9 =
                                    (Entity*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)psVar13);
                                pGVar10 = (GraphNode*)pEVar9->GetNode();
                                lVar14 = pGVar10->GetParent();
                                lVar15 = param_1->GetNode();
                                if (lVar14 != lVar15) {
                                    pEVar9 =
                                        (Entity*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)psVar13);
                                    pGVar10 = (GraphNode*)pEVar9->GetNode();
                                    pGVar10->Detach();
                                    pGVar10 = (GraphNode*)param_1->GetNode();
                                    pEVar9 =
                                        (Entity*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)psVar13);
                                    pGVar16 = (GraphNode*)pEVar9->GetNode();
                                    pGVar10->AddChild(pGVar16);
                                }
                            }
                        }
                        local_58->push_back(psVar13);
                        plVar17 = (long*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)psVar13);
                        pLVar5 = (LightSource*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)psVar13);
                        local_48._0_8_ = pLVar5->GetLocalPosition();
                        (**(code**)(*plVar17 + 88))(plVar17, &local_48);
                        pLVar5 = (LightSource*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)psVar13);
                        pLVar5->RecalculateAABB();
                    } else {
                        local_48._0_8_ = local_48._0_8_ & 18446744069414584320;
                        local_50 = graphics::GraphNode::Create<int>((int*)&local_48);
                        pGVar10 = (GraphNode*)param_1->GetNode();
                        pGVar10->AddChild(local_50);
                        ppGVar18 = (GraphNode**)param_1->GetWorld();
                        MakeSharedPool<LightSource, 1024>::MakeShared<
                            graphics::GraphNode*&, shared_ptr<World> const&, ConfigProvider*&,
                            shared_ptr<StaticPointLight> const&, unsigned int&>(
                            &local_48, (MakeSharedPool<LightSource, 1024>*)&local_50, ppGVar18, (shared_ptr*)&local_68,
                            (ConfigProvider**)psVar6, (shared_ptr*)&local_38, in_stack_ffffffffffffff78);
                        this_01 = local_58;
                        local_58->push_back(&local_48);
                        local_48.~shared_ptr();
                        psVar13 = (shared_ptr*)this_01->back();
                        pGVar10 = local_50;
                        pGVar19 = (GraphEntity*)psVar13->end();
                        pGVar10->SetEntity(pGVar19);
                        pGVar10 = local_50;
                        pLVar5 = (LightSource*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)psVar13);
                        local_48._0_8_ = pLVar5->GetLocalPosition();
                        pGVar10->SetTranslation((Vector3T*)&local_48);
                        pLVar5 = (LightSource*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)psVar13);
                        pLVar5->RecalculateAABB();
                        psVar11 = (shared_ptr<World>*)param_1->GetWorld();
                        pWVar12 = (World*)shared_ptr<World>::operator->(psVar11);
                        pWVar12->AddPointLight(local_38, psVar13);
                    }
                    psVar6 = psVar6 + 16;
                } while (psVar6 != local_60);
            }
            if ((local_31 == '\0') ||
                (cVar1 = eastl::vector<
                     int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(local_58),
                 cVar1 == '\0')) {
                field_360 = true;
            }
            eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>::~vector(local_80);
        }
    }

    // 0x100416a40, 1984 bytes, placed by class name
    // MapSquarePointLights::RebuildPointLightGridTexture(unsigned int)
    void MapSquarePointLights::RebuildPointLightGridTexture(uint param_1) {
        undefined1* this_00;
        uint uVar1;
        Layout* this_01;
        MapSquarePointLights* pMVar2;
        int iVar3;
        uint uVar4;
        undefined4 uVar5;
        long lVar6;
        long lVar7;
        long lVar8;
        shared_ptr* psVar9;
        shared_ptr* psVar10;
        shared_ptr<LightSource>* this_02;
        LightSource* pLVar11;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_03;
        ulong uVar12;
        uint* puVar13;
        byte* pbVar14;
        array<bool, 129ul>* this_04;
        undefined1* puVar15;
        vector* pvVar16;
        float* pfVar17;
        shared_ptr<StaticPointLight>* psVar18;
        TextRun* this_05;
        StockPlayerOffer* this_06;
        Layout* this_07;
        PointLightGridTextureData* pPVar19;
        PointLightSM* this_08;
        ulong uVar20;
        undefined8 uVar21;
        int iVar22;
        int iVar23;
        type* ptVar24;
        int iVar25;
        type* ptVar26;
        type* ptVar27;
        type* ptVar28;
        undefined4 in_XMM1_Da;
        Array<std::array<bool, 129ul>, BucketAllocatorEASTL>* in_stack_fffffffffffffed8;
        undefined4 uVar29;
        PointLight local_118;
        Array<std::array<bool, 129ul>, BucketAllocatorEASTL> local_e0[24];
        Vector3T* local_c8;
        shared_ptr local_c0;
        LightSource* local_b0;
        Layout* local_a8;
        Vector3T<float> local_a0[16];
        int local_90;
        int local_8c;
        shared_ptr local_88;
        ulong local_70;
        type* local_68;
        LightSource* local_60;
        ulong local_58;
        uint local_4c;
        ulong local_48;
        MapSquarePointLights* local_40;
        int local_34;

        if (field_364 != param_1) {
            field_364 = param_1;
            make_shared<graphics::PointLightGridTextureData>((jag*)&local_c0);
            eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>::vector();
            local_a8 = (Layout*)field_32;
            lVar6 = local_a8->size();
            puVar15 = &field_56;
            lVar7 = puVar15->size();
            this_00 = &field_312;
            local_40 = this;
            lVar8 = this_00->size();
            local_88.reserve(lVar6 + lVar7 + lVar8);
            psVar9 = (shared_ptr*)local_88.end();
            this_01 = local_a8;
            psVar10 = (shared_ptr*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(local_a8);
            this_01->end();
            eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>::insert<shared_ptr<LightSource> const*>(
                &local_88, psVar9, psVar10);
            psVar9 = (shared_ptr*)local_88.end();
            psVar10 = (shared_ptr*)puVar15->HeapBeginPtr();
            puVar15->end();
            eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>::insert<shared_ptr<LightSource> const*>(
                &local_88, psVar9, psVar10);
            psVar9 = (shared_ptr*)local_88.end();
            psVar10 = (shared_ptr*)this_00->HeapBeginPtr();
            this_00->end();
            eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>::insert<shared_ptr<LightSource> const*>(
                &local_88, psVar9, psVar10);
            lVar6 = local_88.size();
            if (lVar6 != 0) {
                local_c8 = (Vector3T*)&local_40->field_16;
                local_4c = 1;
                uVar12 = 0;
                do {
                    uVar29 = (undefined4)((ulong)in_stack_fffffffffffffed8 >> 32);
                    if (uVar12 == 255) {
                        uVar21 = logger::default_logger();
                        uVar4 = local_40->field_0;
                        uVar1 = local_40->field_4;
                        uVar5 = local_88.size();
                        iVar22 = local_88.size();
                        logger::Logger::Log(uVar21, 0, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "game/runetek5/scene/entities/MapSquarePointLights.cpp",
                                            630,
                                            "Map square %u,%u has too many point lights (%d) for the point light "
                                            "indices effect (max %u), skipping %d extra lights",
                                            uVar4, uVar1, uVar5, 255, CONCAT44(uVar29, iVar22 + -255));
                        break;
                    }
                    local_58 = local_a8->size();
                    local_70 = uVar12;
                    this_02 = (shared_ptr<LightSource>*)
                        eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>::operator[](
                            (vector<shared_ptr<LightSource>, BucketAllocatorEASTL>*)&local_88, uVar12);
                    pLVar11 = (LightSource*)shared_ptr<LightSource>::operator*(this_02);
                    local_b0 = pLVar11;
                    local_a0._0_8_ = pLVar11->GetLocalPosition();
                    local_a0._8_4_ = in_XMM1_Da;
                    local_60 = pLVar11;
                    this_03 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                  pLVar11->GetInfluenceRanges();
                    uVar12 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_03);
                    ptVar24 = (type*)(long)(int)uVar12;
                    Array<std::array<bool, 129ul>, BucketAllocatorEASTL>::Array(local_e0, (ulong)ptVar24);
                    local_48 = uVar12;
                    if (0 < (int)uVar12) {
                        local_68 = (type*)(uVar12 & 4294967295);
                        ptVar27 = (type*)0;
                        do {
                            puVar13 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)this_03, (ulong)ptVar27);
                            uVar4 = *puVar13;
                            ptVar24 = ptVar27;
                            pbVar14 = (byte*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)this_03, (ulong)ptVar27);
                            if ((ulong)*pbVar14 != 0) {
                                ptVar26 = (type*)(ulong)(uVar4 >> 8);
                                ptVar28 = ptVar26 + *pbVar14;
                                do {
                                    this_04 = (array<bool, 129ul>*)
                                        Array<std::array<bool, 129ul>, BucketAllocatorEASTL>::operator[](
                                            local_e0, (ulong)ptVar27);
                                    ptVar24 = ptVar26;
                                    puVar15 = (undefined1*)std::array<bool, 129ul>::operator[](this_04, (ulong)ptVar26);
                                    *puVar15 = 1;
                                    ptVar26 = ptVar26 + 1;
                                } while (ptVar26 < ptVar28);
                            }
                            ptVar27 = ptVar27 + 1;
                        } while (ptVar27 != local_68);
                    }
                    if (local_70 < local_58) {
                        ptVar24 = (type*)local_c8;
                        math::Vector3T<float>::operator-=(local_a0, local_c8);
                    }
                    iVar22 = (int)(((uint)(local_48 >> 31) & 1) + (int)local_48) >> 1;
                    pvVar16 = local_a0->SSOBeginPtr(ptVar24);
                    iVar25 = ((int)*(float*)pvVar16 >> 7) - iVar22;
                    pvVar16 = local_a0->SSOBeginPtr(ptVar24);
                    local_68 = (type*)CONCAT44(local_68._4_4_, ((int)*(float*)pvVar16 >> 7) + iVar22);
                    pfVar17 = (float*)local_a0->second();
                    local_48 = CONCAT44(local_48._4_4_, ((int)*pfVar17 >> 7) - iVar22);
                    pfVar17 = (float*)local_a0->second();
                    pLVar11 = local_60;
                    iVar22 = ((int)*pfVar17 >> 7) + iVar22;
                    if (local_70 < local_58) {
                        uVar4 = (uint)local_68;
                        local_90 = (int)local_48;
                    } else {
                        local_58 = CONCAT44(local_58._4_4_, iVar25);
                        psVar18 = (shared_ptr<StaticPointLight>*)local_60->GetConfigurationSource();
                        this_05 = (TextRun*)shared_ptr<StaticPointLight>::operator->(psVar18);
                        iVar25 = this_05->GetMaxLineWidth();
                        pMVar2 = local_40;
                        uVar4 = local_40->field_0;
                        psVar18 = (shared_ptr<StaticPointLight>*)pLVar11->GetConfigurationSource();
                        this_06 = (StockPlayerOffer*)shared_ptr<StaticPointLight>::operator->(psVar18);
                        iVar23 = (iVar25 - uVar4) * 64;
                        iVar25 = this_06->GetCompletedGold();
                        iVar3 = (iVar25 - pMVar2->field_4) * 64;
                        iVar25 = (int)local_58 + iVar23;
                        uVar4 = (uint)local_68 + iVar23;
                        local_90 = (int)local_48 + iVar3;
                        iVar22 = iVar22 + iVar3;
                    }
                    local_48 = CONCAT44(local_48._4_4_, local_90);
                    if (local_90 < 0) {
                        local_90 = 0;
                    }
                    if (62 < iVar22) {
                        iVar22 = 63;
                    }
                    local_58 = CONCAT44(local_58._4_4_, iVar25);
                    if (iVar25 < 0) {
                        iVar25 = 0;
                    }
                    ptVar24 = (type*)(ulong)uVar4;
                    if (62 < (int)uVar4) {
                        ptVar24 = (type*)63;
                    }
                    local_68 = (type*)CONCAT44(local_68._4_4_, (int)ptVar24);
                    local_8c = iVar25;
                    this_07 = (Layout*)local_60->GetWorldPosition();
                    pvVar16 = eastl::string::Layout::SSOBeginPtr(this_07, ptVar24);
                    if ((((*(float*)pvVar16 <= 0.0 && *(float*)pvVar16 != 0.0) ||
                          (pfVar17 = (float*)this_07->y(), *pfVar17 <= 0.0 && *pfVar17 != 0.0)) ||
                         (pfVar17 = (float*)this_07->second(), *pfVar17 <= 0.0 && *pfVar17 != 0.0)) ||
                        (iVar25 = local_b0->field_192->GetX(), iVar25 != 0)) {
                        pvVar16 = local_a0->SSOBeginPtr(ptVar24);
                        in_XMM1_Da = 1115684864;
                        local_34 = (int)(*(float*)pvVar16 + 64.0) >> 7;
                        pfVar17 = (float*)local_a0->second();
                        iVar25 = (int)(*pfVar17 + 64.0) >> 7;
                        pvVar16 = eastl::string::Layout::SSOBeginPtr(this_07, ptVar24);
                        if (*(float*)pvVar16 <= 0.0 && *(float*)pvVar16 != 0.0) {
                            pvVar16 = eastl::string::Layout::SSOBeginPtr(this_07, ptVar24);
                            /* WARNING: Subroutine does not return */
                            LogAssert("worldPosition.x() >= 0.0f",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/scene/entities/MapSquarePointLights.cpp",
                                      707, "Found light with invalid position X (%f) at %u,%u,%d,%d",
                                      (double)*(float*)pvVar16, (ulong)local_40->field_0, (ulong)local_40->field_4,
                                      local_34, iVar25);
                        }
                        pfVar17 = (float*)this_07->y();
                        if (*pfVar17 <= 0.0 && *pfVar17 != 0.0) {
                            pfVar17 = (float*)this_07->y();
                            /* WARNING: Subroutine does not return */
                            LogAssert("worldPosition.y() >= 0.0f",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/scene/entities/MapSquarePointLights.cpp",
                                      708, "Found light with invalid position Y (%f) at %u,%u,%d,%d", (double)*pfVar17,
                                      (ulong)local_40->field_0, (ulong)local_40->field_4, local_34, iVar25);
                        }
                        pfVar17 = (float*)this_07->second();
                        if (*pfVar17 <= 0.0 && *pfVar17 != 0.0) {
                            pfVar17 = (float*)this_07->second();
                            /* WARNING: Subroutine does not return */
                            LogAssert("worldPosition.z() >= 0.0f",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/scene/entities/MapSquarePointLights.cpp",
                                      709, "Found light with invalid position Z (%f) at %u,%u,%d,%d", (double)*pfVar17,
                                      (ulong)local_40->field_0, (ulong)local_40->field_4, local_34, iVar25);
                        }
                        puVar15 = local_b0->field_192;
                        iVar3 = puVar15->GetX();
                        if (iVar3 == 0) {
                            uVar4 = puVar15->GetX();
                            /* WARNING: Subroutine does not return */
                            LogAssert("light.GetRadius() > 0.0f",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/scene/entities/MapSquarePointLights.cpp",
                                      710, "Found light with invalid radius (%f) at %u,%u,%d,%d", (ulong)uVar4,
                                      (ulong)local_40->field_0, local_40->field_4, local_34, iVar25);
                        }
                    }
                    pPVar19 = (PointLightGridTextureData*)shared_ptr<graphics::PointLightGridTextureData>::operator->(
                        (shared_ptr<graphics::PointLightGridTextureData>*)&local_c0);
                    iVar25 = local_60->GetLevelMin();
                    iVar3 = local_60->GetLevelMax();
                    in_stack_fffffffffffffed8 = local_e0;
                    pPVar19->ApplyLightIDToTextureData(local_4c, iVar25, iVar3, local_90, iVar22, local_8c,
                                                       (uint)local_68, (int)local_48 >> 31 & -(int)local_48,
                                                       (int)local_58 >> 31 & -(int)local_58, (Array*)local_e0);
                    pPVar19 = (PointLightGridTextureData*)shared_ptr<graphics::PointLightGridTextureData>::operator->(
                        (shared_ptr<graphics::PointLightGridTextureData>*)&local_c0);
                    pLVar11 = local_60;
                    local_118.GetPointLight();
                    lVar6 = pLVar11->GetPointLightSM();
                    if (lVar6 == 0) {
                        iVar22 = -1;
                    } else {
                        this_08 = (PointLightSM*)pLVar11->GetPointLightSM();
                        iVar22 = this_08->GetID();
                    }
                    pPVar19->ApplyLightDataToTextureData(&local_118, local_4c, iVar22);
                    local_4c = local_4c + 1;
                    local_e0->~Array();
                    uVar12 = local_70 + 1;
                    uVar20 = local_88.size();
                } while (uVar12 < uVar20);
            }
            (local_40->m_pointLightTexture, &local_c0)->UpdateTexture();
            local_88.~vector();
            local_c0.~shared_ptr();
        }
    }

    // 0x100417200, 16 bytes, placed by class name
    // MapSquarePointLights::MainDraw(unsigned int)
    void MapSquarePointLights::MainDraw(uint param_1) {
        undefined4 in_register_0000003c;

        UpdateEffect((MapSquarePointLights*)CONCAT44(in_register_0000003c, param_1));
    }

    // 0x100417210, 720 bytes, placed by class name
    // MapSquarePointLights::UpdateEffect()
    void MapSquarePointLights::UpdateEffect() {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        bool bVar1;
        shared_ptr* psVar2;
        long lVar3;
        long lVar4;
        long lVar5;
        long lVar6;
        shared_ptr* psVar7;
        LightSource* pLVar8;
        undefined4* puVar9;
        shared_ptr<graphics::PointLightIndicesEffect>* this_03;
        PointLightIndicesEffect* this_04;
        ulong uVar10;
        ulong uVar11;
        undefined1* this_05;
        undefined4 uVar12;

        psVar2 = (shared_ptr*)m_pointLightTexture->GetScreen();
        bVar1 = operator!=(psVar2, (_func_decltype_nullptr*)0);
        if (bVar1) {
            this_00 = field_32;
            lVar3 = this_00->size();
            this_01 = &field_56;
            lVar4 = this_01->size();
            this_02 = &field_312;
            lVar5 = this_02->size();
            this_05 = &field_368;
            lVar6 = this_05->size();
            if (lVar6 != lVar5 + lVar4 + lVar3) {
                eastl::vector<float, eastl::allocator>::resize((ulong)this_05);
            }
            lVar3 = this_05->size();
            lVar4 = this_00->size();
            lVar5 = this_01->size();
            lVar6 = this_02->size();
            if (lVar3 != lVar6 + lVar5 + lVar4) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_pointLightIntensities.size() == m_lightSourcesLocal.size() + m_lightSourcesRemote.size() "
                          "+ m_lightSourcesDynamic.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "entities/MapSquarePointLights.cpp",
                          437, (char*)0);
            }
            psVar2 = (shared_ptr*)this_00->HeapBeginPtr();
            psVar7 = (shared_ptr*)this_00->end();
            if (psVar2 == psVar7) {
                uVar10 = 0;
            } else {
                uVar11 = 0;
                do {
                    bVar1 = shared_ptr::operator_cast_to_bool(psVar2);
                    if (!bVar1) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("light",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "scene/entities/MapSquarePointLights.cpp",
                                  443, (char*)0);
                    }
                    pLVar8 = (LightSource*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)psVar2);
                    uVar12 = pLVar8->GetCurrentIntensity();
                    uVar10 = (ulong)((int)uVar11 + 1);
                    puVar9 = (undefined4*)eastl::vector<float, eastl::allocator>::operator[](
                        (vector<float, eastl::allocator>*)this_05, uVar11);
                    *puVar9 = uVar12;
                    psVar2 = psVar2 + 1;
                    uVar11 = uVar10;
                } while (psVar2 != psVar7);
            }
            psVar2 = (shared_ptr*)this_01->HeapBeginPtr();
            psVar7 = (shared_ptr*)this_01->end();
            for (; psVar2 != psVar7; psVar2 = psVar2 + 1) {
                bVar1 = shared_ptr::operator_cast_to_bool(psVar2);
                if (!bVar1) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("light",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/entities/MapSquarePointLights.cpp",
                              448, (char*)0);
                }
                pLVar8 = (LightSource*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)psVar2);
                uVar12 = pLVar8->GetCurrentIntensity();
                puVar9 = (undefined4*)eastl::vector<float, eastl::allocator>::operator[](
                    (vector<float, eastl::allocator>*)this_05, uVar10);
                *puVar9 = uVar12;
                uVar10 = (ulong)((int)uVar10 + 1);
            }
            psVar2 = (shared_ptr*)this_02->HeapBeginPtr();
            psVar7 = (shared_ptr*)this_02->end();
            for (; psVar2 != psVar7; psVar2 = psVar2 + 1) {
                bVar1 = shared_ptr::operator_cast_to_bool(psVar2);
                if (!bVar1) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("light",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/entities/MapSquarePointLights.cpp",
                              453, (char*)0);
                }
                pLVar8 = (LightSource*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)psVar2);
                uVar12 = pLVar8->GetCurrentIntensity();
                puVar9 = (undefined4*)eastl::vector<float, eastl::allocator>::operator[](
                    (vector<float, eastl::allocator>*)this_05, uVar10);
                *puVar9 = uVar12;
                uVar10 = (ulong)((int)uVar10 + 1);
            }
            this_03 = (shared_ptr<graphics::PointLightIndicesEffect>*)m_pointLightTexture->GetScreen();
            this_04 = (PointLightIndicesEffect*)shared_ptr<graphics::PointLightIndicesEffect>::operator->(this_03);
            this_04->SetPointLightIntensities(this_05);
        }
    }

    // 0x100417850, 80 bytes, placed by class name
    // MapSquarePointLights::SetLocalLightSources(eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL> const&)
    void MapSquarePointLights::SetLocalLightSources(vector* param_1) {
        shared_ptr* psVar1;

        field_32->clear();
        psVar1 = (shared_ptr*)param_1->HeapBeginPtr();
        param_1->end();
        eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>::assign<shared_ptr<LightSource> const*>(
            (shared_ptr*)field_32, psVar1);
        field_360 = true;
    }

    // 0x1004178a0, 48 bytes, placed by class name
    // MapSquarePointLights::SetLocalOrigin(math::Vector3T<float>)
    void MapSquarePointLights::SetLocalOrigin(undefined8 param_1, undefined4 param_2, long param_3) {
        undefined8 local_18;
        undefined4 local_10;

        local_18 = param_1;
        local_10 = param_2;
        ((param_3 + 16))->SetXYZ((Vector3T*)&local_18);
    }

    // 0x1004178d0, 16 bytes, placed by class name
    // MapSquarePointLights::GetLocalOrigin()
    undefined1* MapSquarePointLights::GetLocalOrigin() {
        return &field_16;
    }

    // 0x1004491a0: the linker folded this into CombinedLocationSection::GetHighlightState(), which has identical code
    MapSquarePointLights::GetLightSourcesDynamic() const;

} // namespace jag::game
