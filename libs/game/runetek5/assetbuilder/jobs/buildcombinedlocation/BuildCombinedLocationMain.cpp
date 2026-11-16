// libs/game/runetek5/assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationMain.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "BuildCombinedLocationMain.h"

namespace jag::game {
    // 0x10064a680
    BuildCombinedLocationMain::BuildCombinedLocationMain(
        graphics::RT7Core& rt7Core, int arg2, const LocationContainer* locationContainer,
        const eastl::vector<LocationContainerLocation>& locationContainerLocations, int arg5, int arg6, bool arg7) {
        ReturnValue local_48;

        int local_34 = arg5;
        new (this) AssetJob(10, arg2, -1);
        new (&field_80) eastl::vector<shared_ptr<CombinedLocation>>();
        new (&field_112) eastl::vector<shared_ptr<Location>>();
        field_144 = rt7Core;
        new (m_requestData) shared_ptr();
        field_168 = locationContainer;
        new (&field_176) eastl::hash_map<unsigned int, BuildCombinedLocationRequestData_PerModelData*>(local_48);
        bucket_make_shared<BuildCombinedLocationRequestData, eastl::vector<LocationContainerLocation> const&, int&,
                           int&>(&local_48, locationContainerLocations, &local_34, &arg6);
        *m_requestData = local_48;
    }

    // 0x10064a8d0
    uint8_t* BuildCombinedLocationMain::RunFirst(Js5ResourceProvider* js5ResourceProvider,
                                                 ConfigProvider* configProvider) {
        BuildRequest<graphics::Model, BuildModelMain>* pBVar1;
        short sVar2;
        uint64_t uVar3;
        uint64_t uVar4;
        uint64_t uVar5;
        uint8_t bVar8;
        bool cVar9;
        uint8_t uVar10;
        uint8_t bVar11;
        short sVar12;
        uint16_t uVar13;
        LocShape LVar14;
        uint32_t uVar15;
        unsigned int uVar16;
        Layout* pLVar17;
        TextureManager* pTVar18;
        long lVar19;
        shared_ptr<World>* this_02;
        unsigned long uVar20;
        shared_ptr<MapSquareLocation>* this_05;
        shared_ptr<MapSquareLocation>* psVar21;
        uint64_t* puVar22;
        shared_ptr<graphics::Model>* psVar23;
        Model* pMVar24;
        uint32_t* puVar25;
        LocType* pLVar26;
        NXTPixToolkit* pNVar27;
        Vector2T<int>* this_06;
        float* pfVar28;
        Logger* this_07;
        uint32_t* puVar29;
        SceneViewData* this_08;
        float* pfVar30;
        Array<int>* arg1;
        int* piVar31;
        shared_ptr<graphics::Model>* psVar32;
        Location* this_10;
        TcpConnectionMessageBase* this_12;
        int iVar34;
        bool bVar35;
        ReturnValue local_b0;
        ReturnValue local_a0;
        vector<BuildCombinedLocationRequest_Location>* local_90;
        shared_ptr<MapSquareLocation>* local_88;
        uint8_t* local_80;
        hash_map<unsigned int, BuildCombinedLocationRequestData_PerModelData*>* local_78;
        LinkMap* local_70;
        BuildRequest<graphics::Model, BuildModelMain>* local_68;
        Layout* local_60;
        Layout* local_58;
        uint32_t local_44;
        LocType* local_40;
        unsigned int local_34;

        uint8_t* this_00 = m_requestData;
        char cVar6 = this_00->operator_cast_to_bool();
        uint8_t** ppuVar33 = &DataStatus::MISSING;
        if ((cVar6) && (field_168 != nullptr)) {
            local_80 = this_00;
            pLVar17 = (Layout*)this_00->end();
            *(uint32_t*)(pLVar17 + 16) = 0;
            pTVar18 = field_144->GetTextureManager();
            lVar19 = ((TextureAtlasManager*)pTVar18->GetTextureAtlasManager())->GetSettings();
            uVar3 = *(uint64_t*)(lVar19 + 152);
            uVar4 = *(uint64_t*)(lVar19 + 160);
            uVar5 = *(uint64_t*)(lVar19 + 168);
            *(uint64_t*)(pLVar17 + 176) = *(uint64_t*)(lVar19 + 144);
            *(uint64_t*)(pLVar17 + 184) = uVar3;
            *(uint64_t*)(pLVar17 + 192) = uVar4;
            *(uint64_t*)(pLVar17 + 200) = uVar5;
            *(uint32_t*)(pLVar17 + 208) = *(uint32_t*)(lVar19 + 176);
            pTVar18 = field_144->GetTextureManager();
            pLVar17[212] = (Layout)pTVar18->UseCompressedTextures();
            this_02 = (shared_ptr<World>*)field_168->GetWorld();
            local_70 = ((World*)(*this_02).operator->())->GetLinkMap();
            uVar20 = ((vector<graphics::SpriteAtlasMapping>*)pLVar17->HeapBeginPtr())->size();
            local_90 = (vector<BuildCombinedLocationRequest_Location>*)(pLVar17 + 24);
            ((pLVar17 + 24))->reserve(uVar20);
            local_58 = pLVar17;
            pLVar17 = (Layout*)pLVar17->HeapBeginPtr();
            this_05 = (shared_ptr<MapSquareLocation>*)pLVar17->HeapBeginPtr();
            psVar21 = (shared_ptr<MapSquareLocation>*)pLVar17->end();
            if (this_05 != psVar21) {
                local_60 = local_58 + 56;
                local_78 = (hash_map<unsigned int, BuildCombinedLocationRequestData_PerModelData*>*)&field_176;
                local_88 = psVar21;
                do {
                    pBVar1 = (BuildRequest<graphics::Model, BuildModelMain>*)(this_05 + 16);
                    cVar6 = pBVar1->IsTaskDone();
                    if (cVar6) {
                        psVar23 = (shared_ptr<graphics::Model>*)pBVar1->SSOBeginPtr();
                        pMVar24 = (Model*)(*psVar23).operator->();
                        bVar8 = pMVar24->GetConstructedState();
                        if (2 < bVar8) {
                            psVar23 = (shared_ptr<graphics::Model>*)pBVar1->SSOBeginPtr();
                            pMVar24 = (Model*)(*psVar23).operator->();
                            cVar6 = pMVar24->IsEmptyModel();
                            if (!cVar6) {
                                local_68 = pBVar1;
                                puVar25 = (uint32_t*)local_90->push_back();
                                lVar19 = (*this_05).operator->();
                                pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                lVar19 = (*this_05).operator->();
                                bVar8 = ((lVar19 + 8))->GetRot();
                                sVar12 = pLVar26->GetGridWidth((unsigned int)bVar8);
                                *(short*)(puVar25 + 10) = sVar12 << 7;
                                lVar19 = (*this_05).operator->();
                                pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                lVar19 = (*this_05).operator->();
                                bVar8 = ((lVar19 + 8))->GetRot();
                                sVar12 = pLVar26->GetGridLength((unsigned int)bVar8);
                                pLVar17 = local_58;
                                *(short*)((long)puVar25 + 42) = sVar12 << 7;
                                iVar34 = *(int*)(local_58 + 8);
                                lVar19 = (*this_05).operator->();
                                puVar25[8] =
                                    ((int)(short)(*(short*)(puVar25 + 10) - (*(short*)(puVar25 + 10) >> 15)) >> 1) +
                                    *(char*)(lVar19 + 5) * 128 + iVar34 * 8192;
                                iVar34 = *(int*)(pLVar17 + 12);
                                lVar19 = (*this_05).operator->();
                                puVar25[9] = ((int)(short)(*(short*)((long)puVar25 + 42) -
                                                           (*(short*)((long)puVar25 + 42) >> 15)) >>
                                              1) +
                                             *(char*)(lVar19 + 6) * 128 + iVar34 * 8192;
                                uVar15 = *(uint32_t*)(pLVar17 + 8);
                                lVar19 = (*this_05).operator->();
                                *(short*)(puVar25 + 7) = (short)*(char*)(lVar19 + 5) + (short)uVar15 * 64;
                                uVar15 = *(uint32_t*)(pLVar17 + 12);
                                lVar19 = (*this_05).operator->();
                                *(short*)((long)puVar25 + 30) = (short)*(char*)(lVar19 + 6) + (short)uVar15 * 64;
                                lVar19 = (*this_05).operator->();
                                *(uint8_t*)((long)puVar25 + 5) = *(uint8_t*)(lVar19 + 4);
                                cVar6 = local_70->IsLinkBelow((int)*(short*)(puVar25 + 7),
                                                              (int)*(short*)((long)puVar25 + 30));
                                if (cVar6) {
                                    *(char*)((long)puVar25 + 5) = *(char*)((long)puVar25 + 5) + '\x01';
                                }
                                lVar19 = (*this_05).operator->();
                                pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                lVar19 = (*this_05).operator->();
                                LVar14 = ((lVar19 + 8))->GetShape();
                                lVar19 = (*this_05).operator->();
                                cVar6 = pLVar26->RaiseEntities(LVar14 & 255, *(char*)(lVar19 + 61) == '\0');
                                uVar15 = 0;
                                iVar34 = 0;
                                if (cVar6) {
                                    lVar19 = (*this_05).operator->();
                                    pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                    lVar19 = (*this_05).operator->();
                                    bVar8 = ((lVar19 + 8))->GetShape();
                                    uVar15 = pLVar26->GetRaiseObjectGroundDecor((unsigned int)bVar8);
                                    psVar23 = (shared_ptr<graphics::Model>*)local_68->SSOBeginPtr();
                                    pNVar27 = (NXTPixToolkit*)(*psVar23).operator->();
                                    pNVar27 = (NXTPixToolkit*)pNVar27->GetScreen();
                                    this_06 = (Vector2T<int>*)pNVar27->GetScreen();
                                    pfVar28 = (float*)this_06->y();
                                    iVar34 = (int)*pfVar28;
                                    if ((short)iVar34 != iVar34) {
                                        this_07 = logger::default_logger();
                                        puVar29 = (uint32_t*)(*this_05).operator->();
                                        this = this;
                                        iVar34 = 1;
                                        this_07->Log(
                                            true, 2,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "game/runetek5/assetbuilder/jobs/buildcombinedlocation/"
                                            "BuildCombinedLocationMain.cpp",
                                            102, "Invalid AABB for model at MapSquareLocation ID %d [%d,%d,%d,%d,%d]",
                                            *puVar29, (int)*(char*)(puVar25 + 1), (int)*(short*)(puVar25 + 7) >> 6,
                                            (int)*(short*)((long)puVar25 + 30) >> 6, (int)*(short*)(puVar25 + 7) & 63,
                                            (int)*(short*)((long)puVar25 + 30) & 63);
                                    }
                                }
                                local_40 = (LocType*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)iVar34);
                                local_44 = uVar15;
                                puVar29 = (uint32_t*)(*this_05).operator->();
                                *puVar25 = *puVar29;
                                lVar19 = (*this_05).operator->();
                                *(uint8_t*)(puVar25 + 1) = *(uint8_t*)(lVar19 + 4);
                                lVar19 = (*this_05).operator->();
                                cVar6 = *(char*)(lVar19 + 5);
                                cVar9 = field_168->GetEffectAnimID();
                                *(char*)((long)puVar25 + 6) = cVar6 - cVar9;
                                lVar19 = (*this_05).operator->();
                                cVar6 = *(char*)(lVar19 + 6);
                                cVar9 = field_168->GetMinGridZ();
                                *(char*)((long)puVar25 + 7) = cVar6 - cVar9;
                                uVar10 = field_168->GetEffectAnimID();
                                *(uint8_t*)(puVar25 + 2) = uVar10;
                                uVar10 = field_168->GetMinGridZ();
                                *(uint8_t*)((long)puVar25 + 9) = uVar10;
                                lVar19 = (*this_05).operator->();
                                this_08 = (SceneViewData*)(*((lVar19 + 72))).operator->();
                                pfVar28 = (float*)this_08->GetStippleNearClipParams();
                                lVar19 = (*this_05).operator->();
                                pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                pfVar30 = (float*)pLVar26->GetOffset();
                                *((puVar25 + 4)) = math::Vector3T<short>::Set((unsigned short)(int)*pfVar28,
                                                                              (unsigned short)(int)pfVar28[1],
                                                                              (unsigned short)(int)pfVar28[2]);
                                *((ReturnValue*)((long)puVar25 + 22)) = math::Vector3T<short>::Set(
                                    (unsigned short)(int)*pfVar30, (unsigned short)(int)pfVar30[1],
                                    (unsigned short)(int)pfVar30[2]);
                                *(short*)((long)puVar25 + 10) =
                                    *(short*)(puVar25 + 10) / 2 + *(char*)((long)puVar25 + 6) * 128;
                                *(uint16_t*)(puVar25 + 3) = *(uint16_t*)(this_05 + 52);
                                *(short*)((long)puVar25 + 14) =
                                    *(short*)((long)puVar25 + 42) / 2 + *(char*)((long)puVar25 + 7) * 128;
                                (*((Vector3T<short>*)((long)puVar25 + 10))) += (*((puVar25 + 4)));
                                *(short*)((long)puVar25 + 46) = (short)local_40;
                                *(short*)(puVar25 + 11) = (short)local_44;
                                lVar19 = (*this_05).operator->();
                                (*((puVar25 + 12))) = (*((lVar19 + 8)));
                                lVar19 = (*this_05).operator->();
                                *(uint8_t*)(puVar25 + 25) = *(uint8_t*)(lVar19 + 61);
                                lVar19 = (*this_05).operator->();
                                local_40 = (LocType*)(*((lVar19 + 72))).operator->();
                                lVar19 = (*this_05).operator->();
                                cVar6 = *(char*)(lVar19 + 4);
                                sVar12 = *(short*)(puVar25 + 7);
                                sVar2 = *(short*)((long)puVar25 + 30);
                                lVar19 = (*this_05).operator->();
                                bVar8 = ((lVar19 + 8))->GetRot();
                                uVar10 = local_40->GetMaxRemoveRoofLevel(*local_70, (int)cVar6, (int)sVar12, (int)sVar2,
                                                                         (unsigned int)bVar8);
                                *(uint8_t*)((long)puVar25 + 102) = uVar10;
                                lVar19 = (*this_05).operator->();
                                pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                cVar6 = pLVar26->IsActive();
                                uVar10 = 1;
                                if (!cVar6) {
                                    lVar19 = (*this_05).operator->();
                                    pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                    cVar6 = pLVar26->IsFindable();
                                    if (!cVar6) {
                                        lVar19 = (*this_05).operator->();
                                        pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                        cVar6 = pLVar26->HasParticles();
                                        if (!cVar6) {
                                            lVar19 = (*this_05).operator->();
                                            pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                            uVar10 = pLVar26->HasVFX();
                                        }
                                    }
                                }
                                *(uint8_t*)((long)puVar25 + 103) = uVar10;
                                lVar19 = (*this_05).operator->();
                                pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                bVar8 = ((Array<VarValue>*)pLVar26->GetAnims())->empty();
                                *(uint8_t*)(puVar25 + 26) = bVar8 ^ 1;
                                lVar19 = (*this_05).operator->();
                                pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                lVar19 = (*this_05).operator->();
                                bVar8 = ((lVar19 + 8))->GetShape();
                                uVar10 = pLVar26->CastsShadows((unsigned int)bVar8);
                                *(uint8_t*)((long)puVar25 + 105) = uVar10;
                                lVar19 = (*this_05).operator->();
                                *(uint8_t*)((long)puVar25 + 106) = *(uint8_t*)(lVar19 + 60);
                                lVar19 = (*this_05).operator->();
                                pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                uVar10 = pLVar26->IsRuneTek5Only();
                                *(uint8_t*)((long)puVar25 + 107) = uVar10;
                                lVar19 = (*this_05).operator->();
                                *(uint8_t*)(puVar25 + 27) = *(uint8_t*)(lVar19 + 67);
                                lVar19 = (*this_05).operator->();
                                *(uint8_t*)((long)puVar25 + 101) = *(uint8_t*)(lVar19 + 61) ^ 1;
                                lVar19 = (*this_05).operator->();
                                pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                cVar6 = pLVar26->IsPotentialGroundDecor();
                                if (!cVar6) {
                                    bVar35 = false;
                                } else {
                                    lVar19 = (*this_05).operator->();
                                    cVar6 = ((lVar19 + 8))->GetShape();
                                    bVar35 = cVar6 == '\x16';
                                }
                                *(bool*)((long)puVar25 + 109) = bVar35;
                                lVar19 = (*this_05).operator->();
                                pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                uVar15 = pLVar26->GetHillChangeType();
                                puVar25[28] = uVar15;
                                lVar19 = (*this_05).operator->();
                                pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                uVar15 = pLVar26->GetHillChangeParam();
                                puVar25[29] = uVar15;
                                *(bool*)(puVar25 + 30) = this_05[105] == (shared_ptr<MapSquareLocation>)1;
                                (*((puVar25 + 32))) = (*((this_05 + 56)));
                                (*((puVar25 + 38))) = (*((this_05 + 80)));
                                lVar19 = (*this_05).operator->();
                                *(uint16_t*)(puVar25 + 44) = *(uint16_t*)(lVar19 + 64);
                                lVar19 = (*this_05).operator->();
                                *(uint8_t*)((long)puVar25 + 178) = *(uint8_t*)(lVar19 + 66);
                                lVar19 = (*this_05).operator->();
                                pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                lVar19 = (*this_05).operator->();
                                bVar8 = ((lVar19 + 8))->GetRot();
                                uVar13 = pLVar26->GetGridWidth((unsigned int)bVar8);
                                *(uint16_t*)(puVar25 + 45) = uVar13;
                                lVar19 = (*this_05).operator->();
                                pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                lVar19 = (*this_05).operator->();
                                bVar8 = ((lVar19 + 8))->GetRot();
                                uVar13 = pLVar26->GetGridLength((unsigned int)bVar8);
                                *(uint16_t*)((long)puVar25 + 182) = uVar13;
                                lVar19 = (*this_05).operator->();
                                pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                cVar6 = pLVar26->HasSound();
                                if (cVar6) {
                                    lVar19 = (*this_05).operator->();
                                    pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                    uVar15 = pLVar26->GetBackgroundSound();
                                    puVar25[46] = uVar15;
                                    lVar19 = (*this_05).operator->();
                                    pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                    uVar10 = pLVar26->GetBackgroundSoundShape();
                                    *(uint8_t*)(puVar25 + 51) = uVar10;
                                    lVar19 = (*this_05).operator->();
                                    pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                    uVar13 = pLVar26->GetBackgroundSoundVolume();
                                    *(uint16_t*)(puVar25 + 47) = uVar13;
                                    lVar19 = (*this_05).operator->();
                                    pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                    uVar13 = pLVar26->GetBackgroundSoundRange();
                                    *(uint16_t*)((long)puVar25 + 190) = uVar13;
                                    lVar19 = (*this_05).operator->();
                                    pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                    uVar13 = pLVar26->GetBackgroundSoundDropoffRange();
                                    *(uint16_t*)(puVar25 + 48) = uVar13;
                                    lVar19 = (*this_05).operator->();
                                    pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                    uVar15 = pLVar26->GetBackgroundSoundRateMin();
                                    puVar25[49] = uVar15;
                                    lVar19 = (*this_05).operator->();
                                    pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                    uVar15 = pLVar26->GetBackgroundSoundRateMax();
                                    puVar25[50] = uVar15;
                                    lVar19 = (*this_05).operator->();
                                    pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                    uVar10 = pLVar26->GetBackgroundSoundDistanceFiltered();
                                    *(uint8_t*)((long)puVar25 + 205) = uVar10;
                                    lVar19 = (*this_05).operator->();
                                    pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                    uVar15 = pLVar26->GetBackgroundSoundDistanceFilterFrequencyHzHigh();
                                    puVar25[52] = uVar15;
                                    lVar19 = (*this_05).operator->();
                                    pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                    uVar15 = pLVar26->GetBackgroundSoundDistanceFilterFrequencyHzLow();
                                    puVar25[53] = uVar15;
                                    lVar19 = (*this_05).operator->();
                                    pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                    uVar15 = pLVar26->GetBackgroundSoundDistanceFilterQ();
                                    puVar25[54] = uVar15;
                                    lVar19 = (*this_05).operator->();
                                    puVar25[55] = (int)*(char*)(lVar19 + 4);
                                    lVar19 = (*this_05).operator->();
                                    pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                    arg1 = (Array<int>*)pLVar26->GetRandomSounds();
                                    (*((puVar25 + 58))) = *arg1;
                                    cVar6 = ((puVar25 + 58))->empty();
                                    if (!cVar6) {
                                        lVar19 = (*this_05).operator->();
                                        pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                        uVar15 = pLVar26->GetRandomSoundMin();
                                        puVar25[64] = uVar15;
                                        lVar19 = (*this_05).operator->();
                                        pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                        uVar15 = pLVar26->GetRandomSoundMax();
                                        puVar25[65] = uVar15;
                                        lVar19 = (*this_05).operator->();
                                        pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                        uVar10 = pLVar26->GetRandomSoundShape();
                                        *(uint8_t*)(puVar25 + 66) = uVar10;
                                        lVar19 = (*this_05).operator->();
                                        pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                        uVar10 = pLVar26->GetRandomSoundDistanceFiltered();
                                        *(uint8_t*)((long)puVar25 + 265) = uVar10;
                                        lVar19 = (*this_05).operator->();
                                        pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                        uVar15 = pLVar26->GetRandomSoundDistanceFilterFrequencyHzHigh();
                                        puVar25[67] = uVar15;
                                        lVar19 = (*this_05).operator->();
                                        pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                        uVar15 = pLVar26->GetRandomSoundDistanceFilterFrequencyHzLow();
                                        puVar25[68] = uVar15;
                                        lVar19 = (*this_05).operator->();
                                        pLVar26 = (LocType*)(*((lVar19 + 72))).operator->();
                                        uVar15 = pLVar26->GetRandomSoundDistanceFilterQ();
                                        puVar25[69] = uVar15;
                                    }
                                }
                                lVar19 = (*this_05).operator->();
                                uVar16 = ((lVar19 + 8))->GetShape();
                                lVar19 = (*this_05).operator->();
                                bVar8 = *(uint8_t*)(lVar19 + 60);
                                lVar19 = (*this_05).operator->();
                                bVar11 = ((lVar19 + 8))->GetRot();
                                piVar31 = (int*)(*this_05).operator->();
                                pLVar17 = local_60;
                                local_34 =
                                    *piVar31 << 8 | (unsigned int)bVar11 << 6 | uVar16 & 255 | (unsigned int)bVar8 << 5;
                                local_a0 = local_60->find(local_34);
                                local_b0 = pLVar17->end();
                                cVar6 = local_a0 == local_b0;
                                this = this;
                                if (cVar6) {
                                    psVar23 = (shared_ptr<graphics::Model>*)(*local_60)[local_34];
                                    pBVar1 = local_68;
                                    psVar32 = (shared_ptr<graphics::Model>*)local_68->SSOBeginPtr();
                                    *psVar23 = *psVar32;
                                    *(unsigned int*)(psVar23 + 16) = local_34;
                                    psVar32 = (shared_ptr<graphics::Model>*)pBVar1->SSOBeginPtr();
                                    this_10 = (Location*)(*psVar32).operator->();
                                    uVar20 = ((vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)
                                                  this_10->GetServerPosition())
                                                 ->size();
                                    psVar23[21] = (shared_ptr<graphics::Model>)(1 < uVar20);
                                    if (uVar20 < 2) {
                                        psVar32 = (shared_ptr<graphics::Model>*)pBVar1->SSOBeginPtr();
                                        pMVar24 = (Model*)(*psVar32).operator->();
                                        this_12 = (TcpConnectionMessageBase*)pMVar24->GetTextureAtlasReference();
                                        psVar23[20] = (shared_ptr<graphics::Model>)(this_12 != nullptr);
                                        if (this_12 != nullptr) {
                                            uVar15 = this_12->GetEndPosition();
                                            *(uint32_t*)(psVar23 + 24) = uVar15;
                                        }
                                    }
                                    puVar22 = (uint64_t*)(*local_78)[local_34];
                                    *puVar22 = psVar23;
                                }
                                psVar21 = local_88;
                            }
                        }
                    }
                    this_05 = this_05 + 112;
                } while (this_05 != psVar21);
            }
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_a0);
            field_32 = local_a0;
            ppuVar33 = &DataStatus::READY;
        }
        return *ppuVar33;
    }

    // 0x10064b9f0
    BuildCombinedLocationMain* BuildCombinedLocationMain::CreateWorker() {
        ReturnValue local_28;

        bucket_make_shared<BuildCombinedLocationWorker>(&local_28);
        shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_28);
        return this;
    }

    // 0x10064bad0
    auto BuildCombinedLocationMain::DecodeResult(const shared_ptr<void>& arg1) {
        BuildCombinedLocationResultData* buildCombinedLocationResultData;

        if (arg1.operator_cast_to_bool() != '\0') {
            buildCombinedLocationResultData = (BuildCombinedLocationResultData*)arg1.end();
            PostDecodeResultSetup(*buildCombinedLocationResultData);
        }
        return auto(arg1);
    }

    // 0x10064bb20
    void
    BuildCombinedLocationMain::PostDecodeResultSetup(BuildCombinedLocationResultData& buildCombinedLocationResultData) {
        uint8_t* puVar1;
        uint8_t* puVar2;
        LocData* pLVar3;
        shared_ptr<graphics::Model>* this_00;
        uint8_t* this_01;
        int iVar4;
        RT7Core* rt7Core;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        BuildCombinedLocationMain* pBVar5;
        bool cVar6;
        uint32_t uVar7;
        int iVar8;
        shared_ptr<World>* psVar9;
        unsigned long uVar10;
        bool* pbVar11;
        long lVar12;
        long lVar13;
        uint64_t uVar29;
        Layout* pLVar14;
        shared_ptr<MapSquareLocation>* this_04;
        shared_ptr<MapSquareLocation>* psVar15;
        int* piVar16;
        long lVar17;
        Logger* this_05;
        WaterType* pWVar18;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_06;
        unsigned int* puVar19;
        unsigned int* puVar20;
        uint64_t* puVar21;
        uint64_t uVar22;
        Model* pMVar23;
        shared_ptr<CombinedLocation>* this_07;
        Js5HTTPQueueRequest* this_08;
        ConfigProvider* configProvider;
        CombinedLocation* pCVar24;
        GraphEntity* pGVar25;
        GraphNode* pGVar26;
        Entity* pEVar27;
        Model* model;
        Location* pLVar28;
        shared_ptr<Location>* this_10;
        shared_ptr<BuildCombinedLocationRequestData>* this_11;
        bool* in_stack_ffffffffffffde58;
        int local_2160;
        int local_215c;
        GraphNode* local_2158[2];
        shared_ptr<BuildCombinedLocationRequestData>* local_2148;
        LocData* local_2140;
        bool* local_2138;
        vector<shared_ptr<CombinedLocation>>* local_2130;
        vector<BuildCombinedLocationResult_CombinedLocation>* local_2128;
        HeightMap* local_2118;
        bool* local_2110;
        unsigned int local_2108[4];
        GraphNode* local_20f8;
        shared_ptr<World>* local_20f0;
        bool* local_20e8;
        BuildCombinedLocationMain* local_20e0;
        fixed_hash_map<unsigned int, graphics::Model const*, 256ul, 257ul, true, eastl::hash<unsigned int>,
                       eastl::equal_to<unsigned int>, false>
            local_20d0[8344];

        BuildCombinedLocationResultData* local_2120 = buildCombinedLocationResultData;
        ScopedGPUMemoryZone local_20d8("BuildCombinedLocation");
        if (field_168 != nullptr) {
            local_20e0 = this;
            psVar9 = (shared_ptr<World>*)field_168->GetWorld();
            local_2118 = ((World*)**psVar9)->GetHeightMap();
            pBVar5 = local_20e0;
            puVar1 = &local_20e0->field_80;
            puVar2 = &local_2120->field_32;
            uVar10 = puVar2->size();
            local_2130 = (vector<shared_ptr<CombinedLocation>>*)puVar1;
            puVar1->resize(uVar10);
            pbVar11 = (bool*)puVar2->HeapBeginPtr();
            local_2128 = (vector<BuildCombinedLocationResult_CombinedLocation>*)puVar2;
            local_2138 = (bool*)puVar2->end();
            this_11 = (shared_ptr<BuildCombinedLocationRequestData>*)pBVar5->m_requestData;
            puVar1 = &pBVar5->field_176;
            local_2148 = this_11;
            if (pbVar11 != local_2138) {
                local_2110 = (bool*)((unsigned long)local_2110 & 18446744069414584320);
                do {
                    pLVar3 = (LocData*)(pbVar11 + 8);
                    local_20e8 = pbVar11;
                    lVar12 = pLVar3->HeapBeginPtr();
                    local_2140 = pLVar3;
                    lVar13 = pLVar3->end();
                    uVar29 = (uint64_t)((unsigned long)lVar13 >> 8);
                    if (lVar12 == lVar13) {
                        local_20f0 = (shared_ptr<World>*)(((uint64_t)local_20f0._4_4_ << 32) |
                                                          (uint32_t)((int)(((uint64_t)uVar29 << 8) | (uint8_t)1)));
                    } else {
                        local_20f0 = (shared_ptr<World>*)(((uint64_t)local_20f0._4_4_ << 32) |
                                                          (uint32_t)((int)(((uint64_t)uVar29 << 8) | (uint8_t)1)));
                        do {
                            if (*(char*)(lVar12 + 80) != '\0') {
                                iVar8 = *(int*)(lVar12 + 84);
                                pLVar14 = (Layout*)(*this_11).operator->();
                                pLVar14 = (Layout*)pLVar14->HeapBeginPtr();
                                this_04 = (shared_ptr<MapSquareLocation>*)pLVar14->HeapBeginPtr();
                                psVar15 = (shared_ptr<MapSquareLocation>*)pLVar14->end();
                                for (; this_04 != psVar15; this_04 = this_04 + 112) {
                                    piVar16 = (int*)(*this_04).operator->();
                                    if (*piVar16 == iVar8) {
                                        lVar17 = (*this_04).operator->();
                                        (*((lVar12 + 144))) = (*((lVar17 + 72)));
                                        break;
                                    }
                                }
                                cVar6 = ((lVar12 + 144))->operator_cast_to_bool();
                                this_11 = local_2148;
                                uVar7 = (uint32_t)((unsigned long)in_stack_ffffffffffffde58 >> 32);
                                if (!cVar6) {
                                    this_05 = logger::default_logger();
                                    local_20f0 = (shared_ptr<World>*)((unsigned long)local_20f0 & 18446744069414584320);
                                    in_stack_ffffffffffffde58 = (bool*)(((uint64_t)uVar7 << 32) | (uint32_t)iVar8);
                                    this_05->Log(
                                        false, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/assetbuilder/jobs/buildcombinedlocation/"
                                        "BuildCombinedLocationMain.cpp",
                                        287, "BuildCombinedLocations: Failed to find location type for section, ID: %d",
                                        in_stack_ffffffffffffde58);
                                }
                            }
                            if ((*(short*)(lVar12 + 16) != 0) || (*(short*)(lVar12 + 18) != 0)) {
                                in_stack_ffffffffffffde58 =
                                    (bool*)(((uint64_t)((int)((unsigned long)in_stack_ffffffffffffde58 >> 32)) << 32) |
                                            (uint32_t)((int)*(short*)(lVar12 + 18)));
                                local_2118->AddLocationHeightOffset(*(int*)(lVar12 + 8), *(int*)(lVar12 + 20),
                                                                    *(int*)(lVar12 + 24), *(int*)(lVar12 + 40),
                                                                    *(int*)(lVar12 + 44), (int)*(short*)(lVar12 + 18),
                                                                    (int)*(short*)(lVar12 + 16));
                            }
                            lVar12 = lVar12 + 192;
                        } while (lVar12 != lVar13);
                    }
                    if (((unsigned long)local_20f0 & 1) != 0) {
                        this_00 = (shared_ptr<graphics::Model>*)(local_20e8 + 120);
                        pWVar18 = (WaterType*)(*this_00).operator->();
                        this_06 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)
                                      pWVar18->GetEmissiveUVScale();
                        cVar6 = this_06->empty();
                        if (cVar6) {
                            LogAssert("!locationHashList.empty()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationMain.cpp",
                                      301, nullptr);
                        }
                        new (local_20d0)
                            eastl::fixed_hash_map<unsigned int, graphics::Model const*, 256ul, 257ul, true,
                                                  eastl::hash<unsigned int>, eastl::equal_to<unsigned int>, false>(
                                *local_2108, *local_2158);
                        puVar19 = (unsigned int*)this_06->HeapBeginPtr();
                        puVar20 = (unsigned int*)this_06->end();
                        for (; puVar19 != puVar20; puVar19 = puVar19 + 1) {
                            local_2108[0] = *puVar19;
                            puVar21 = (uint64_t*)(*puVar1)[*local_2108];
                            if ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)*puVar21 ==
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)0) {
                                LogAssert(
                                    "perModelData",
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationMain.cpp",
                                    308, nullptr);
                            }
                            uVar22 = (*puVar21)->end();
                            puVar21 = (uint64_t*)(*local_20d0)[*local_2108];
                            *puVar21 = uVar22;
                        }
                        local_2108->shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(*this_00);
                        pMVar23 = (Model*)(*local_2108).operator->();
                        pLVar3 = local_2140;
                        this_11 = local_2148;
                        cVar6 = pMVar23->IsLoaded();
                        if (!cVar6) {
                            pMVar23 = (Model*)(*local_2108).operator->();
                            pMVar23->ConstructAtlasFromWorker(local_20d0, nullptr);
                            pMVar23 = (Model*)(*local_2108).operator->();
                            pMVar23->ConstructFinishAndUpload();
                        }
                        uVar7 = pLVar3->size();
                        local_2158[0] = (GraphNode*)(((uint64_t)local_2158[0]._4_4_ << 32) | (uint32_t)uVar7);
                        local_20f8 = graphics::GraphNode::Create<int>(*local_2158);
                        rt7Core = local_20e0->field_144;
                        psVar9 = (shared_ptr<World>*)local_20e0->field_168->GetWorld();
                        in_stack_ffffffffffffde58 = local_20e8 + 2;
                        local_2158->MakeShared<graphics::RT7Core&, graphics::GraphNode*&, shared_ptr<World> const&,
                                               bool&, bool&, bool&, bool&, shared_ptr<graphics::Model>&,
                                               eastl::vector<BuildCombinedLocationResult_GroupSection>&>(
                            rt7Core, &local_20f8, psVar9, local_20e8 + 1, local_20e8, in_stack_ffffffffffffde58,
                            local_20e8 + 3, local_2108, pLVar3);
                        this_07 = (shared_ptr<CombinedLocation>*)(*local_2130)[(long)(int)local_2110];
                        *this_07 = *local_2158;
                        this_08 = (Js5HTTPQueueRequest*)(*local_2158).operator->();
                        configProvider = (ConfigProvider*)local_20e0->field_168->GetWrapU();
                        this_08->SetProxyPassword(configProvider);
                        pCVar24 = (CombinedLocation*)(*local_2158).operator->();
                        pCVar24->SetBackgroundSoundList(*((local_20e8 + 88)));
                        pGVar26 = local_20f8;
                        pGVar25 = (GraphEntity*)local_2158->end();
                        pGVar26->SetEntity(pGVar25);
                        pGVar26 = local_20e0->field_168->GetNode();
                        pGVar26->AddChild(local_20f8);
                        pEVar27 = (Entity*)(*local_2158).operator->();
                        pEVar27->SetTargetLOD(0);
                        pEVar27 = (Entity*)(*local_2158).operator->();
                        pEVar27->SetCurrentLOD(0);
                        pCVar24 = (CombinedLocation*)(*local_2158).operator->();
                        pCVar24->HideHiddenAudioCombinableSections();
                        local_2110 = (bool*)(((uint64_t)local_2110._4_4_ << 32) | (uint32_t)((int)local_2110 + 1));
                    }
                    pbVar11 = local_20e8 + 136;
                } while (pbVar11 != local_2138);
            }
            local_2128->clear();
            puVar2 = &local_20e0->field_112;
            this_01 = &local_2120->field_64;
            uVar10 = this_01->size();
            local_2130 = (vector<shared_ptr<CombinedLocation>>*)puVar2;
            puVar2->resize(uVar10);
            piVar16 = (int*)this_01->HeapBeginPtr();
            local_2128 = (vector<BuildCombinedLocationResult_CombinedLocation>*)this_01->end();
            if ((vector<BuildCombinedLocationResult_CombinedLocation>*)piVar16 != local_2128) {
                local_2118 = nullptr;
                do {
                    pWVar18 = (WaterType*)(*((piVar16 + 26))).operator->();
                    iVar8 = pWVar18->GetEmissiveMapMaterialID();
                    local_20f8 = (GraphNode*)(((uint64_t)local_20f8._4_4_ << 32) | (uint32_t)iVar8);
                    if (iVar8 == 0) {
                        LogAssert("locationHash",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationMain.cpp",
                                  355, nullptr);
                    }
                    puVar21 = (uint64_t*)(*puVar1)[local_20f8];
                    this_02 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)*puVar21;
                    if (this_02 == (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)0) {
                        LogAssert("perModelData",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationMain.cpp",
                                  357, nullptr);
                    }
                    local_20d0->shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(*((piVar16 + 26)));
                    pMVar23 = (Model*)(*local_20d0).operator->();
                    cVar6 = pMVar23->IsLoaded();
                    if (!cVar6) {
                        pMVar23 = (Model*)(*local_20d0).operator->();
                        model = (Model*)this_02->end();
                        pMVar23->ConstructAtlasFromWorker(0, model);
                        pMVar23 = (Model*)(*local_20d0).operator->();
                        pMVar23->ConstructFinishAndUpload();
                    }
                    local_2158[0] = graphics::GraphNode::Create<>();
                    pBVar5 = local_20e0;
                    local_20f0 = (shared_ptr<World>*)local_20e0->field_168->GetWorld();
                    iVar8 = piVar16[20];
                    lVar12 = (*this_11).operator->();
                    iVar4 = *(int*)(lVar12 + 8);
                    local_2160 = pBVar5->field_168->GetEffectAnimID();
                    local_2160 = (iVar8 + iVar4 * -64) - local_2160;
                    iVar8 = piVar16[21];
                    lVar12 = (*this_11).operator->();
                    local_20e8 = (bool*)(piVar16 + 2);
                    local_2140 = (LocData*)(piVar16 + 4);
                    local_2138 = (bool*)(piVar16 + 17);
                    local_2110 = (bool*)(piVar16 + 3);
                    iVar4 = *(int*)(lVar12 + 12);
                    local_215c = pBVar5->field_168->GetMinGridZ();
                    local_215c = (iVar8 + iVar4 * -64) - local_215c;
                    local_2108->MakeShared<graphics::GraphNode*&, shared_ptr<World> const&, int&, int&, LocData&, bool&,
                                           bool&, int&, int&, int, int, shared_ptr<graphics::Model>&>(
                        local_2158, local_20f0, piVar16, local_20e8, local_2140, local_2138, local_2110, piVar16 + 20,
                        piVar16 + 21, &local_2160, &local_215c, local_20d0);
                    pEVar27 = (Entity*)(*local_2108).operator->();
                    pEVar27->SetMaximumRemoveRoofLevel(piVar16[1]);
                    ((Text*)(*local_2108).operator->())->SetLinkObjType(piVar16[18]);
                    pLVar28 = (Location*)(*local_2108).operator->();
                    pLVar28->SetIsWDDBothOffsetMember((uint8_t)piVar16[19]);
                    pLVar28 = (Location*)(*local_2108).operator->();
                    pLVar28->SetBuiltGridSize(piVar16[22], piVar16[23]);
                    this_10 = (shared_ptr<Location>*)(*local_2130)[(unsigned long)local_2118];
                    *this_10 = *local_2108;
                    pEVar27 = (Entity*)(*local_2108).operator->();
                    pEVar27->SetTargetLOD(0);
                    pLVar28 = (Location*)(*local_2108).operator->();
                    pLVar28->SetLocationLOD((uint8_t)piVar16[24]);
                    pGVar26 = local_2158[0];
                    pGVar25 = (GraphEntity*)local_2108->end();
                    pGVar26->SetEntity(pGVar25);
                    piVar16 = piVar16 + 30;
                    local_2118 = (HeightMap*)((long)&local_2118->field_0 + 1);
                    this_11 = local_2148;
                } while ((vector<BuildCombinedLocationResult_CombinedLocation>*)piVar16 != local_2128);
            }
            this_01->clear();
            local_2120->clear();
        }
    }

} // namespace jag::game

namespace jag {
    // 0x10064a7c0
    shared_ptr_if_not_array<game::BuildCombinedLocationRequestData>::type
    bucket_make_shared<game::BuildCombinedLocationRequestData, eastl::vector<game::LocationContainerLocation> const&,
                       int&, int&>(const eastl::vector<game::LocationContainerLocation>& locationContainerLocations,
                                   int& arg2, int& arg3) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        BuildCombinedLocationRequestData* local_38[2];

        auto local_40 = BucketManager::Allocate(264, 0, 16);
        if (local_40 == nullptr) {
            shared_ptr_if_not_array<game::BuildCombinedLocationRequestData>::type result;
        } else {
            local_38[0] = placement_new<game::BuildCombinedLocationRequestData,
                                        eastl::vector<game::LocationContainerLocation> const&, int&, int&>(
                local_40 + 48, locationContainerLocations, arg2, arg3);
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<BucketRefCounter<game::BuildCombinedLocationRequestData>,
                              managed_ptr_counter_and_data<BucketRefCounter<game::BuildCombinedLocationRequestData>,
                                                           game::BuildCombinedLocationRequestData>*&,
                              game::BuildCombinedLocationRequestData*&>(local_40, &local_40, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x10064ba40
    shared_ptr_if_not_array<game::BuildCombinedLocationWorker>::type
    bucket_make_shared<game::BuildCombinedLocationWorker>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        BuildCombinedLocationWorker* local_28[2];

        auto local_30 = BucketManager::Allocate(88, 0, 16);
        if (local_30 == nullptr) {
            shared_ptr_if_not_array<game::BuildCombinedLocationWorker>::type result;
        } else {
            local_28[0] = placement_new<game::BuildCombinedLocationWorker>(local_30 + 48);
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<BucketRefCounter<game::BuildCombinedLocationWorker>,
                              managed_ptr_counter_and_data<BucketRefCounter<game::BuildCombinedLocationWorker>,
                                                           game::BuildCombinedLocationWorker>*&,
                              game::BuildCombinedLocationWorker*&>(local_30, &local_30, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
