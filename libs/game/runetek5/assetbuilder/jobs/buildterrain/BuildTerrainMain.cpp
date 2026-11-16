// libs/game/runetek5/assetbuilder/jobs/buildterrain/BuildTerrainMain.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "BuildTerrainMain.h"

namespace jag::game {
    // 0x10042eb10: BuildTerrainMain::GetRequestData() has the same machine code as LocType::GetModelList() const

    // 0x100625fe0
    BuildTerrainMain::BuildTerrainMain(graphics::RT7Core* rt7Core, int arg2, TerrainInputData& terrainInputData)
        : AssetJob(30, arg2, -1), field_80(rt7Core), field_120(0) {
        TerrainInputData TVar1;
        uint32_t uVar2;
        shared_ptr<ClientCompositeData>* clientCompositeData;
        shared_ptr<eastl::vector<graphics::WaterPatchConfig> _>* waterPatchConfigs;
        shared_ptr<WaterType>* waterType;
        uint32_t* puVar4;
        long lVar5;
        ReturnValue local_68;
        uint8_t* local_40;
        uint8_t* local_38;

        uint8_t* local_58 = &field_88;
        new (&field_128) std::array<
            eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>,
            4ul>();
        new (&field_256) std::array<
            eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>,
            4ul>();
        field_384 = '\0';
        field_385 = '\0';
        uint8_t* local_50 = &field_256;
        new (&field_392) std::array<
            eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>,
            4ul>();
        field_520 = 0;
        uint8_t* local_48 = &field_392;
        new (&field_521) std::atomic<bool>((bool)30);
        field_522 = 0;
        new (&field_528) std::array<shared_ptr<graphics::TextureAtlasReference>, 4ul>();
        uint8_t* this_00 = m_requestData;
        new (this_00) shared_ptr();
        bucket_make_shared<BuildTerrainRequestData>(&local_68);
        *this_00 = local_68;
        if (this_00->operator_cast_to_bool() != '\0') {
            uVar2 = *(uint32_t*)terrainInputData;
            local_40 = &field_528;
            local_38 = &field_128;
            puVar4 = (uint32_t*)(*this_00).operator->();
            *puVar4 = uVar2;
            uVar2 = *(uint32_t*)(terrainInputData + 4);
            lVar5 = (*this_00).operator->();
            *(uint32_t*)(lVar5 + 4) = uVar2;
            clientCompositeData = *(shared_ptr<ClientCompositeData>**)(terrainInputData + 16);
            lVar5 = (*this_00).operator->();
            (*((lVar5 + 16))) = *clientCompositeData;
            TVar1 = terrainInputData[8];
            lVar5 = (*this_00).operator->();
            *(TerrainInputData*)(lVar5 + 8) = TVar1;
            waterPatchConfigs = *(shared_ptr<eastl::vector<graphics::WaterPatchConfig> _>**)(terrainInputData + 24);
            lVar5 = (*this_00).operator->();
            (*((lVar5 + 32))) = *waterPatchConfigs;
            waterType = *(shared_ptr<WaterType>**)(terrainInputData + 32);
            lVar5 = (*this_00).operator->();
            (*((lVar5 + 48))) = *waterType;
            TVar1 = terrainInputData[40];
            lVar5 = (*this_00).operator->();
            *(TerrainInputData*)(lVar5 + 160) = TVar1;
        }
    }

    // 0x1006263c0
    BuildTerrainMain::~BuildTerrainMain() {
        type* arg2;
        duration<long long, std::ratio<1l, 1000000000l>> local_38;

        if (field_520 != '\0') {
            do {
                if ((&field_521)->operator_cast_to_bool() != '\0')
                    break;
                local_38.duration<int>(500, arg2);
                std::this_thread::sleep_for(&local_38);
            } while (field_520 != '\0');
        }
        m_requestData->~shared_ptr();
        field_528.~array();
        field_392.~array();
        field_256.~array();
        field_128.~array();
        field_88.~vector();
    }

    // 0x100626540
    uint8_t* BuildTerrainMain::RunFirst(Js5ResourceProvider* js5ResourceProvider, ConfigProvider* configProvider) {
        uint8_t* puVar2;
        shared_ptr<oldscape::ClientNpc> local_38;

        if (m_requestData->operator_cast_to_bool() == '\0') {
            puVar2 = DataStatus::MISSING;
        } else {
            puVar2 = (uint8_t*)FetchTerrainData(js5ResourceProvider);
            if (puVar2 == DataStatus::READY) {
                puVar2 = (uint8_t*)FindUsedOverlaysAndUnderlays();
                if (puVar2 == DataStatus::READY) {
                    puVar2 = (uint8_t*)LoadOverlayAndUnderlayConfigs(configProvider);
                    if (puVar2 == DataStatus::READY) {
                        puVar2 = (uint8_t*)LoadMaterials();
                        if (puVar2 == DataStatus::READY) {
                            puVar2 = (uint8_t*)BuildTextureMeta();
                            if (puVar2 == DataStatus::READY) {
                                static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_38);
                                field_32 = local_38;
                                puVar2 = DataStatus::READY;
                            }
                        }
                    }
                }
            }
        }
        return puVar2;
    }

    // 0x100626610
    uint8_t* BuildTerrainMain::FetchTerrainData(Js5ResourceProvider* js5ResourceProvider) {
        int iVar1;
        bool bVar2;
        int* piVar7;
        uint8_t* puVar8;
        shared_ptr<PacketT<Array<unsigned char>>>* this_00;
        unsigned long uVar9;
        bool bVar11;
        uint8_t* local_50;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;

        uint8_t* puVar10 = m_requestData;
        long lVar4 = (*puVar10).operator->();
        if (!(((lVar4 + 64))->empty())) {
            return DataStatus::READY;
        }
        lVar4 = (*puVar10).operator->();
        long lVar5 = (*puVar10).operator->();
        shared_ptr* this_01 = (shared_ptr*)(lVar5 + 16);
        if (!(shared_ptr::operator_cast_to_bool(this_01))) {
            local_48 = shared_ptr();
            piVar7 = (int*)(*puVar10).operator->();
            iVar1 = *piVar7;
            lVar5 = (*puVar10).operator->();
            puVar8 = (uint8_t*)Terrain::GetTerrainData(local_48, js5ResourceProvider, iVar1, *(int*)(lVar5 + 4));
            if (puVar8 == DataStatus::READY) {
                ((lVar4 + 64))->push_back(local_48);
                return DataStatus::READY;
            }
            return puVar8;
        }
        lVar5 = (*this_01).operator->();
        if (((lVar5 + 9800))->empty()) {
            field_32.reset();
            return DataStatus::READY;
        }
        puVar10 = &field_88;
        lVar5 = (*this_01).operator->();
        unsigned long uVar6 = ((lVar5 + 9800))->size();
        puVar10->resize(uVar6);
        lVar5 = (*this_01).operator->();
        lVar5 = ((lVar5 + 9800))->size();
        unsigned int local_34 = (unsigned int)(((uint64_t)((int64_t)((unsigned long)lVar5 >> 8)) << 8) | (uint8_t)1);
        if (lVar5 != 0) {
            uVar6 = 0;
            bVar11 = true;
            do {
                local_48 = shared_ptr();
                lVar5 = (*this_01).operator->();
                piVar7 = (int*)(*((lVar5 + 9800)))[uVar6];
                iVar1 = *piVar7;
                lVar5 = (*this_01).operator->();
                lVar5 = (*((lVar5 + 9800)))[uVar6];
                puVar8 = (uint8_t*)Terrain::GetTerrainData(local_48, js5ResourceProvider, iVar1, *(int*)(lVar5 + 4));
                if (puVar8 == DataStatus::NOTLOADED) {
                    local_34 = 0;
                LAB_1006267f7:
                    bVar2 = true;
                } else {
                    if (puVar8 == DataStatus::READY) {
                        this_00 = (shared_ptr<PacketT<Array<unsigned char>>>*)(*puVar10)[uVar6];
                        *this_00 = local_48;
                        goto LAB_1006267f7;
                    }
                    if (puVar8 != DataStatus::MISSING)
                        goto LAB_1006267f7;
                    bVar2 = false;
                    local_50 = puVar8;
                }
                if (!bVar2)
                    break;
                uVar6 = uVar6 + 1;
                lVar5 = (*this_01).operator->();
                uVar9 = ((lVar5 + 9800))->size();
                bVar11 = uVar6 < uVar9;
            } while (bVar11);
            if (bVar11) {
                bVar11 = false;
                goto LAB_100626886;
            }
        }
        if ((local_34 & 1) == 0) {
            bVar11 = false;
            return local_50 = DataStatus::NOTLOADED;
        } else {
            ((lVar4 + 64))->swap(*puVar10);
            puVar10->clear();
            bVar11 = true;
        }
    LAB_100626886:
        if (!bVar11) {
        }
        return DataStatus::READY;
    }

    // 0x1006268c0
    uint8_t* BuildTerrainMain::FindUsedOverlaysAndUnderlays() {
        uint8_t* this_00;
        uint8_t bVar2;
        unsigned short uVar3;
        long lVar4;
        shared_ptr* this_01;
        PacketT<Array<unsigned char>>* this_02;
        unsigned char* arg1;
        unsigned long uVar5;
        vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>* pvVar7;
        int iVar8;
        uint8_t local_80[40];
        shared_ptr* local_58;
        array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>,
              4ul>* local_50;
        BuildTerrainMain* local_48;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        if (field_120 == '\0') {
            local_48 = this;
            lVar4 = (*m_requestData).operator->();
            this_01 = (shared_ptr*)((lVar4 + 64))->HeapBeginPtr();
            local_80._32_8_ = ((lVar4 + 64))->end();
            if (this_01 != (shared_ptr*)local_80._32_8_) {
                local_50 = (array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                    eastl::vector<int, BucketAllocatorEASTL>>,
                                  4ul>*)&local_48->field_256;
                this_00 = &local_48->field_128;
                do {
                    if (shared_ptr::operator_cast_to_bool(this_01) != '\0') {
                        this_02 = (PacketT<Array<unsigned char>>*)**this_01;
                        arg1 = (unsigned char*)this_02->GetDataPtr();
                        local_58 = this_01;
                        uVar5 = ((TextureAtlasReference*)**this_01)->GetTextureAtlas();
                        new (local_80) PacketT(arg1, uVar5);
                        while (true) {
                            uVar5 = local_80->size();
                            if (local_80->GetTextureAtlas() <= uVar5)
                                break;
                            bVar2 = local_80->g1();
                            if (3 < bVar2) {
                                LogAssert("level < constants::MapConstants::LEVELS",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                          "runetek5/assetbuilder/jobs/buildterrain/BuildTerrainMain.cpp",
                                          190, nullptr);
                            }
                            uVar5 = (unsigned long)bVar2;
                            local_38 = 0;
                            do {
                                iVar8 = 66;
                                do {
                                    bVar2 = local_80->g1();
                                    if (bVar2 == 0) {
                                        local_80->Skip(1);
                                    } else {
                                        local_80->Skip(1);
                                        if ((bVar2 & 16) != 0) {
                                            local_80->Skip(1);
                                        }
                                        uVar3 = local_80->gSmart1or2();
                                        local_40 = uVar3 - 1;
                                        if (uVar3 != 0) {
                                            pvVar7 = (vector_set<
                                                      int, eastl::less<int>, BucketAllocatorEASTL,
                                                      eastl::vector<int, BucketAllocatorEASTL>>*)(*local_50)[uVar5];
                                            pvVar7->insert<int>(local_40);
                                            local_80->Skip(2);
                                        }
                                        uVar3 = local_80->gSmart1or2();
                                        local_3c = uVar3 - 1;
                                        if ((bVar2 & 16) != 0) {
                                            uVar3 = local_80->gSmart1or2();
                                            local_34 = uVar3 - 1;
                                            if (uVar3 != 0) {
                                                pvVar7 = (vector_set<
                                                          int, eastl::less<int>, BucketAllocatorEASTL,
                                                          eastl::vector<int, BucketAllocatorEASTL>>*)(*this_00)[uVar5];
                                                pvVar7->insert<int>(local_34);
                                            }
                                        }
                                        if (local_3c != -1) {
                                            pvVar7 = (vector_set<
                                                      int, eastl::less<int>, BucketAllocatorEASTL,
                                                      eastl::vector<int, BucketAllocatorEASTL>>*)(*this_00)[uVar5];
                                            pvVar7->insert<int>(local_3c);
                                            local_80->Skip(1);
                                            if ((bVar2 & 16) != 0) {
                                                uVar3 = local_80->gSmart1or2();
                                                local_34 = uVar3 - 1;
                                                pvVar7 = (vector_set<
                                                          int, eastl::less<int>, BucketAllocatorEASTL,
                                                          eastl::vector<int, BucketAllocatorEASTL>>*)(*local_50)[uVar5];
                                                pvVar7->insert<int>(local_34);
                                            }
                                        }
                                    }
                                    iVar8 = iVar8 - 1;
                                } while (iVar8 != 0);
                                local_38 = local_38 + 1;
                            } while (local_38 != 66);
                        }
                        this_01 = local_58;
                    }
                    this_01 = this_01 + 1;
                } while (this_01 != (shared_ptr*)local_80._32_8_);
            }
            local_48->field_120 = 1;
        }
        return DataStatus::READY;
    }

    // 0x100626b80
    uint8_t* BuildTerrainMain::LoadOverlayAndUnderlayConfigs(ConfigProvider* configProvider) {
        uint8_t* this_00;
        bool cVar1;
        int iVar2;
        uint8_t** ppuVar3;
        int* arg1;
        shared_ptr<FloorOverlayType>* this_01;
        long lVar4;
        vector<unsigned int>* pvVar5;
        Layout* pLVar6;
        array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>,
              4ul>* arg1_00;
        shared_ptr* psVar7;
        MSIType* pMVar8;
        vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>* pvVar9;
        long lVar10;
        shared_ptr<FloorUnderlayType>* this_02;
        unsigned long uVar11;
        unsigned long uVar12;
        vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>> local_a8;
        BuildTerrainMain* local_88;
        vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>* local_80;
        array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>,
              4ul>* local_78;
        shared_ptr<BuildTerrainRequestData>* local_68;
        shared_ptr<BuildTerrainRequestData>* local_60;
        vector<shared_ptr<FloorOverlayType>>* local_58;
        int* local_50;
        vector<shared_ptr<oldscape::rseven::Terrain>>* local_48;
        unsigned long local_40;
        int local_34;

        if (field_384 == '\0') {
            cVar1 = configProvider->Ready();
            if (cVar1) {
                local_60 = (shared_ptr<BuildTerrainRequestData>*)m_requestData;
                lVar4 = (*local_60).operator->();
                local_58 = (vector<shared_ptr<FloorOverlayType>>*)(lVar4 + 96);
                local_58->clear();
                this_00 = &field_128;
                uVar11 = 0;
                uVar12 = 0;
                do {
                    pvVar5 = (vector<unsigned int>*)(*this_00)[uVar11];
                    lVar4 = pvVar5->size();
                    uVar12 = uVar12 + lVar4;
                    uVar11 = uVar11 + 1;
                } while (uVar11 != 4);
                local_58->resize(uVar12);
                local_a8 = eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                             eastl::vector<int, BucketAllocatorEASTL>>();
                local_a8.reserve(uVar12);
                local_78 = (array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                    eastl::vector<int, BucketAllocatorEASTL>>,
                                  4ul>*)&field_392;
                local_68 =
                    (shared_ptr<BuildTerrainRequestData>*)(((uint64_t)local_68._4_4_ << 32) |
                                                           (uint32_t)((
                                                               int)(((uint64_t)((int64_t)((unsigned long)local_78 >> 8))
                                                                     << 8) |
                                                                    (uint8_t)1)));
                uVar11 = 0;
                local_40 = 0;
                local_88 = this;
                do {
                    local_48 = (vector<shared_ptr<oldscape::rseven::Terrain>>*)uVar11;
                    pLVar6 = (Layout*)(*this_00)[uVar11];
                    arg1 = (int*)pLVar6->HeapBeginPtr();
                    local_50 = (int*)pLVar6->end();
                    if (arg1 != local_50) {
                        do {
                            psVar7 = (shared_ptr*)configProvider->GetConfig<FloorOverlayType>(*arg1, nullptr);
                            cVar1 = shared_ptr::operator_cast_to_bool(psVar7);
                            if (!cVar1) {
                                local_40 = local_40 + 1;
                                local_68 = (shared_ptr<BuildTerrainRequestData>*)((unsigned long)local_68 &
                                                                                  18446744069414584320);
                            } else {
                                pMVar8 = (MSIType*)(*psVar7).operator->();
                                iVar2 = pMVar8->GetTint();
                                if (iVar2 != -1) {
                                    lVar4 = (*local_60).operator->();
                                    cVar1 = ((lVar4 + 16))->operator_cast_to_bool();
                                    if (!cVar1) {
                                        pMVar8 = (MSIType*)(*psVar7).operator->();
                                        pvVar9 = (vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                             eastl::vector<int, BucketAllocatorEASTL>>*)(*local_78)
                                            [(unsigned long)local_48];
                                        local_34 = pMVar8->GetTint();
                                        pvVar9->insert<int>(local_34);
                                    } else {
                                        uVar11 = 0;
                                        do {
                                            pMVar8 = (MSIType*)(*psVar7).operator->();
                                            local_80 = (vector_set<
                                                        int, eastl::less<int>, BucketAllocatorEASTL,
                                                        eastl::vector<int, BucketAllocatorEASTL>>*)(*local_78)[uVar11];
                                            local_34 = pMVar8->GetTint();
                                            local_80->insert<int>(local_34);
                                            uVar11 = uVar11 + 1;
                                        } while (uVar11 != 4);
                                    }
                                }
                                lVar4 = eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                          eastl::vector<int, BucketAllocatorEASTL>>::find(local_a8);
                                lVar10 = local_a8.end();
                                if (lVar4 == lVar10) {
                                    local_a8.insert(*arg1);
                                    this_01 = (shared_ptr<FloorOverlayType>*)(*local_58)[local_40];
                                    *this_01 = *psVar7;
                                    local_40 = local_40 + 1;
                                }
                            }
                            arg1 = arg1 + 1;
                        } while (arg1 != local_50);
                    }
                    this = local_88;
                    uVar11 = (long)local_48 + 1;
                } while (uVar11 != 4);
                if (((unsigned long)local_68 & 1) != 0) {
                    local_58->resize(local_40);
                    field_384 = '\x01';
                }
                cVar1 = field_385;
                goto joined_r0x000100626e56;
            }
        } else {
            cVar1 = field_385;
        joined_r0x000100626e56:
            if (!cVar1) {
                cVar1 = configProvider->Ready();
                if (!cVar1)
                    goto LAB_1006270cf;
                local_68 = (shared_ptr<BuildTerrainRequestData>*)m_requestData;
                lVar4 = (*local_68).operator->();
                local_48 = (vector<shared_ptr<oldscape::rseven::Terrain>>*)(lVar4 + 128);
                local_48->clear();
                uVar11 = 0;
                uVar12 = 0;
                do {
                    pvVar5 = &field_256[uVar11];
                    lVar4 = pvVar5->size();
                    uVar12 = uVar12 + lVar4;
                    uVar11 = uVar11 + 1;
                } while (uVar11 != 4);
                local_48->resize(uVar12);
                local_a8 = eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                             eastl::vector<int, BucketAllocatorEASTL>>();
                local_a8.reserve(uVar12);
                local_80 = (vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                       eastl::vector<int, BucketAllocatorEASTL>>*)&field_392;
                local_40 = (((uint64_t)local_40._4_4_ << 32) |
                            (uint32_t)((int)(((uint64_t)((int64_t)((unsigned long)local_80 >> 8)) << 8) | (uint8_t)1)));
                uVar11 = 0;
                local_50 = nullptr;
                local_88 = this;
                local_58 = (vector<shared_ptr<FloorOverlayType>>*)&field_256;
                do {
                    local_60 = (shared_ptr<BuildTerrainRequestData>*)uVar11;
                    pLVar6 = (Layout*)(*local_58)[uVar11];
                    arg1_00 = (array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                       eastl::vector<int, BucketAllocatorEASTL>>,
                                     4ul>*)pLVar6->HeapBeginPtr();
                    local_78 = (array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                        eastl::vector<int, BucketAllocatorEASTL>>,
                                      4ul>*)pLVar6->end();
                    if (arg1_00 != local_78) {
                        do {
                            psVar7 = (shared_ptr*)configProvider->GetConfig<FloorUnderlayType>(*(int*)arg1_00, nullptr);
                            cVar1 = shared_ptr::operator_cast_to_bool(psVar7);
                            if (!cVar1) {
                                local_50 = (int*)((long)local_50 + 1);
                                local_40 = local_40 & 18446744069414584320;
                            } else {
                                pMVar8 = (MSIType*)(*psVar7).operator->();
                                iVar2 = pMVar8->GetTint();
                                if (iVar2 != -1) {
                                    lVar4 = (*local_68).operator->();
                                    cVar1 = ((lVar4 + 16))->operator_cast_to_bool();
                                    if (!cVar1) {
                                        pMVar8 = (MSIType*)(*psVar7).operator->();
                                        pvVar9 = (vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                             eastl::vector<int, BucketAllocatorEASTL>>*)(*local_80)
                                            [(unsigned long)local_60];
                                        local_34 = pMVar8->GetTint();
                                        pvVar9->insert<int>(local_34);
                                    } else {
                                        uVar11 = 0;
                                        do {
                                            pMVar8 = (MSIType*)(*psVar7).operator->();
                                            pvVar9 = (vector_set<
                                                      int, eastl::less<int>, BucketAllocatorEASTL,
                                                      eastl::vector<int, BucketAllocatorEASTL>>*)(*local_80)[uVar11];
                                            local_34 = pMVar8->GetTint();
                                            pvVar9->insert<int>(local_34);
                                            uVar11 = uVar11 + 1;
                                        } while (uVar11 != 4);
                                    }
                                }
                                lVar4 = eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                          eastl::vector<int, BucketAllocatorEASTL>>::find(local_a8);
                                lVar10 = local_a8.end();
                                if (lVar4 == lVar10) {
                                    local_a8.insert(*arg1_00);
                                    this_02 = (shared_ptr<FloorUnderlayType>*)(*local_48)[(unsigned long)local_50];
                                    *this_02 = *psVar7;
                                    local_50 = (int*)((long)local_50 + 1);
                                }
                            }
                            arg1_00 = arg1_00 + 4;
                        } while (arg1_00 != local_78);
                    }
                    this = local_88;
                    uVar11 = (long)local_60 + 1;
                } while (uVar11 != 4);
                if ((local_40 & 1) != 0) {
                    local_48->resize((unsigned long)local_50);
                    field_385 = '\x01';
                }
                cVar1 = field_384;
            } else {
                cVar1 = field_384;
            }
            if ((cVar1) && (field_385 != '\0')) {
                ppuVar3 = &DataStatus::READY;
                goto LAB_1006270d6;
            }
        }
    LAB_1006270cf:
        ppuVar3 = &DataStatus::NOTLOADED;
    LAB_1006270d6:
        return *ppuVar3;
    }

    // 0x100627110
    uint8_t* BuildTerrainMain::LoadMaterials() {
        MaterialManager* this_00;
        RenderDevice* this_01;
        uint8_t** ppuVar2;
        ReturnValue local_d8;
        __0 local_d0;
        function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[160];
        long local_28;

        bool cVar1 = (&field_521)->operator_cast_to_bool();
        if (!cVar1) {
            this_00 = field_80->GetMaterialManager();
            cVar1 = this_00->MaterialsReady();
            ppuVar2 = &DataStatus::NOTLOADED;
            if ((cVar1) && (field_520 == '\0')) {
                field_520 = 1;
                this_01 = (RenderDevice*)this_00->Instance();
                local_d0.field_0 = (long)this;
                fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    BuildTerrainMain::LoadMaterials()::__0, void>(local_c8, &local_d0);
                local_d8 = this_01->RunOnThreadPoolRenderContext("LoadMaterials", *local_c8);
            }
        } else {
            ppuVar2 = &DataStatus::READY;
        }
        return *ppuVar2;
    }

    // 0x100627210
    uint8_t* BuildTerrainMain::BuildTextureMeta() {
        uint8_t* this_00;
        Material* this_01;
        unsigned int arg2;
        long lVar2;
        shared_ptr<eastl::map<int, graphics::TerrainTextureMeta>>* this_02;
        Layout* this_03;
        int* arg1;
        rbtree<int, eastl::pair<int const, graphics::TerrainTextureMeta>, eastl::less<int>, eastl::allocator,
               eastl::use_first<eastl::pair<int const, graphics::TerrainTextureMeta>>, true, true>* this_04;
        long lVar3;
        shared_ptr* this_05;
        TextureAtlasReference* pTVar4;
        TextureAtlas* this_06;
        unsigned long arg1_00;
        uint8_t auVar5[12];
        ReturnValue local_88;
        uint8_t local_78[12];
        int* local_68;
        shared_ptr<eastl::map<int, graphics::TerrainTextureMeta>>* local_60;
        array<shared_ptr<graphics::TextureAtlasReference>, 4ul>* local_58;
        array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>,
              4ul>* local_50;
        unsigned long local_40;
        unsigned short local_38;
        uint8_t local_36;
        uint8_t local_35;
        uint32_t local_34;

        if (field_522 == '\0') {
            this_00 = m_requestData;
            local_50 = (array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                eastl::vector<int, BucketAllocatorEASTL>>,
                              4ul>*)&field_392;
            local_58 = (array<shared_ptr<graphics::TextureAtlasReference>, 4ul>*)&field_528;
            arg1_00 = 0;
            do {
                lVar2 = (*this_00).operator->();
                this_02 = (shared_ptr<eastl::map<int, graphics::TerrainTextureMeta>>*)(*((lVar2 + 208)))[arg1_00];
                make_shared<eastl::map<int, graphics::TerrainTextureMeta>>(&local_88);
                local_60 = this_02;
                *this_02 = local_88;
                local_40 = arg1_00;
                this_03 = (Layout*)(*local_50)[arg1_00];
                arg1 = (int*)this_03->HeapBeginPtr();
                local_68 = (int*)this_03->end();
                if (arg1 != local_68) {
                    do {
                        lVar2 = (*this_00).operator->();
                        lVar2 = eastl::vector_map<int, graphics::Material const*>::find(*((lVar2 + 168)));
                        lVar3 = (*this_00).operator->();
                        lVar3 = ((lVar3 + 168))->end();
                        if ((lVar2 != lVar3) && (this_01 = *(Material**)(lVar2 + 8), this_01 != nullptr)) {
                            if (this_01->ShowSkybox()) {
                                if (this_01->IsRT7()) {
                                    LogAssert("!material->IsRT7()",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "game/runetek5/assetbuilder/jobs/buildterrain/BuildTerrainMain.cpp",
                                              443, "Using RT7 materials in terrain patches is currently unsupported");
                                }
                                new (&local_38) ui::ServerActiveProperties();
                                this_05 = (shared_ptr*)(*local_58)[local_40];
                                if (!(shared_ptr::operator_cast_to_bool(this_05))) {
                                LAB_1006272dc:
                                    local_38 = 0;
                                } else {
                                    pTVar4 = (TextureAtlasReference*)(*this_05).operator->();
                                    lVar2 = pTVar4->GetTextureAtlas();
                                    if (lVar2 == 0)
                                        goto LAB_1006272dc;
                                    pTVar4 = (TextureAtlasReference*)(*this_05).operator->();
                                    this_06 = (TextureAtlas*)pTVar4->GetTextureAtlas();
                                    arg2 = this_01->GetZ();
                                    this_06->GetMaterialSettingsSlotXY(local_38, arg2);
                                }
                                local_36 = this_01->HasEmissiveMap();
                                local_35 = this_01->HasSpecularMap();
                                local_34 = this_01->GetSeqDelay();
                                this_04 =
                                    (rbtree<int, eastl::pair<int const, graphics::TerrainTextureMeta>, eastl::less<int>,
                                            eastl::allocator,
                                            eastl::use_first<eastl::pair<int const, graphics::TerrainTextureMeta>>,
                                            true, true>*)(*local_60)
                                        .operator->();
                                auVar5 = eastl::make_pair<int const&, graphics::TerrainTextureMeta&>(*arg1, local_38);
                                local_78 = auVar5;
                                local_88 =
                                    this_04->insert<eastl::pair<int, graphics::TerrainTextureMeta>, void>(*local_78);
                            }
                        }
                        arg1 = arg1 + 1;
                    } while (arg1 != local_68);
                }
                arg1_00 = local_40 + 1;
            } while (arg1_00 != 4);
            field_522 = 1;
        }
        return DataStatus::READY;
    }

    // 0x100627470
    BuildTerrainMain* BuildTerrainMain::CreateWorker() {
        ReturnValue local_28;

        bucket_make_shared<BuildTerrainWorker>(&local_28);
        shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_28);
        return this;
    }

    // 0x100627550
    auto BuildTerrainMain::DecodeResult(const shared_ptr<void>& arg1) {
        BuildTerrainResultData* buildTerrainResultData;

        if (arg1.operator_cast_to_bool() != '\0') {
            buildTerrainResultData = (BuildTerrainResultData*)arg1.end();
            PostDecodeResultSetup(*buildTerrainResultData);
        }
        return auto(arg1);
    }

    // 0x1006275a0
    void BuildTerrainMain::PostDecodeResultSetup(BuildTerrainResultData& buildTerrainResultData) {
        shared_ptr<graphics::TextureAtlasReference>* textureAtlasReference;
        long lVar1;
        shared_ptr* this_00;

        unsigned long arg1 = 0;
        do {
            this_00 = &buildTerrainResultData[arg1];
            if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                textureAtlasReference = (shared_ptr<graphics::TextureAtlasReference>*)field_528[arg1];
                lVar1 = (*this_00).operator->();
                (*((lVar1 + 12640))) = *textureAtlasReference;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 4);
    }

    // 0x100637090
    void BuildTerrainMain::LoadMaterials()::$_0::operator()(render::RenderContext& renderContext) const {
        bool cVar1;
        Layout* this_02;
        int* arg1;
        int* piVar2;
        TextureManager* this_03;
        TextureAtlasUsage* textureAtlasUsage;
        shared_ptr<graphics::TextureAtlasReference>* this_04;
        long lVar4;
        TextureManager* extraout_RDX;
        uint8_t arg1_00;
        TextureAtlasManager* pTVar6;
        int* piVar7;
        pair<int, graphics::Material const*>* arg1_01;
        Material* local_70;
        unsigned long local_68;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* local_60;
        uint32_t local_48[2];
        TextureManager* local_40;

        long lVar3 = field_0;
        shared_ptr<BuildTerrainRequestData>* this_00 = (shared_ptr<BuildTerrainRequestData>*)(lVar3 + 592);
        ((BuildTerrainRequestData*)(*this_00).operator->())->ClearMaterials(true);
        array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>,
              4ul>* local_58 = (array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                        eastl::vector<int, BucketAllocatorEASTL>>,
                                      4ul>*)(lVar3 + 392);
        array<shared_ptr<graphics::TextureAtlasReference>, 4ul>* local_50 =
            (array<shared_ptr<graphics::TextureAtlasReference>, 4ul>*)(lVar3 + 528);
        unsigned long uVar5 = 0;
        long local_38 = lVar3;
        do {
            local_68 = uVar5;
            this_02 = (Layout*)(*local_58)[uVar5];
            arg1_00 = (uint8_t)uVar5;
            arg1 = (int*)this_02->HeapBeginPtr();
            local_60 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)this_02;
            piVar2 = (int*)this_02->end();
            for (; arg1 != piVar2; arg1 = arg1 + 1) {
                lVar3 = (*this_00).operator->();
                piVar7 = arg1;
                lVar3 = eastl::vector_map<int, graphics::Material const*>::find(*((lVar3 + 168)));
                arg1_00 = (uint8_t)piVar7;
                lVar4 = (*this_00).operator->();
                lVar4 = ((lVar4 + 168))->end();
                if (lVar3 == lVar4) {
                    lVar3 = (*this_00).operator->();
                    local_70 = ((*(RT7Core**)(local_38 + 80))->GetMaterialManager())->GetMaterial(*arg1);
                    local_48[0] = eastl::make_pair<unsigned int const&, ScriptVarType*>(*arg1, local_70);
                    arg1_01 = (pair<int, graphics::Material const*>*)local_48;
                    local_40 = extraout_RDX;
                    ((lVar3 + 168))->insert<eastl::pair<int, graphics::Material const*>, void>(*arg1_01);
                    arg1_00 = (uint8_t)arg1_01;
                }
            }
            cVar1 = local_60->empty();
            uVar5 = local_68;
            if (!cVar1) {
                this_03 = (*(RT7Core**)(local_38 + 80))->GetTextureManager();
                textureAtlasUsage = (TextureAtlasUsage*)this_03->GetTextureAtlasManager();
                local_48->GetSharedAtlasRefFromMaterialIDs<eastl::vector_set<
                    int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>>(
                    textureAtlasUsage, (vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                   eastl::vector<int, BucketAllocatorEASTL> _>*)
                                           graphicutils::TextureAtlasUsage::USAGE_COMPRESSED);
                this_04 = (shared_ptr<graphics::TextureAtlasReference>*)(*local_50)[uVar5];
                pTVar6 = (TextureAtlasManager*)local_48;
                *this_04 = *local_48;
                arg1_00 = (uint8_t)pTVar6;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 != 4);
        (*((local_38 + 521))) = ((bool)arg1_00);
    }

} // namespace jag::game
