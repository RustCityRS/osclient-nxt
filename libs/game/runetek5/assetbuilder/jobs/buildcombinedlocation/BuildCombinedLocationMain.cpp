// libs/game/runetek5/assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationMain.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "BuildCombinedLocationMain.h"

namespace jag::game {
    // 0x10064a680, 304 bytes, base-object constructor, placed by class name and debug map
    // BuildCombinedLocationMain::BuildCombinedLocationMain(graphics::RT7Core&, int, LocationContainer const*, eastl::vector<LocationContainerLocation, eastl::allocator> const&, int, int, bool)
    void BuildCombinedLocationMain::BuildCombinedLocationMain(RT7Core* param_1, int param_2, LocationContainer* param_3,
                                                              vector* param_4, int param_5, int param_6, bool param_7) {
        undefined4 in_register_00000014;
        shared_ptr local_48;
        int local_34;

        local_34 = param_5;
        new (this) AssetJob(10, CONCAT44(in_register_00000014, param_2), 4294967295);
        field_0 = &PTR__BuildCombinedLocationMain_100f0d808;
        new (&field_80) eastl::vector<shared_ptr<CombinedLocation>, eastl::allocator>();
        new (&field_112) eastl::vector<shared_ptr<Location>, eastl::allocator>();
        field_144 = param_1;
        new (m_requestData, (_func_decltype_nullptr*)10) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_168 = param_3;
        new (&local_48) eastl::allocator("EASTL hash_map");
        new (&field_176, (allocator*)&local_48)
            eastl::hash_map<unsigned int, BuildCombinedLocationRequestData_PerModelData*, eastl::hash<unsigned int>,
                            eastl::equal_to<unsigned int>, eastl::allocator, false>();
        bucket_make_shared<BuildCombinedLocationRequestData,
                           eastl::vector<LocationContainerLocation, eastl::allocator> const&, int&, int&>(
            (jag*)&local_48, param_4, &local_34, &param_6);
        shared_ptr<BuildCombinedLocationRequestData>::operator=(
            (shared_ptr<BuildCombinedLocationRequestData>*)m_requestData, &local_48);
        local_48.~shared_ptr();
    }

    // 0x10064a8b0, 32 bytes, complete-object constructor, placed by class name and debug map
    // BuildCombinedLocationMain::BuildCombinedLocationMain(graphics::RT7Core&, int, LocationContainer const*, eastl::vector<LocationContainerLocation, eastl::allocator> const&, int, int, bool)
    void BuildCombinedLocationMain::BuildCombinedLocationMain(RT7Core* param_1, int param_2, LocationContainer* param_3,
                                                              vector* param_4, int param_5, int param_6, bool param_7) {
        BuildCombinedLocationMain(this, param_1, param_2, param_3, param_4, param_5, param_6, false);
    }

    // 0x10064a8d0, 3280 bytes, placed by class name and debug map
    // BuildCombinedLocationMain::RunFirst(Js5ResourceProvider*, ConfigProvider*)
    undefined* BuildCombinedLocationMain::RunFirst(Js5ResourceProvider* param_1, ConfigProvider* param_2) {
        BuildRequest<graphics::Model, BuildModelMain>* pBVar1;
        undefined1* this_00;
        short sVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        bool bVar5;
        Layout LVar6;
        char cVar7;
        byte bVar8;
        undefined1 uVar9;
        char cVar10;
        byte bVar11;
        short sVar12;
        undefined2 uVar13;
        undefined4 uVar14;
        uint uVar15;
        Layout* pLVar16;
        TextureManager* pTVar17;
        TextureAtlasManager* this_01;
        long lVar18;
        shared_ptr<World>* this_02;
        World* this_03;
        vector<graphics::SpriteAtlasMapping, eastl::allocator>* this_04;
        hashtable_iterator_base* phVar19;
        shared_ptr<MapSquareLocation>* this_05;
        vector* pvVar20;
        Model* pMVar21;
        undefined4* puVar22;
        LocType* pLVar23;
        NXTPixToolkit* pNVar24;
        Vector2T<int>* this_06;
        float* pfVar25;
        undefined8 uVar26;
        undefined4* puVar27;
        SceneViewData* this_07;
        float* pfVar28;
        Array<VarValue, eastl::allocator>* this_08;
        Array* pAVar29;
        int* piVar30;
        shared_ptr<graphics::Model>* this_09;
        shared_ptr* psVar31;
        Location* this_10;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_11;
        ulong uVar32;
        TcpConnectionMessageBase* this_12;
        undefined** ppuVar33;
        shared_ptr* extraout_RDX;
        shared_ptr* extraout_RDX_00;
        shared_ptr* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        shared_ptr* extraout_RDX_03;
        int iVar34;
        hashtable_iterator_base* phVar35;
        type* ptVar36;
        shared_ptr<MapSquareLocation>* psVar37;
        undefined1 auVar38[16];
        hashtable_iterator_base local_b0[16];
        shared_ptr local_a0;
        vector<BuildCombinedLocationRequest_Location, eastl::allocator>* local_90;
        shared_ptr<MapSquareLocation>* local_88;
        jag* local_80;
        hash_map<unsigned int, BuildCombinedLocationRequestData_PerModelData*, eastl::hash<unsigned int>,
                 eastl::equal_to<unsigned int>, eastl::allocator, false>* local_78;
        LinkMap* local_70;
        BuildRequest<graphics::Model, BuildModelMain>* local_68;
        Layout* local_60;
        Layout* local_58;
        BuildCombinedLocationMain* local_50;
        undefined4 local_44;
        LocType* local_40;
        uint local_34;

        this_00 = m_requestData;
        bVar5 = this_00->operator_cast_to_bool();
        ppuVar33 = &DataStatus::MISSING;
        if ((bVar5) && (field_168 != (LocationContainer*)0)) {
            local_80 = (jag*)this_00;
            pLVar16 = (Layout*)this_00->end();
            *(undefined4*)(pLVar16 + 16) = 0;
            pTVar17 = (TextureManager*)field_144->GetTextureManager();
            this_01 = (TextureAtlasManager*)pTVar17->GetTextureAtlasManager();
            lVar18 = this_01->GetSettings();
            uVar26 = *(undefined8*)(lVar18 + 152);
            uVar3 = *(undefined8*)(lVar18 + 160);
            uVar4 = *(undefined8*)(lVar18 + 168);
            *(undefined8*)(pLVar16 + 176) = *(undefined8*)(lVar18 + 144);
            *(undefined8*)(pLVar16 + 184) = uVar26;
            *(undefined8*)(pLVar16 + 192) = uVar3;
            *(undefined8*)(pLVar16 + 200) = uVar4;
            *(undefined4*)(pLVar16 + 208) = *(undefined4*)(lVar18 + 176);
            pTVar17 = (TextureManager*)field_144->GetTextureManager();
            LVar6 = (Layout)pTVar17->UseCompressedTextures();
            pLVar16[212] = LVar6;
            this_02 = (shared_ptr<World>*)field_168->GetWorld();
            this_03 = (World*)shared_ptr<World>::operator->(this_02);
            local_70 = (LinkMap*)this_03->GetLinkMap();
            this_04 = (vector<graphics::SpriteAtlasMapping, eastl::allocator>*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar16);
            phVar19 =
                (hashtable_iterator_base*)eastl::vector<graphics::SpriteAtlasMapping, eastl::allocator>::size(this_04);
            local_90 = (vector<BuildCombinedLocationRequest_Location, eastl::allocator>*)(pLVar16 + 24);
            ((pLVar16 + 24))->reserve((ulong)phVar19);
            local_58 = pLVar16;
            pLVar16 = (Layout*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar16);
            this_05 = (shared_ptr<MapSquareLocation>*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar16);
            auVar38 = pLVar16->end();
            psVar31 = auVar38._8_8_;
            psVar37 = auVar38._0_8_;
            if (this_05 != psVar37) {
                local_60 = local_58 + 56;
                local_78 =
                    (hash_map<unsigned int, BuildCombinedLocationRequestData_PerModelData*, eastl::hash<unsigned int>,
                              eastl::equal_to<unsigned int>, eastl::allocator, false>*)&field_176;
                local_88 = psVar37;
                local_50 = this;
                do {
                    pBVar1 = (BuildRequest<graphics::Model, BuildModelMain>*)(this_05 + 16);
                    cVar7 = pBVar1->IsTaskDone();
                    psVar31 = extraout_RDX;
                    if (cVar7 != '\0') {
                        pvVar20 = pBVar1->SSOBeginPtr(phVar19);
                        pMVar21 =
                            (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)pvVar20);
                        bVar8 = pMVar21->GetConstructedState();
                        psVar31 = extraout_RDX_00;
                        if (2 < bVar8) {
                            pvVar20 = pBVar1->SSOBeginPtr(phVar19);
                            pMVar21 =
                                (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)pvVar20);
                            cVar7 = pMVar21->IsEmptyModel();
                            psVar31 = extraout_RDX_01;
                            if (cVar7 == '\0') {
                                local_68 = pBVar1;
                                puVar22 = (undefined4*)
                                    eastl::vector<BuildCombinedLocationRequest_Location, eastl::allocator>::push_back(
                                        local_90);
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                pLVar23 =
                                    (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                uVar9 = ((lVar18 + 8))->GetRot();
                                sVar12 = pLVar23->GetGridWidth(uVar9);
                                *(short*)(puVar22 + 10) = sVar12 << 7;
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                pLVar23 =
                                    (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                uVar9 = ((lVar18 + 8))->GetRot();
                                sVar12 = pLVar23->GetGridLength(uVar9);
                                pLVar16 = local_58;
                                *(short*)((long)puVar22 + 42) = sVar12 << 7;
                                iVar34 = *(int*)(local_58 + 8);
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                puVar22[8] =
                                    ((int)(short)(*(short*)(puVar22 + 10) - (*(short*)(puVar22 + 10) >> 15)) >> 1) +
                                    *(char*)(lVar18 + 5) * 128 + iVar34 * 8192;
                                iVar34 = *(int*)(pLVar16 + 12);
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                puVar22[9] = ((int)(short)(*(short*)((long)puVar22 + 42) -
                                                           (*(short*)((long)puVar22 + 42) >> 15)) >>
                                              1) +
                                             *(char*)(lVar18 + 6) * 128 + iVar34 * 8192;
                                uVar14 = *(undefined4*)(pLVar16 + 8);
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                *(short*)(puVar22 + 7) = (short)*(char*)(lVar18 + 5) + (short)uVar14 * 64;
                                uVar14 = *(undefined4*)(pLVar16 + 12);
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                *(short*)((long)puVar22 + 30) = (short)*(char*)(lVar18 + 6) + (short)uVar14 * 64;
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                *(undefined1*)((long)puVar22 + 5) = *(undefined1*)(lVar18 + 4);
                                cVar7 = local_70->IsLinkBelow((int)*(short*)(puVar22 + 7),
                                                              (int)*(short*)((long)puVar22 + 30));
                                if (cVar7 != '\0') {
                                    *(char*)((long)puVar22 + 5) = *(char*)((long)puVar22 + 5) + '\x01';
                                }
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                pLVar23 =
                                    (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                uVar9 = ((lVar18 + 8))->GetShape();
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                cVar7 = pLVar23->RaiseEntities(uVar9, *(char*)(lVar18 + 61) == '\0');
                                uVar14 = 0;
                                iVar34 = 0;
                                if (cVar7 != '\0') {
                                    lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                    pLVar23 =
                                        (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                    lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                    bVar8 = ((lVar18 + 8))->GetShape();
                                    ptVar36 = (type*)(ulong)bVar8;
                                    uVar14 = pLVar23->GetRaiseObjectGroundDecor();
                                    pvVar20 = local_68->SSOBeginPtr(ptVar36);
                                    pNVar24 = (NXTPixToolkit*)shared_ptr<graphics::Model>::operator->(
                                        (shared_ptr<graphics::Model>*)pvVar20);
                                    pNVar24 = (NXTPixToolkit*)pNVar24->GetScreen();
                                    this_06 = (Vector2T<int>*)pNVar24->GetScreen();
                                    pfVar25 = (float*)this_06->y();
                                    iVar34 = (int)*pfVar25;
                                    if ((short)iVar34 != iVar34) {
                                        uVar26 = logger::default_logger();
                                        puVar27 = (undefined4*)shared_ptr<MapSquareLocation>::operator->(this_05);
                                        this = local_50;
                                        iVar34 = 1;
                                        logger::Logger::Log(
                                            uVar26, 1, 2,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "game/runetek5/assetbuilder/jobs/buildcombinedlocation/"
                                            "BuildCombinedLocationMain.cpp",
                                            102, "Invalid AABB for model at MapSquareLocation ID %d [%d,%d,%d,%d,%d]",
                                            *puVar27, (int)*(char*)(puVar22 + 1), (int)*(short*)(puVar22 + 7) >> 6,
                                            (int)*(short*)((long)puVar22 + 30) >> 6, (int)*(short*)(puVar22 + 7) & 63,
                                            (int)*(short*)((long)puVar22 + 30) & 63);
                                    }
                                }
                                local_40 = (LocType*)CONCAT44(local_40._4_4_, iVar34);
                                local_44 = uVar14;
                                puVar27 = (undefined4*)shared_ptr<MapSquareLocation>::operator->(this_05);
                                *puVar22 = *puVar27;
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                *(undefined1*)(puVar22 + 1) = *(undefined1*)(lVar18 + 4);
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                cVar7 = *(char*)(lVar18 + 5);
                                cVar10 = field_168->GetEffectAnimID();
                                *(char*)((long)puVar22 + 6) = cVar7 - cVar10;
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                cVar7 = *(char*)(lVar18 + 6);
                                cVar10 = field_168->GetMinGridZ();
                                *(char*)((long)puVar22 + 7) = cVar7 - cVar10;
                                uVar9 = field_168->GetEffectAnimID();
                                *(undefined1*)(puVar22 + 2) = uVar9;
                                uVar9 = field_168->GetMinGridZ();
                                *(undefined1*)((long)puVar22 + 9) = uVar9;
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                this_07 = (SceneViewData*)shared_ptr<LocType>::operator->(
                                    (shared_ptr<LocType>*)(lVar18 + 72));
                                pfVar25 = (float*)this_07->GetStippleNearClipParams();
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                pLVar23 =
                                    (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                pfVar28 = (float*)pLVar23->GetOffset();
                                ((puVar22 + 4))
                                    ->Set((short)(int)*pfVar25, (short)(int)pfVar25[1], (short)(int)pfVar25[2]);
                                (((long)puVar22 + 22))
                                    ->Set((short)(int)*pfVar28, (short)(int)pfVar28[1], (short)(int)pfVar28[2]);
                                *(short*)((long)puVar22 + 10) =
                                    *(short*)(puVar22 + 10) / 2 + *(char*)((long)puVar22 + 6) * 128;
                                *(undefined2*)(puVar22 + 3) = *(undefined2*)(this_05 + 52);
                                *(short*)((long)puVar22 + 14) =
                                    *(short*)((long)puVar22 + 42) / 2 + *(char*)((long)puVar22 + 7) * 128;
                                math::Vector3T<short>::operator+=((Vector3T<short>*)((long)puVar22 + 10),
                                                                  (Vector3T*)(puVar22 + 4));
                                *(short*)((long)puVar22 + 46) = (short)local_40;
                                *(short*)(puVar22 + 11) = (short)local_44;
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                LocData::operator=((LocData*)(puVar22 + 12), (LocData*)(lVar18 + 8));
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                *(undefined1*)(puVar22 + 25) = *(undefined1*)(lVar18 + 61);
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                local_40 =
                                    (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                cVar7 = *(char*)(lVar18 + 4);
                                sVar12 = *(short*)(puVar22 + 7);
                                sVar2 = *(short*)((long)puVar22 + 30);
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                uVar9 = ((lVar18 + 8))->GetRot();
                                uVar9 = local_40->GetMaxRemoveRoofLevel(local_70, (int)cVar7, (int)sVar12, (int)sVar2,
                                                                        uVar9);
                                *(undefined1*)((long)puVar22 + 102) = uVar9;
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                pLVar23 =
                                    (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                cVar7 = pLVar23->IsActive();
                                uVar9 = 1;
                                if (cVar7 == '\0') {
                                    lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                    pLVar23 =
                                        (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                    cVar7 = pLVar23->IsFindable();
                                    if (cVar7 == '\0') {
                                        lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                        pLVar23 = (LocType*)shared_ptr<LocType>::operator->(
                                            (shared_ptr<LocType>*)(lVar18 + 72));
                                        cVar7 = pLVar23->HasParticles();
                                        if (cVar7 == '\0') {
                                            lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                            pLVar23 = (LocType*)shared_ptr<LocType>::operator->(
                                                (shared_ptr<LocType>*)(lVar18 + 72));
                                            uVar9 = pLVar23->HasVFX();
                                        }
                                    }
                                }
                                *(undefined1*)((long)puVar22 + 103) = uVar9;
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                pLVar23 =
                                    (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                this_08 = (Array<VarValue, eastl::allocator>*)pLVar23->GetAnims();
                                bVar8 = this_08->empty();
                                *(byte*)(puVar22 + 26) = bVar8 ^ 1;
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                pLVar23 =
                                    (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                uVar9 = ((lVar18 + 8))->GetShape();
                                uVar9 = pLVar23->CastsShadows(uVar9);
                                *(undefined1*)((long)puVar22 + 105) = uVar9;
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                *(undefined1*)((long)puVar22 + 106) = *(undefined1*)(lVar18 + 60);
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                pLVar23 =
                                    (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                uVar9 = pLVar23->IsRuneTek5Only();
                                *(undefined1*)((long)puVar22 + 107) = uVar9;
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                *(undefined1*)(puVar22 + 27) = *(undefined1*)(lVar18 + 67);
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                *(byte*)((long)puVar22 + 101) = *(byte*)(lVar18 + 61) ^ 1;
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                pLVar23 =
                                    (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                cVar7 = pLVar23->IsPotentialGroundDecor();
                                if (cVar7 == '\0') {
                                    bVar5 = false;
                                } else {
                                    lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                    cVar7 = ((lVar18 + 8))->GetShape();
                                    bVar5 = cVar7 == '\x16';
                                }
                                *(bool*)((long)puVar22 + 109) = bVar5;
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                pLVar23 =
                                    (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                uVar14 = pLVar23->GetHillChangeType();
                                puVar22[28] = uVar14;
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                pLVar23 =
                                    (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                uVar14 = pLVar23->GetHillChangeParam();
                                puVar22[29] = uVar14;
                                *(bool*)(puVar22 + 30) = this_05[105] == (shared_ptr<MapSquareLocation>)1;
                                Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>::operator=(
                                    (Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>*)(puVar22 + 32),
                                    (Array*)(this_05 + 56));
                                Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>::operator=(
                                    (Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>*)(puVar22 + 38),
                                    (Array*)(this_05 + 80));
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                *(undefined2*)(puVar22 + 44) = *(undefined2*)(lVar18 + 64);
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                *(undefined1*)((long)puVar22 + 178) = *(undefined1*)(lVar18 + 66);
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                pLVar23 =
                                    (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                uVar9 = ((lVar18 + 8))->GetRot();
                                uVar13 = pLVar23->GetGridWidth(uVar9);
                                *(undefined2*)(puVar22 + 45) = uVar13;
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                pLVar23 =
                                    (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                uVar9 = ((lVar18 + 8))->GetRot();
                                uVar13 = pLVar23->GetGridLength(uVar9);
                                *(undefined2*)((long)puVar22 + 182) = uVar13;
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                pLVar23 =
                                    (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                cVar7 = pLVar23->HasSound();
                                if (cVar7 != '\0') {
                                    lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                    pLVar23 =
                                        (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                    uVar14 = pLVar23->GetBackgroundSound();
                                    puVar22[46] = uVar14;
                                    lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                    pLVar23 =
                                        (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                    uVar9 = pLVar23->GetBackgroundSoundShape();
                                    *(undefined1*)(puVar22 + 51) = uVar9;
                                    lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                    pLVar23 =
                                        (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                    uVar13 = pLVar23->GetBackgroundSoundVolume();
                                    *(undefined2*)(puVar22 + 47) = uVar13;
                                    lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                    pLVar23 =
                                        (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                    uVar13 = pLVar23->GetBackgroundSoundRange();
                                    *(undefined2*)((long)puVar22 + 190) = uVar13;
                                    lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                    pLVar23 =
                                        (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                    uVar13 = pLVar23->GetBackgroundSoundDropoffRange();
                                    *(undefined2*)(puVar22 + 48) = uVar13;
                                    lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                    pLVar23 =
                                        (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                    uVar14 = pLVar23->GetBackgroundSoundRateMin();
                                    puVar22[49] = uVar14;
                                    lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                    pLVar23 =
                                        (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                    uVar14 = pLVar23->GetBackgroundSoundRateMax();
                                    puVar22[50] = uVar14;
                                    lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                    pLVar23 =
                                        (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                    uVar9 = pLVar23->GetBackgroundSoundDistanceFiltered();
                                    *(undefined1*)((long)puVar22 + 205) = uVar9;
                                    lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                    pLVar23 =
                                        (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                    uVar14 = pLVar23->GetBackgroundSoundDistanceFilterFrequencyHzHigh();
                                    puVar22[52] = uVar14;
                                    lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                    pLVar23 =
                                        (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                    uVar14 = pLVar23->GetBackgroundSoundDistanceFilterFrequencyHzLow();
                                    puVar22[53] = uVar14;
                                    lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                    pLVar23 =
                                        (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                    uVar14 = pLVar23->GetBackgroundSoundDistanceFilterQ();
                                    puVar22[54] = uVar14;
                                    lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                    puVar22[55] = (int)*(char*)(lVar18 + 4);
                                    lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                    pLVar23 =
                                        (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar18 + 72));
                                    pAVar29 = (Array*)pLVar23->GetRandomSounds();
                                    Array<int, eastl::allocator>::operator=(
                                        (Array<int, eastl::allocator>*)(puVar22 + 58), pAVar29);
                                    cVar7 = ((puVar22 + 58))->empty();
                                    if (cVar7 == '\0') {
                                        lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                        pLVar23 = (LocType*)shared_ptr<LocType>::operator->(
                                            (shared_ptr<LocType>*)(lVar18 + 72));
                                        uVar14 = pLVar23->GetRandomSoundMin();
                                        puVar22[64] = uVar14;
                                        lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                        pLVar23 = (LocType*)shared_ptr<LocType>::operator->(
                                            (shared_ptr<LocType>*)(lVar18 + 72));
                                        uVar14 = pLVar23->GetRandomSoundMax();
                                        puVar22[65] = uVar14;
                                        lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                        pLVar23 = (LocType*)shared_ptr<LocType>::operator->(
                                            (shared_ptr<LocType>*)(lVar18 + 72));
                                        uVar9 = pLVar23->GetRandomSoundShape();
                                        *(undefined1*)(puVar22 + 66) = uVar9;
                                        lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                        pLVar23 = (LocType*)shared_ptr<LocType>::operator->(
                                            (shared_ptr<LocType>*)(lVar18 + 72));
                                        uVar9 = pLVar23->GetRandomSoundDistanceFiltered();
                                        *(undefined1*)((long)puVar22 + 265) = uVar9;
                                        lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                        pLVar23 = (LocType*)shared_ptr<LocType>::operator->(
                                            (shared_ptr<LocType>*)(lVar18 + 72));
                                        uVar14 = pLVar23->GetRandomSoundDistanceFilterFrequencyHzHigh();
                                        puVar22[67] = uVar14;
                                        lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                        pLVar23 = (LocType*)shared_ptr<LocType>::operator->(
                                            (shared_ptr<LocType>*)(lVar18 + 72));
                                        uVar14 = pLVar23->GetRandomSoundDistanceFilterFrequencyHzLow();
                                        puVar22[68] = uVar14;
                                        lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                        pLVar23 = (LocType*)shared_ptr<LocType>::operator->(
                                            (shared_ptr<LocType>*)(lVar18 + 72));
                                        uVar14 = pLVar23->GetRandomSoundDistanceFilterQ();
                                        puVar22[69] = uVar14;
                                    }
                                }
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                uVar15 = ((lVar18 + 8))->GetShape();
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                bVar8 = *(byte*)(lVar18 + 60);
                                lVar18 = shared_ptr<MapSquareLocation>::operator->(this_05);
                                bVar11 = ((lVar18 + 8))->GetRot();
                                piVar30 = (int*)shared_ptr<MapSquareLocation>::operator->(this_05);
                                local_34 = *piVar30 << 8 | (uint)bVar11 << 6 | uVar15 & 255 | (uint)bVar8 << 5;
                                phVar35 = (hashtable_iterator_base*)&local_34;
                                eastl::hashtable<
                                    unsigned int,
                                    eastl::pair<unsigned int const, BuildCombinedLocationRequestData_PerModelData>,
                                    eastl::allocator,
                                    eastl::use_first<
                                        eastl::pair<unsigned int const, BuildCombinedLocationRequestData_PerModelData>>,
                                    eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                    true>::find((uint*)&local_a0);
                                phVar19 = local_b0;
                                eastl::hashtable<
                                    int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>,
                                    eastl::allocator,
                                    eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                    eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                                bVar5 = eastl::operator==((eastl*)&local_a0, phVar19, extraout_RDX_02);
                                this = local_50;
                                psVar31 = extraout_RDX_03;
                                if (bVar5) {
                                    phVar19 = phVar35;
                                    this_09 = (shared_ptr<graphics::Model>*)
                                        eastl::hash_map<unsigned int, BuildCombinedLocationRequestData_PerModelData,
                                                        eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                                                        eastl::allocator, false>::
                                        operator[](
                                            (hash_map<unsigned int, BuildCombinedLocationRequestData_PerModelData,
                                                      eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                                                      eastl::allocator, false>*)local_60,
                                            (uint*)phVar35);
                                    pBVar1 = local_68;
                                    psVar31 = (shared_ptr*)local_68->SSOBeginPtr(phVar19);
                                    shared_ptr<graphics::Model>::operator=(this_09, psVar31);
                                    *(uint*)(this_09 + 16) = local_34;
                                    pvVar20 = pBVar1->SSOBeginPtr(psVar31);
                                    this_10 = (Location*)shared_ptr<graphics::Model>::operator->(
                                        (shared_ptr<graphics::Model>*)pvVar20);
                                    this_11 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)
                                                  this_10->GetServerPosition();
                                    uVar32 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>,
                                                           BucketAllocatorEASTL>::size(this_11);
                                    this_09[21] = (shared_ptr<graphics::Model>)(1 < uVar32);
                                    if (uVar32 < 2) {
                                        pvVar20 = pBVar1->SSOBeginPtr(psVar31);
                                        pMVar21 = (Model*)shared_ptr<graphics::Model>::operator->(
                                            (shared_ptr<graphics::Model>*)pvVar20);
                                        this_12 = (TcpConnectionMessageBase*)pMVar21->GetTextureAtlasReference();
                                        this_09[20] =
                                            (shared_ptr<graphics::Model>)(this_12 != (TcpConnectionMessageBase*)0);
                                        if (this_12 != (TcpConnectionMessageBase*)0) {
                                            uVar14 = this_12->GetEndPosition();
                                            *(undefined4*)(this_09 + 24) = uVar14;
                                        }
                                    }
                                    auVar38 =
                                        eastl::hash_map<unsigned int, BuildCombinedLocationRequestData_PerModelData*,
                                                        eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                                                        eastl::allocator, false>::operator[](local_78, (uint*)phVar35);
                                    psVar31 = auVar38._8_8_;
                                    *auVar38._0_8_ = this_09;
                                    phVar19 = phVar35;
                                }
                                psVar37 = local_88;
                            }
                        }
                    }
                    this_05 = this_05 + 112;
                } while (this_05 != psVar37);
            }
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_a0, local_80, psVar31);
            shared_ptr<void>::operator=((shared_ptr<void>*)&field_32, &local_a0);
            local_a0.~shared_ptr();
            ppuVar33 = &DataStatus::READY;
        }
        return *ppuVar33;
    }

    // 0x10064b9f0, 80 bytes, placed by class name and debug map
    // BuildCombinedLocationMain::CreateWorker()
    BuildCombinedLocationMain* BuildCombinedLocationMain::CreateWorker() {
        shared_ptr local_28;

        bucket_make_shared<BuildCombinedLocationWorker>((jag*)&local_28);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, &local_28);
        local_28.~shared_ptr();
        return this;
    }

    // 0x10064bad0, 80 bytes, placed by class name and debug map
    // BuildCombinedLocationMain::DecodeResult(shared_ptr<void> const&)
    BuildCombinedLocationMain* BuildCombinedLocationMain::DecodeResult(shared_ptr* param_1) {
        BuildCombinedLocationResultData* pBVar2;
        shared_ptr* in_RDX;

        if (shared_ptr::operator_cast_to_bool(in_RDX)) {
            pBVar2 = (BuildCombinedLocationResultData*)in_RDX->end();
            PostDecodeResultSetup((BuildCombinedLocationMain*)param_1, pBVar2);
        }
        new (this) shared_ptr<oldscape::dash3d::Decor>(in_RDX);
        return this;
    }

    // 0x10064bb20, 2512 bytes, placed by class name and debug map
    // BuildCombinedLocationMain::PostDecodeResultSetup(BuildCombinedLocationResultData&)
    void BuildCombinedLocationMain::PostDecodeResultSetup(BuildCombinedLocationResultData* param_1) {
        undefined1* puVar1;
        undefined1* puVar2;
        int iVar3;
        RT7Core* this_00;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        BuildCombinedLocationMain* pBVar4;
        bool bVar5;
        char cVar6;
        undefined4 uVar7;
        int iVar8;
        shared_ptr<World>* this_02;
        World* this_03;
        ulong uVar9;
        LocData* pLVar10;
        long lVar11;
        long lVar12;
        undefined7 uVar32;
        Layout* pLVar13;
        shared_ptr<MapSquareLocation>* this_04;
        shared_ptr<MapSquareLocation>* psVar14;
        int* piVar15;
        long lVar16;
        undefined8 uVar17;
        WaterType* pWVar18;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_05;
        undefined4* puVar19;
        undefined4* puVar20;
        undefined8* puVar21;
        Model* pMVar22;
        GraphNode** ppGVar23;
        shared_ptr<CombinedLocation>* this_06;
        Js5HTTPQueueRequest* this_07;
        char* pcVar24;
        CombinedLocation* pCVar25;
        GraphEntity* pGVar26;
        GraphNode* pGVar27;
        Entity* pEVar28;
        shared_ptr* psVar29;
        Model* pMVar30;
        Text* this_08;
        Location* pLVar31;
        shared_ptr<Location>* this_09;
        shared_ptr<BuildCombinedLocationRequestData>* this_10;
        undefined1* in_stack_ffffffffffffde58;
        vector* in_stack_ffffffffffffde78;
        shared_ptr* psVar33;
        int local_2160;
        int local_215c;
        shared_ptr local_2158;
        shared_ptr<BuildCombinedLocationRequestData>* local_2148;
        shared_ptr* local_2140;
        LocData* local_2138;
        vector<shared_ptr<CombinedLocation>, eastl::allocator>* local_2130;
        shared_ptr* local_2128;
        BuildCombinedLocationResultData* local_2120;
        HeightMap* local_2118;
        bool* local_2110;
        shared_ptr local_2108;
        GraphNode* local_20f8;
        GraphNode** local_20f0;
        LocData* local_20e8;
        BuildCombinedLocationMain* local_20e0;
        ScopedGPUMemoryZone local_20d8[8];
        fixed_hash_map<unsigned int, graphics::Model_const*, 256ul, 257ul, true, eastl::hash<unsigned int>,
                       eastl::equal_to<unsigned int>, false, eastl::allocator>
            local_20d0[8344];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_2120 = param_1;
        render::ScopedGPUMemoryZone::ScopedGPUMemoryZone(local_20d8, "BuildCombinedLocation");
        if (field_168 != (LocationContainer*)0) {
            local_20e0 = this;
            this_02 = (shared_ptr<World>*)field_168->GetWorld();
            this_03 = (World*)shared_ptr<World>::operator*(this_02);
            local_2118 = (HeightMap*)this_03->GetHeightMap();
            pBVar4 = local_20e0;
            puVar1 = &local_20e0->field_80;
            puVar2 = &local_2120->field_32;
            uVar9 = puVar2->size();
            local_2130 = (vector<shared_ptr<CombinedLocation>, eastl::allocator>*)puVar1;
            puVar1->resize(uVar9);
            pLVar10 = (LocData*)puVar2->HeapBeginPtr();
            local_2128 = (shared_ptr*)puVar2;
            local_2138 = (LocData*)puVar2->end();
            this_10 = (shared_ptr<BuildCombinedLocationRequestData>*)pBVar4->m_requestData;
            puVar1 = &pBVar4->field_176;
            local_2148 = this_10;
            if (pLVar10 != local_2138) {
                local_2110 = (bool*)((ulong)local_2110 & 18446744069414584320);
                do {
                    puVar2 = &pLVar10->field_8;
                    local_20e8 = pLVar10;
                    lVar11 = puVar2->HeapBeginPtr();
                    local_2140 = (shared_ptr*)puVar2;
                    lVar12 = puVar2->end();
                    uVar32 = (undefined7)((ulong)lVar12 >> 8);
                    if (lVar11 == lVar12) {
                        local_20f0 = (GraphNode**)CONCAT44(local_20f0._4_4_, (int)CONCAT71(uVar32, 1));
                    } else {
                        local_20f0 = (GraphNode**)CONCAT44(local_20f0._4_4_, (int)CONCAT71(uVar32, 1));
                        do {
                            if (*(char*)(lVar11 + 80) != '\0') {
                                iVar8 = *(int*)(lVar11 + 84);
                                pLVar13 = (Layout*)shared_ptr<BuildCombinedLocationRequestData>::operator->(this_10);
                                pLVar13 = (Layout*)eastl::basic_string<
                                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                                    Layout::HeapBeginPtr(pLVar13);
                                this_04 = (shared_ptr<MapSquareLocation>*)eastl::basic_string<
                                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                                    Layout::HeapBeginPtr(pLVar13);
                                psVar14 = (shared_ptr<MapSquareLocation>*)pLVar13->end();
                                for (; this_04 != psVar14; this_04 = this_04 + 112) {
                                    piVar15 = (int*)shared_ptr<MapSquareLocation>::operator->(this_04);
                                    if (*piVar15 == iVar8) {
                                        lVar16 = shared_ptr<MapSquareLocation>::operator->(this_04);
                                        shared_ptr<LocType>::operator=((shared_ptr<LocType>*)(lVar11 + 144),
                                                                       (shared_ptr*)(lVar16 + 72));
                                        break;
                                    }
                                }
                                bVar5 = ((lVar11 + 144))->operator_cast_to_bool();
                                this_10 = local_2148;
                                uVar7 = (undefined4)((ulong)in_stack_ffffffffffffde58 >> 32);
                                if (!bVar5) {
                                    uVar17 = logger::default_logger();
                                    local_20f0 = (GraphNode**)((ulong)local_20f0 & 18446744069414584320);
                                    in_stack_ffffffffffffde58 = (undefined1*)CONCAT44(uVar7, iVar8);
                                    logger::Logger::Log(
                                        uVar17, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/assetbuilder/jobs/buildcombinedlocation/"
                                        "BuildCombinedLocationMain.cpp",
                                        287, "BuildCombinedLocations: Failed to find location type for section, ID: %d",
                                        in_stack_ffffffffffffde58);
                                }
                            }
                            if ((*(short*)(lVar11 + 16) != 0) || (*(short*)(lVar11 + 18) != 0)) {
                                in_stack_ffffffffffffde58 = (undefined1*)CONCAT44(
                                    (int)((ulong)in_stack_ffffffffffffde58 >> 32), (int)*(short*)(lVar11 + 18));
                                local_2118->AddLocationHeightOffset(*(int*)(lVar11 + 8), *(int*)(lVar11 + 20),
                                                                    *(int*)(lVar11 + 24), *(int*)(lVar11 + 40),
                                                                    *(int*)(lVar11 + 44), (int)*(short*)(lVar11 + 18),
                                                                    (int)*(short*)(lVar11 + 16));
                            }
                            lVar11 = lVar11 + 192;
                        } while (lVar11 != lVar12);
                    }
                    if (((ulong)local_20f0 & 1) != 0) {
                        pLVar10 = local_20e8 + 3;
                        pWVar18 = (WaterType*)shared_ptr<graphics::Model>::operator->(
                            (shared_ptr<graphics::Model>*)&pLVar10->field_24);
                        this_05 =
                            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                pWVar18->GetEmissiveUVScale();
                        cVar6 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                                 eastl::allocator>>::empty(this_05);
                        if (cVar6 != '\0') {
                            /* WARNING: Subroutine does not return */
                            LogAssert("!locationHashList.empty()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationMain.cpp",
                                      301, (char*)0);
                        }
                        eastl::fixed_hash_map<unsigned int, graphics::Model_const*, 256ul, 257ul, true,
                                              eastl::hash<unsigned int>, eastl::equal_to<unsigned int>, false,
                                              eastl::allocator>::fixed_hash_map(local_20d0, (hash*)&local_2108,
                                                                                (equal_to*)&local_2158);
                        puVar19 = (undefined4*)this_05->HeapBeginPtr();
                        puVar20 = (undefined4*)this_05->end();
                        for (; puVar19 != puVar20; puVar19 = puVar19 + 1) {
                            local_2108._0_4_ = *puVar19;
                            puVar21 = (undefined8*)eastl::hash_map<
                                unsigned int, BuildCombinedLocationRequestData_PerModelData*, eastl::hash<unsigned int>,
                                eastl::equal_to<unsigned int>, eastl::allocator, false>::
                            operator[]((hash_map<unsigned int, BuildCombinedLocationRequestData_PerModelData*,
                                                 eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                                                 eastl::allocator, false>*)puVar1,
                                       (uint*)&local_2108);
                            if ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)*puVar21 ==
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)0) {
                                /* WARNING: Subroutine does not return */
                                LogAssert(
                                    "perModelData",
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationMain.cpp",
                                    308, (char*)0);
                            }
                            uVar17 = (*puVar21)->end();
                            puVar21 = (undefined8*)eastl::hash_map<
                                unsigned int, graphics::Model_const*, eastl::hash<unsigned int>,
                                eastl::equal_to<unsigned int>,
                                eastl::fixed_hashtable_allocator<258ul, 24ul, 256ul, 8ul, 0ul, true, eastl::allocator>,
                                false>::operator[]((hash_map<unsigned int, graphics::Model_const*,
                                                             eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                                                             eastl::fixed_hashtable_allocator<
                                                                 258ul, 24ul, 256ul, 8ul, 0ul, true, eastl::allocator>,
                                                             false>*)local_20d0,
                                                   (uint*)&local_2108);
                            *puVar21 = uVar17;
                        }
                        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<
                            oldscape::FileRSevenDebugPresetProvider, void>(
                            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_2108,
                            (shared_ptr*)&pLVar10->field_24);
                        pMVar22 =
                            (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)&local_2108);
                        psVar33 = local_2140;
                        this_10 = local_2148;
                        cVar6 = pMVar22->IsLoaded();
                        if (cVar6 == '\0') {
                            pMVar22 = (Model*)shared_ptr<graphics::Model>::operator->(
                                (shared_ptr<graphics::Model>*)&local_2108);
                            pMVar22->ConstructAtlasFromWorker(local_20d0, 0);
                            pMVar22 = (Model*)shared_ptr<graphics::Model>::operator->(
                                (shared_ptr<graphics::Model>*)&local_2108);
                            pMVar22->ConstructFinishAndUpload();
                        }
                        uVar7 = psVar33->size();
                        local_2158._0_4_ = uVar7;
                        local_20f8 = graphics::GraphNode::Create<int>((int*)&local_2158);
                        this_00 = local_20e0->field_144;
                        ppGVar23 = (GraphNode**)local_20e0->field_168->GetWorld();
                        in_stack_ffffffffffffde58 = &local_20e8->field_2;
                        MakeSharedPool<CombinedLocation, 128>::MakeShared<
                            graphics::RT7Core&, graphics::GraphNode*&, shared_ptr<World> const&, bool&, bool&, bool&,
                            bool&, shared_ptr<graphics::Model>&,
                            eastl::vector<BuildCombinedLocationResult_GroupSection, eastl::allocator>&>(
                            &local_2158, (MakeSharedPool<CombinedLocation, 128>*)this_00, (RT7Core*)&local_20f8,
                            ppGVar23, (shared_ptr*)&local_20e8->m_rot, (bool*)local_20e8,
                            (bool*)in_stack_ffffffffffffde58, (bool*)&local_20e8->field_3, (bool*)&local_2108, psVar33,
                            in_stack_ffffffffffffde78);
                        this_06 = (shared_ptr<CombinedLocation>*)
                            eastl::vector<shared_ptr<CombinedLocation>, eastl::allocator>::operator[](
                                local_2130, (long)(int)local_2110);
                        shared_ptr<CombinedLocation>::operator=(this_06, &local_2158);
                        this_07 = (Js5HTTPQueueRequest*)shared_ptr<CombinedLocation>::operator->(
                            (shared_ptr<CombinedLocation>*)&local_2158);
                        pcVar24 = (char*)local_20e0->field_168->GetWrapU();
                        this_07->SetProxyPassword(pcVar24);
                        pCVar25 = (CombinedLocation*)shared_ptr<CombinedLocation>::operator->(
                            (shared_ptr<CombinedLocation>*)&local_2158);
                        pCVar25->SetBackgroundSoundList((vector*)&local_20e8[2].field_24);
                        pGVar27 = local_20f8;
                        pGVar26 = (GraphEntity*)local_2158.end();
                        pGVar27->SetEntity(pGVar26);
                        pGVar27 = (GraphNode*)local_20e0->field_168->GetNode();
                        pGVar27->AddChild(local_20f8);
                        pEVar28 = (Entity*)shared_ptr<CombinedLocation>::operator->(
                            (shared_ptr<CombinedLocation>*)&local_2158);
                        pEVar28->SetTargetLOD();
                        pEVar28 = (Entity*)shared_ptr<CombinedLocation>::operator->(
                            (shared_ptr<CombinedLocation>*)&local_2158);
                        pEVar28->SetCurrentLOD();
                        pCVar25 = (CombinedLocation*)shared_ptr<CombinedLocation>::operator->(
                            (shared_ptr<CombinedLocation>*)&local_2158);
                        pCVar25->HideHiddenAudioCombinableSections();
                        local_2110 = (bool*)CONCAT44(local_2110._4_4_, (int)local_2110 + 1);
                        local_2158.~shared_ptr();
                        local_2108.~shared_ptr();
                        local_20d0->~fixed_hash_map();
                    }
                    pLVar10 = (LocData*)&local_20e8[4].field_8;
                } while (pLVar10 != local_2138);
            }
            local_2128->clear();
            puVar2 = &local_20e0->field_112;
            psVar33 = (shared_ptr*)&local_2120->field_64;
            uVar9 = psVar33->size();
            local_2130 = (vector<shared_ptr<CombinedLocation>, eastl::allocator>*)puVar2;
            puVar2->resize(uVar9);
            psVar29 = (shared_ptr*)psVar33->HeapBeginPtr();
            local_2128 = (shared_ptr*)psVar33->end();
            if (psVar29 != local_2128) {
                local_2118 = (HeightMap*)0;
                do {
                    pWVar18 = (WaterType*)shared_ptr<graphics::Model>::operator->(
                        (shared_ptr<graphics::Model>*)&psVar29[6].field_8);
                    iVar8 = pWVar18->GetEmissiveMapMaterialID();
                    local_20f8 = (GraphNode*)CONCAT44(local_20f8._4_4_, iVar8);
                    if (iVar8 == 0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("locationHash",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationMain.cpp",
                                  355, (char*)0);
                    }
                    puVar21 = (undefined8*)eastl::hash_map<
                        unsigned int, BuildCombinedLocationRequestData_PerModelData*, eastl::hash<unsigned int>,
                        eastl::equal_to<unsigned int>, eastl::allocator,
                        false>::operator[]((hash_map<unsigned int, BuildCombinedLocationRequestData_PerModelData*,
                                                     eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                                                     eastl::allocator, false>*)puVar1,
                                           (uint*)&local_20f8);
                    this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)*puVar21;
                    if (this_01 == (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("perModelData",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationMain.cpp",
                                  357, (char*)0);
                    }
                    shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider,
                                                                                void>(
                        (shared_ptr<oldscape::RSevenDebugPresetProvider>*)local_20d0, (shared_ptr*)&psVar29[6].field_8);
                    pMVar22 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)local_20d0);
                    cVar6 = pMVar22->IsLoaded();
                    if (cVar6 == '\0') {
                        pMVar22 =
                            (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)local_20d0);
                        pMVar30 = (Model*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                            this_01);
                        pMVar22->ConstructAtlasFromWorker(0, pMVar30);
                        pMVar22 =
                            (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)local_20d0);
                        pMVar22->ConstructFinishAndUpload();
                    }
                    local_2158._0_8_ = graphics::GraphNode::Create<>((GraphNode*)pMVar22);
                    pBVar4 = local_20e0;
                    local_20f0 = (GraphNode**)local_20e0->field_168->GetWorld();
                    iVar8 = *(int*)(psVar29 + 5);
                    lVar11 = shared_ptr<BuildCombinedLocationRequestData>::operator->(this_10);
                    iVar3 = *(int*)(lVar11 + 8);
                    local_2160 = pBVar4->field_168->GetEffectAnimID();
                    local_2160 = (iVar8 + iVar3 * -64) - local_2160;
                    iVar8 = *(int*)&psVar29[5].field_4;
                    lVar11 = shared_ptr<BuildCombinedLocationRequestData>::operator->(this_10);
                    local_20e8 = (LocData*)&psVar29->field_8;
                    local_2140 = psVar29 + 1;
                    local_2138 = (LocData*)&psVar29[4].field_4;
                    local_2110 = (bool*)((long)&psVar29->field_8 + 4);
                    iVar3 = *(int*)(lVar11 + 12);
                    local_215c = pBVar4->field_168->GetMinGridZ();
                    local_215c = (iVar8 + iVar3 * -64) - local_215c;
                    MakeSharedPool<Location, 256>::MakeShared<graphics::GraphNode*&, shared_ptr<World> const&, int&,
                                                              int&, LocData&, bool&, bool&, int&, int&, int, int,
                                                              shared_ptr<graphics::Model>&>(
                        &local_2108, (MakeSharedPool<Location, 256>*)&local_2158, local_20f0, psVar29, (int*)local_20e8,
                        (int*)local_2140, local_2138, local_2110, (bool*)(psVar29 + 5), (int*)&psVar29[5].field_4,
                        &local_2160, &local_215c, (int*)local_20d0, psVar33);
                    pEVar28 = (Entity*)shared_ptr<Location>::operator->((shared_ptr<Location>*)&local_2108);
                    pEVar28->SetMaximumRemoveRoofLevel(*(int*)&psVar29->field_4);
                    this_08 = (Text*)shared_ptr<Location>::operator->((shared_ptr<Location>*)&local_2108);
                    this_08->SetLinkObjType((int)psVar29[4].field_8);
                    pLVar31 = (Location*)shared_ptr<Location>::operator->((shared_ptr<Location>*)&local_2108);
                    pLVar31->SetIsWDDBothOffsetMember(*(bool*)((long)&psVar29[4].field_8 + 4));
                    pLVar31 = (Location*)shared_ptr<Location>::operator->((shared_ptr<Location>*)&local_2108);
                    pLVar31->SetBuiltGridSize((int)psVar29[5].field_8, *(int*)((long)&psVar29[5].field_8 + 4));
                    this_09 = (shared_ptr<Location>*)eastl::vector<shared_ptr<Location>, eastl::allocator>::operator[](
                        (vector<shared_ptr<Location>, eastl::allocator>*)local_2130, (ulong)local_2118);
                    shared_ptr<Location>::operator=(this_09, &local_2108);
                    pEVar28 = (Entity*)shared_ptr<Location>::operator->((shared_ptr<Location>*)&local_2108);
                    pEVar28->SetTargetLOD(0);
                    pLVar31 = (Location*)shared_ptr<Location>::operator->((shared_ptr<Location>*)&local_2108);
                    pLVar31->SetLocationLOD(*(undefined1*)(psVar29 + 6));
                    uVar17 = local_2158._0_8_;
                    pGVar26 = (GraphEntity*)local_2108.end();
                    uVar17->SetEntity(pGVar26);
                    local_2108.~shared_ptr();
                    local_20d0->~shared_ptr();
                    psVar29 = (shared_ptr*)&psVar29[7].field_8;
                    local_2118 = (HeightMap*)((long)&local_2118->field_0 + 1);
                    this_10 = local_2148;
                } while (psVar29 != local_2128);
            }
            psVar33->clear();
            local_2120->clear();
        }
        local_20d8->~ScopedGPUMemoryZone();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::game

namespace jag {
    // 0x10064a7c0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::BuildCombinedLocationRequestData>::type bucket_make_shared<game::BuildCombinedLocationRequestData, eastl::vector<game::LocationContainerLocation, eastl::allocator> const&, int&, int&>(eastl::vector<game::LocationContainerLocation, eastl::allocator> const&, int&, int&)
    jag* jag::bucket_make_shared<game::BuildCombinedLocationRequestData,
                                 eastl::vector<game::LocationContainerLocation, eastl::allocator> const&, int&, int&>(
        vector* param_1, int* param_2, int* param_3) {
        BucketRefCounter* pBVar1;
        managed_ptr_counter_and_data* local_40;
        BuildCombinedLocationRequestData* local_38[2];

        local_40 = (managed_ptr_counter_and_data*)BucketManager::Allocate(264, 0, 16);
        if (local_40 == (managed_ptr_counter_and_data*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_38[0] =
                placement_new<game::BuildCombinedLocationRequestData,
                              eastl::vector<game::LocationContainerLocation, eastl::allocator> const&, int&, int&>(
                    local_40 + 48, param_1, param_2, param_3);
            pBVar1 =
                placement_new<BucketRefCounter<game::BuildCombinedLocationRequestData>,
                              managed_ptr_counter_and_data<BucketRefCounter<game::BuildCombinedLocationRequestData>,
                                                           game::BuildCombinedLocationRequestData>*&,
                              game::BuildCombinedLocationRequestData*&>(local_40, &local_40, local_38);
            pBVar1->~AutoSingleton(local_38[0]);
            pBVar1->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(pBVar1, local_38[0]);
        }
        return this;
    }

    // 0x10064ba40, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::BuildCombinedLocationWorker>::type bucket_make_shared<game::BuildCombinedLocationWorker>()
    jag* bucket_make_shared<game::BuildCombinedLocationWorker>() {
        BucketRefCounter* pBVar1;
        managed_ptr_counter_and_data* local_30;
        BuildCombinedLocationWorker* local_28[2];

        local_30 = (managed_ptr_counter_and_data*)BucketManager::Allocate(88, 0, 16);
        if (local_30 == (managed_ptr_counter_and_data*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_28[0] = placement_new<game::BuildCombinedLocationWorker>(local_30 + 48);
            pBVar1 = placement_new<BucketRefCounter<game::BuildCombinedLocationWorker>,
                                   managed_ptr_counter_and_data<BucketRefCounter<game::BuildCombinedLocationWorker>,
                                                                game::BuildCombinedLocationWorker>*&,
                                   game::BuildCombinedLocationWorker*&>(local_30, &local_30, local_28);
            pBVar1->~AutoSingleton(local_28[0]);
            pBVar1->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(pBVar1, local_28[0]);
        }
        return this;
    }

} // namespace jag
