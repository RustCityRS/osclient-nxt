// libs/game/runetek5/assetbuilder/jobs/buildterrain/BuildTerrainMain.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "BuildTerrainMain.h"

namespace jag::game {
    // 0x10042eb10: the linker folded this into LocType::GetModelList() const, which has identical code
    BuildTerrainMain::GetRequestData();

    // 0x100625fe0, 576 bytes, base-object constructor, placed by class name
    // BuildTerrainMain::BuildTerrainMain(graphics::RT7Core*, int, TerrainInputData&)
    void BuildTerrainMain::BuildTerrainMain(RT7Core* param_1, int param_2, TerrainInputData* param_3) {
        undefined1* this_00;
        TerrainInputData TVar1;
        undefined4 uVar2;
        shared_ptr* psVar3;
        undefined4* puVar5;
        long lVar6;
        shared_ptr local_68;
        undefined1* local_58;
        undefined1* local_50;
        undefined1* local_48;
        undefined1* local_40;
        undefined1* local_38;

        AssetJob::AssetJob();
        field_0 = &PTR__BuildTerrainMain_100f0ca60;
        field_80 = param_1;
        new (&field_88) eastl::vector<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>, eastl::allocator>();
        field_120 = 0;
        local_58 = &field_88;
        std::array<
            eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>,
            4ul>::array();
        std::array<
            eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>,
            4ul>::array();
        field_384 = '\0';
        field_385 = '\0';
        local_50 = &field_256;
        std::array<
            eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>,
            4ul>::array();
        field_520 = 0;
        local_48 = &field_392;
        std::atomic<bool>::atomic((bool)((char)this + '\t'));
        field_522 = 0;
        std::array<shared_ptr<graphics::TextureAtlasReference>, 4ul>::array();
        this_00 = m_requestData;
        new (this_00) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(30);
        bucket_make_shared<BuildTerrainRequestData>((jag*)&local_68);
        shared_ptr<BuildTerrainRequestData>::operator=((shared_ptr<BuildTerrainRequestData>*)this_00, &local_68);
        local_68.~shared_ptr();
        if (this_00->operator_cast_to_bool()) {
            uVar2 = *(undefined4*)param_3;
            local_40 = &field_528;
            local_38 = &field_128;
            puVar5 = (undefined4*)shared_ptr<BuildTerrainRequestData>::operator->(
                (shared_ptr<BuildTerrainRequestData>*)this_00);
            *puVar5 = uVar2;
            uVar2 = *(undefined4*)(param_3 + 4);
            lVar6 = shared_ptr<BuildTerrainRequestData>::operator->((shared_ptr<BuildTerrainRequestData>*)this_00);
            *(undefined4*)(lVar6 + 4) = uVar2;
            psVar3 = *(shared_ptr**)(param_3 + 16);
            lVar6 = shared_ptr<BuildTerrainRequestData>::operator->((shared_ptr<BuildTerrainRequestData>*)this_00);
            shared_ptr<ClientCompositeData>::operator=((shared_ptr<ClientCompositeData>*)(lVar6 + 16), psVar3);
            TVar1 = param_3[8];
            lVar6 = shared_ptr<BuildTerrainRequestData>::operator->((shared_ptr<BuildTerrainRequestData>*)this_00);
            *(TerrainInputData*)(lVar6 + 8) = TVar1;
            psVar3 = *(shared_ptr**)(param_3 + 24);
            lVar6 = shared_ptr<BuildTerrainRequestData>::operator->((shared_ptr<BuildTerrainRequestData>*)this_00);
            shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>::operator=(
                (shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>*)(lVar6 + 32), psVar3);
            psVar3 = *(shared_ptr**)(param_3 + 32);
            lVar6 = shared_ptr<BuildTerrainRequestData>::operator->((shared_ptr<BuildTerrainRequestData>*)this_00);
            shared_ptr<WaterType>::operator=((shared_ptr<WaterType>*)(lVar6 + 48), psVar3);
            TVar1 = param_3[40];
            lVar6 = shared_ptr<BuildTerrainRequestData>::operator->((shared_ptr<BuildTerrainRequestData>*)this_00);
            *(TerrainInputData*)(lVar6 + 160) = TVar1;
        }
    }

    // 0x1006263b0, 16 bytes, complete-object constructor, placed by class name
    // BuildTerrainMain::BuildTerrainMain(graphics::RT7Core*, int, TerrainInputData&): jumps straight to the base-object constructor

    // 0x1006263c0, 304 bytes, base-object destructor, placed by class name
    // BuildTerrainMain::~BuildTerrainMain()
    void BuildTerrainMain::~BuildTerrainMain() {
        duration local_38[12];
        undefined4 local_2c;

        field_0 = &PTR__BuildTerrainMain_100f0ca60;
        if (field_520 != '\0') {
            do {
                if ((&field_521)->operator_cast_to_bool())
                    break;
                local_2c = 500;
                std::chrono::duration<long long, std::ratio<1l, 1000000000l>>::duration<int>((int*)local_38,
                                                                                             (type*)&local_2c);
                std::this_thread::sleep_for(local_38);
            } while (field_520 != '\0');
        }
        m_requestData->~shared_ptr();
        (&field_528)->~array();
        (&field_392)->~array();
        (&field_256)->~array();
        (&field_128)->~array();
        (&field_88)->~vector();
        ~AssetJob();
    }

    // 0x100626510, 16 bytes, complete-object destructor, placed by class name
    // BuildTerrainMain::~BuildTerrainMain(): jumps straight to the base-object destructor

    // 0x100626520, 32 bytes, deleting destructor, placed by class name
    // BuildTerrainMain::~BuildTerrainMain()
    void BuildTerrainMain::~BuildTerrainMain() {
        ~BuildTerrainMain(this);
        operator_delete(this);
    }

    // 0x100626540, 208 bytes, placed by class name
    // BuildTerrainMain::RunFirst(Js5ResourceProvider*, ConfigProvider*)
    undefined* BuildTerrainMain::RunFirst(Js5ResourceProvider* param_1, ConfigProvider* param_2) {
        undefined* puVar2;
        undefined1 auVar3[16];
        shared_ptr local_38;

        if (m_requestData->operator_cast_to_bool()) {
            puVar2 = (undefined*)FetchTerrainData(this, param_1);
            if (puVar2 == DataStatus::READY) {
                puVar2 = (undefined*)FindUsedOverlaysAndUnderlays(this);
                if (puVar2 == DataStatus::READY) {
                    puVar2 = (undefined*)LoadOverlayAndUnderlayConfigs(this, param_2);
                    if (puVar2 == DataStatus::READY) {
                        puVar2 = (undefined*)LoadMaterials(this);
                        if (puVar2 == DataStatus::READY) {
                            auVar3 = BuildTextureMeta(this);
                            puVar2 = auVar3._0_8_;
                            if (auVar3._0_8_ == DataStatus::READY) {
                                static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(
                                    &local_38, (jag*)m_requestData, auVar3._8_8_);
                                shared_ptr<void>::operator=((shared_ptr<void>*)&field_32, &local_38);
                                local_38.~shared_ptr();
                                puVar2 = DataStatus::READY;
                            }
                        }
                    }
                }
            }
        } else {
            puVar2 = DataStatus::MISSING;
        }
        return puVar2;
    }

    // 0x100626610, 688 bytes, placed by class name
    // BuildTerrainMain::FetchTerrainData(Js5ResourceProvider*)
    undefined* BuildTerrainMain::FetchTerrainData(Js5ResourceProvider* param_1) {
        int iVar1;
        bool bVar2;
        char cVar3;
        bool bVar4;
        long lVar5;
        long lVar6;
        Js5ResourceProvider* pJVar7;
        int* piVar8;
        undefined* puVar9;
        shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>* this_00;
        ulong uVar10;
        shared_ptr* this_01;
        undefined1* puVar11;
        ulong uVar12;
        undefined* local_50;
        shared_ptr local_48;
        uint local_34;

        puVar11 = m_requestData;
        pJVar7 = param_1;
        lVar5 = shared_ptr<BuildTerrainRequestData>::operator->((shared_ptr<BuildTerrainRequestData>*)puVar11);
        cVar3 = ((lVar5 + 64))->empty();
        if (cVar3 == '\0') {
            return DataStatus::READY;
        }
        lVar5 = shared_ptr<BuildTerrainRequestData>::operator->((shared_ptr<BuildTerrainRequestData>*)puVar11);
        lVar6 = shared_ptr<BuildTerrainRequestData>::operator->((shared_ptr<BuildTerrainRequestData>*)puVar11);
        this_01 = (shared_ptr*)(lVar6 + 16);
        bVar4 = shared_ptr::operator_cast_to_bool(this_01);
        if (!bVar4) {
            new (&local_48) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(pJVar7);
            piVar8 =
                (int*)shared_ptr<BuildTerrainRequestData>::operator->((shared_ptr<BuildTerrainRequestData>*)puVar11);
            iVar1 = *piVar8;
            lVar6 = shared_ptr<BuildTerrainRequestData>::operator->((shared_ptr<BuildTerrainRequestData>*)puVar11);
            puVar9 = (undefined*)Terrain::GetTerrainData(&local_48, param_1, iVar1, *(int*)(lVar6 + 4));
            if (puVar9 == DataStatus::READY) {
                ((lVar5 + 64))->push_back(&local_48);
                local_48.~shared_ptr();
                return DataStatus::READY;
            }
            local_48.~shared_ptr();
            return puVar9;
        }
        lVar6 = shared_ptr<ClientCompositeData>::operator->((shared_ptr<ClientCompositeData>*)this_01);
        cVar3 = ((lVar6 + 9800))->empty();
        if (cVar3 != '\0') {
            shared_ptr<void>::reset();
            return DataStatus::READY;
        }
        puVar11 = &field_88;
        lVar6 = shared_ptr<ClientCompositeData>::operator->((shared_ptr<ClientCompositeData>*)this_01);
        pJVar7 = (Js5ResourceProvider*)((lVar6 + 9800))->size();
        puVar11->resize((ulong)pJVar7);
        lVar6 = shared_ptr<ClientCompositeData>::operator->((shared_ptr<ClientCompositeData>*)this_01);
        lVar6 = ((lVar6 + 9800))->size();
        local_34 = (uint)CONCAT71((int7)((ulong)lVar6 >> 8), 1);
        if (lVar6 != 0) {
            uVar12 = 0;
            bVar4 = true;
            do {
                new (&local_48) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(pJVar7);
                lVar6 = shared_ptr<ClientCompositeData>::operator->((shared_ptr<ClientCompositeData>*)this_01);
                piVar8 = (int*)eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>::operator[](
                    (vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>*)(lVar6 + 9800), uVar12);
                iVar1 = *piVar8;
                lVar6 = shared_ptr<ClientCompositeData>::operator->((shared_ptr<ClientCompositeData>*)this_01);
                lVar6 = eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>::operator[](
                    (vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>*)(lVar6 + 9800), uVar12);
                pJVar7 = param_1;
                puVar9 = (undefined*)Terrain::GetTerrainData(&local_48, param_1, iVar1, *(int*)(lVar6 + 4));
                if (puVar9 == DataStatus::NOTLOADED) {
                    local_34 = 0;
                LAB_1006267f7:
                    bVar2 = true;
                } else {
                    if (puVar9 == DataStatus::READY) {
                        this_00 = (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)eastl::vector<
                            shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>, eastl::allocator>::
                        operator[](
                            (vector<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>, eastl::allocator>*)
                                puVar11,
                            uVar12);
                        pJVar7 = (Js5ResourceProvider*)&local_48;
                        shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator=(this_00, &local_48);
                        goto LAB_1006267f7;
                    }
                    if (puVar9 != DataStatus::MISSING)
                        goto LAB_1006267f7;
                    bVar2 = false;
                    local_50 = puVar9;
                }
                local_48.~shared_ptr();
                if (!bVar2)
                    break;
                uVar12 = uVar12 + 1;
                lVar6 = shared_ptr<ClientCompositeData>::operator->((shared_ptr<ClientCompositeData>*)this_01);
                uVar10 = ((lVar6 + 9800))->size();
                bVar4 = uVar12 < uVar10;
            } while (bVar4);
            if (bVar4) {
                bVar4 = false;
                goto LAB_100626886;
            }
        }
        if ((local_34 & 1) == 0) {
            bVar4 = false;
            local_50 = DataStatus::NOTLOADED;
        } else {
            ((lVar5 + 64))->swap(puVar11);
            puVar11->clear();
            bVar4 = true;
        }
    LAB_100626886:
        if (!bVar4) {
            return local_50;
        }
        return DataStatus::READY;
    }

    // 0x1006268c0, 704 bytes, placed by class name
    // BuildTerrainMain::FindUsedOverlaysAndUnderlays()
    undefined* BuildTerrainMain::FindUsedOverlaysAndUnderlays() {
        undefined1* this_00;
        bool bVar1;
        byte bVar2;
        ushort uVar3;
        long lVar4;
        shared_ptr* this_01;
        PacketT<Array<unsigned char, eastl::allocator>>* this_02;
        uchar* puVar5;
        TextureAtlasReference* this_03;
        ulong uVar6;
        ulong uVar7;
        vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>* pvVar8;
        int iVar9;
        undefined1 local_80[40];
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
            lVar4 =
                shared_ptr<BuildTerrainRequestData>::operator->((shared_ptr<BuildTerrainRequestData>*)m_requestData);
            this_01 = (shared_ptr*)((lVar4 + 64))->HeapBeginPtr();
            local_80._32_8_ = ((lVar4 + 64))->end();
            if (this_01 != (shared_ptr*)local_80._32_8_) {
                local_50 = (array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                    eastl::vector<int, BucketAllocatorEASTL>>,
                                  4ul>*)&local_48->field_256;
                this_00 = &local_48->field_128;
                do {
                    bVar1 = shared_ptr::operator_cast_to_bool(this_01);
                    if (bVar1) {
                        this_02 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                            shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)this_01);
                        puVar5 = (uchar*)this_02->GetDataPtr();
                        local_58 = this_01;
                        this_03 = (TextureAtlasReference*)
                            shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)this_01);
                        uVar6 = this_03->GetTextureAtlas();
                        new (local_80) PacketT<Array<unsigned char, BucketAllocatorEASTL>>(puVar5, uVar6);
                        while (true) {
                            uVar6 = local_80->size();
                            uVar7 = local_80->GetTextureAtlas();
                            if (uVar7 <= uVar6)
                                break;
                            bVar2 = local_80->g1();
                            if (3 < bVar2) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("level < constants::MapConstants::LEVELS",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                          "runetek5/assetbuilder/jobs/buildterrain/BuildTerrainMain.cpp",
                                          190, (char*)0);
                            }
                            uVar6 = (ulong)bVar2;
                            local_38 = 0;
                            do {
                                iVar9 = 66;
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
                                            pvVar8 = (vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                                 eastl::vector<int, BucketAllocatorEASTL>>*)
                                                std::array<
                                                    eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                                      eastl::vector<int, BucketAllocatorEASTL>>,
                                                    4ul>::operator[](local_50, uVar6);
                                            eastl::vector_set<
                                                int, eastl::less<int>, BucketAllocatorEASTL,
                                                eastl::vector<int, BucketAllocatorEASTL>>::insert<int>(pvVar8,
                                                                                                       &local_40);
                                            local_80->Skip(2);
                                        }
                                        uVar3 = local_80->gSmart1or2();
                                        local_3c = uVar3 - 1;
                                        if ((bVar2 & 16) != 0) {
                                            uVar3 = local_80->gSmart1or2();
                                            local_34 = uVar3 - 1;
                                            if (uVar3 != 0) {
                                                pvVar8 = (vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                                     eastl::vector<int, BucketAllocatorEASTL>>*)
                                                    std::array<
                                                        eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                                          eastl::vector<int, BucketAllocatorEASTL>>,
                                                        4ul>::
                                                    operator[]((array<eastl::vector_set<
                                                                          int, eastl::less<int>, BucketAllocatorEASTL,
                                                                          eastl::vector<int, BucketAllocatorEASTL>>,
                                                                      4ul>*)this_00,
                                                               uVar6);
                                                eastl::vector_set<
                                                    int, eastl::less<int>, BucketAllocatorEASTL,
                                                    eastl::vector<int, BucketAllocatorEASTL>>::insert<int>(pvVar8,
                                                                                                           &local_34);
                                            }
                                        }
                                        if (local_3c != -1) {
                                            pvVar8 = (vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                                 eastl::vector<int, BucketAllocatorEASTL>>*)
                                                std::array<
                                                    eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                                      eastl::vector<int, BucketAllocatorEASTL>>,
                                                    4ul>::
                                                operator[](
                                                    (array<
                                                        eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                                          eastl::vector<int, BucketAllocatorEASTL>>,
                                                        4ul>*)this_00,
                                                    uVar6);
                                            eastl::vector_set<
                                                int, eastl::less<int>, BucketAllocatorEASTL,
                                                eastl::vector<int, BucketAllocatorEASTL>>::insert<int>(pvVar8,
                                                                                                       &local_3c);
                                            local_80->Skip(1);
                                            if ((bVar2 & 16) != 0) {
                                                uVar3 = local_80->gSmart1or2();
                                                local_34 = uVar3 - 1;
                                                pvVar8 = (vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                                     eastl::vector<int, BucketAllocatorEASTL>>*)
                                                    std::array<
                                                        eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                                          eastl::vector<int, BucketAllocatorEASTL>>,
                                                        4ul>::operator[](local_50, uVar6);
                                                eastl::vector_set<
                                                    int, eastl::less<int>, BucketAllocatorEASTL,
                                                    eastl::vector<int, BucketAllocatorEASTL>>::insert<int>(pvVar8,
                                                                                                           &local_34);
                                            }
                                        }
                                    }
                                    iVar9 = iVar9 + -1;
                                } while (iVar9 != 0);
                                local_38 = local_38 + 1;
                            } while (local_38 != 66);
                        }
                        local_80->~PacketT();
                        this_01 = local_58;
                    }
                    this_01 = this_01 + 1;
                } while (this_01 != (shared_ptr*)local_80._32_8_);
            }
            local_48->field_120 = 1;
        }
        return DataStatus::READY;
    }

    // 0x100626b80, 1424 bytes, placed by class name
    // BuildTerrainMain::LoadOverlayAndUnderlayConfigs(ConfigProvider*)
    undefined* BuildTerrainMain::LoadOverlayAndUnderlayConfigs(ConfigProvider* param_1) {
        undefined1* this_00;
        char cVar1;
        bool bVar2;
        int iVar3;
        undefined** ppuVar4;
        int* piVar5;
        shared_ptr<FloorOverlayType>* this_01;
        long lVar6;
        vector<unsigned int, eastl::allocator>* pvVar7;
        Layout* pLVar8;
        array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>,
              4ul>* paVar9;
        shared_ptr* psVar10;
        MSIType* pMVar11;
        vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>* pvVar12;
        long lVar13;
        shared_ptr<FloorUnderlayType>* this_02;
        ulong uVar14;
        ulong uVar15;
        vector<int, BucketAllocatorEASTL> local_a8[32];
        BuildTerrainMain* local_88;
        vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>* local_80;
        array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>,
              4ul>* local_78;
        ConfigProvider* local_70;
        shared_ptr<BuildTerrainRequestData>* local_68;
        shared_ptr<BuildTerrainRequestData>* local_60;
        vector<shared_ptr<FloorOverlayType>, eastl::allocator>* local_58;
        int* local_50;
        vector<shared_ptr<oldscape::rseven::Terrain>, eastl::allocator>* local_48;
        ulong local_40;
        int local_34;

        local_70 = param_1;
        if (field_384 == '\0') {
            cVar1 = param_1->Ready();
            if (cVar1 != '\0') {
                local_60 = (shared_ptr<BuildTerrainRequestData>*)m_requestData;
                lVar6 = shared_ptr<BuildTerrainRequestData>::operator->(local_60);
                local_58 = (vector<shared_ptr<FloorOverlayType>, eastl::allocator>*)(lVar6 + 96);
                local_58->clear();
                this_00 = &field_128;
                uVar14 = 0;
                uVar15 = 0;
                do {
                    pvVar7 = (vector<unsigned int, eastl::allocator>*)std::array<
                        eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                          eastl::vector<int, BucketAllocatorEASTL>>,
                        4ul>::operator[]((array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                                  eastl::vector<int, BucketAllocatorEASTL>>,
                                                4ul>*)this_00,
                                         uVar14);
                    lVar6 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar7);
                    uVar15 = uVar15 + lVar6;
                    uVar14 = uVar14 + 1;
                } while (uVar14 != 4);
                eastl::vector<shared_ptr<FloorOverlayType>, eastl::allocator>::resize(local_58, uVar15);
                eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                  eastl::vector<int, BucketAllocatorEASTL>>::vector_set();
                eastl::vector<int, BucketAllocatorEASTL>::reserve(local_a8, uVar15);
                local_78 = (array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                    eastl::vector<int, BucketAllocatorEASTL>>,
                                  4ul>*)&field_392;
                local_68 = (shared_ptr<BuildTerrainRequestData>*)CONCAT44(
                    local_68._4_4_, (int)CONCAT71((int7)((ulong)local_78 >> 8), 1));
                uVar14 = 0;
                local_40 = 0;
                local_88 = this;
                do {
                    local_48 = (vector<shared_ptr<oldscape::rseven::Terrain>, eastl::allocator>*)uVar14;
                    pLVar8 = (Layout*)std::array<
                        eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                          eastl::vector<int, BucketAllocatorEASTL>>,
                        4ul>::operator[]((array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                                  eastl::vector<int, BucketAllocatorEASTL>>,
                                                4ul>*)this_00,
                                         uVar14);
                    piVar5 = (int*)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(pLVar8);
                    local_50 = (int*)pLVar8->end();
                    if (piVar5 != local_50) {
                        do {
                            psVar10 = ConfigProvider::GetConfig<FloorOverlayType>(local_70, *piVar5, (DataStatus**)0);
                            bVar2 = shared_ptr::operator_cast_to_bool(psVar10);
                            if (bVar2) {
                                pMVar11 = (MSIType*)shared_ptr<FloorOverlayType>::operator->(
                                    (shared_ptr<FloorOverlayType>*)psVar10);
                                iVar3 = pMVar11->GetTint();
                                if (iVar3 != -1) {
                                    lVar6 = shared_ptr<BuildTerrainRequestData>::operator->(local_60);
                                    bVar2 = ((lVar6 + 16))->operator_cast_to_bool();
                                    if (bVar2) {
                                        uVar14 = 0;
                                        do {
                                            pMVar11 = (MSIType*)shared_ptr<FloorOverlayType>::operator->(
                                                (shared_ptr<FloorOverlayType>*)psVar10);
                                            local_80 = (vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                                   eastl::vector<int, BucketAllocatorEASTL>>*)
                                                std::array<
                                                    eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                                      eastl::vector<int, BucketAllocatorEASTL>>,
                                                    4ul>::operator[](local_78, uVar14);
                                            local_34 = pMVar11->GetTint();
                                            eastl::vector_set<
                                                int, eastl::less<int>, BucketAllocatorEASTL,
                                                eastl::vector<int, BucketAllocatorEASTL>>::insert<int>(local_80,
                                                                                                       &local_34);
                                            uVar14 = uVar14 + 1;
                                        } while (uVar14 != 4);
                                    } else {
                                        pMVar11 = (MSIType*)shared_ptr<FloorOverlayType>::operator->(
                                            (shared_ptr<FloorOverlayType>*)psVar10);
                                        pvVar12 = (vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                              eastl::vector<int, BucketAllocatorEASTL>>*)
                                            std::array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                                         eastl::vector<int, BucketAllocatorEASTL>>,
                                                       4ul>::operator[](local_78, (ulong)local_48);
                                        local_34 = pMVar11->GetTint();
                                        eastl::vector_set<
                                            int, eastl::less<int>, BucketAllocatorEASTL,
                                            eastl::vector<int, BucketAllocatorEASTL>>::insert<int>(pvVar12, &local_34);
                                    }
                                }
                                lVar6 = local_a8->find(piVar5);
                                lVar13 = local_a8->end();
                                if (lVar6 == lVar13) {
                                    local_a8->insert(piVar5);
                                    this_01 = (shared_ptr<FloorOverlayType>*)
                                        eastl::vector<shared_ptr<FloorOverlayType>, eastl::allocator>::operator[](
                                            local_58, local_40);
                                    shared_ptr<FloorOverlayType>::operator=(this_01, psVar10);
                                    local_40 = local_40 + 1;
                                }
                            } else {
                                local_40 = local_40 + 1;
                                local_68 =
                                    (shared_ptr<BuildTerrainRequestData>*)((ulong)local_68 & 18446744069414584320);
                            }
                            piVar5 = piVar5 + 1;
                        } while (piVar5 != local_50);
                    }
                    this = local_88;
                    uVar14 = (long)local_48 + 1;
                } while (uVar14 != 4);
                if (((ulong)local_68 & 1) != 0) {
                    eastl::vector<shared_ptr<FloorOverlayType>, eastl::allocator>::resize(local_58, local_40);
                    field_384 = '\x01';
                }
                local_a8->~vector_set();
                cVar1 = field_385;
                goto joined_r0x000100626e56;
            }
        } else {
            cVar1 = field_385;
        joined_r0x000100626e56:
            if (cVar1 == '\0') {
                cVar1 = local_70->Ready();
                if (cVar1 == '\0')
                    goto LAB_1006270cf;
                local_68 = (shared_ptr<BuildTerrainRequestData>*)m_requestData;
                lVar6 = shared_ptr<BuildTerrainRequestData>::operator->(local_68);
                local_48 = (vector<shared_ptr<oldscape::rseven::Terrain>, eastl::allocator>*)(lVar6 + 128);
                eastl::vector<shared_ptr<oldscape::rseven::Terrain>, eastl::allocator>::clear(local_48);
                uVar14 = 0;
                uVar15 = 0;
                do {
                    pvVar7 = (vector<unsigned int, eastl::allocator>*)std::array<
                        eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                          eastl::vector<int, BucketAllocatorEASTL>>,
                        4ul>::operator[]((array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                                  eastl::vector<int, BucketAllocatorEASTL>>,
                                                4ul>*)&field_256,
                                         uVar14);
                    lVar6 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar7);
                    uVar15 = uVar15 + lVar6;
                    uVar14 = uVar14 + 1;
                } while (uVar14 != 4);
                local_48->resize(uVar15);
                eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                  eastl::vector<int, BucketAllocatorEASTL>>::vector_set();
                eastl::vector<int, BucketAllocatorEASTL>::reserve(local_a8, uVar15);
                local_80 = (vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                       eastl::vector<int, BucketAllocatorEASTL>>*)&field_392;
                local_40 = CONCAT44(local_40._4_4_, (int)CONCAT71((int7)((ulong)local_80 >> 8), 1));
                uVar14 = 0;
                local_50 = (int*)0;
                local_88 = this;
                local_58 = (vector<shared_ptr<FloorOverlayType>, eastl::allocator>*)&field_256;
                do {
                    local_60 = (shared_ptr<BuildTerrainRequestData>*)uVar14;
                    pLVar8 = (Layout*)std::array<
                        eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                          eastl::vector<int, BucketAllocatorEASTL>>,
                        4ul>::operator[]((array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                                  eastl::vector<int, BucketAllocatorEASTL>>,
                                                4ul>*)local_58,
                                         uVar14);
                    paVar9 = (array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                      eastl::vector<int, BucketAllocatorEASTL>>,
                                    4ul>*)
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(pLVar8);
                    local_78 = (array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                        eastl::vector<int, BucketAllocatorEASTL>>,
                                      4ul>*)pLVar8->end();
                    if (paVar9 != local_78) {
                        do {
                            psVar10 =
                                ConfigProvider::GetConfig<FloorUnderlayType>(local_70, *(int*)paVar9, (DataStatus**)0);
                            bVar2 = shared_ptr::operator_cast_to_bool(psVar10);
                            if (bVar2) {
                                pMVar11 = (MSIType*)shared_ptr<FloorUnderlayType>::operator->(
                                    (shared_ptr<FloorUnderlayType>*)psVar10);
                                iVar3 = pMVar11->GetTint();
                                if (iVar3 != -1) {
                                    lVar6 = shared_ptr<BuildTerrainRequestData>::operator->(local_68);
                                    bVar2 = ((lVar6 + 16))->operator_cast_to_bool();
                                    if (bVar2) {
                                        uVar14 = 0;
                                        do {
                                            pMVar11 = (MSIType*)shared_ptr<FloorUnderlayType>::operator->(
                                                (shared_ptr<FloorUnderlayType>*)psVar10);
                                            pvVar12 = (vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                                  eastl::vector<int, BucketAllocatorEASTL>>*)
                                                std::array<
                                                    eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                                      eastl::vector<int, BucketAllocatorEASTL>>,
                                                    4ul>::
                                                operator[](
                                                    (array<
                                                        eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                                          eastl::vector<int, BucketAllocatorEASTL>>,
                                                        4ul>*)local_80,
                                                    uVar14);
                                            local_34 = pMVar11->GetTint();
                                            eastl::vector_set<
                                                int, eastl::less<int>, BucketAllocatorEASTL,
                                                eastl::vector<int, BucketAllocatorEASTL>>::insert<int>(pvVar12,
                                                                                                       &local_34);
                                            uVar14 = uVar14 + 1;
                                        } while (uVar14 != 4);
                                    } else {
                                        pMVar11 = (MSIType*)shared_ptr<FloorUnderlayType>::operator->(
                                            (shared_ptr<FloorUnderlayType>*)psVar10);
                                        pvVar12 = (vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                              eastl::vector<int, BucketAllocatorEASTL>>*)
                                            std::array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                                         eastl::vector<int, BucketAllocatorEASTL>>,
                                                       4ul>::
                                            operator[](
                                                (array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                                         eastl::vector<int, BucketAllocatorEASTL>>,
                                                       4ul>*)local_80,
                                                (ulong)local_60);
                                        local_34 = pMVar11->GetTint();
                                        eastl::vector_set<
                                            int, eastl::less<int>, BucketAllocatorEASTL,
                                            eastl::vector<int, BucketAllocatorEASTL>>::insert<int>(pvVar12, &local_34);
                                    }
                                }
                                lVar6 = local_a8->find(paVar9);
                                lVar13 = local_a8->end();
                                if (lVar6 == lVar13) {
                                    local_a8->insert(paVar9);
                                    this_02 = (shared_ptr<FloorUnderlayType>*)
                                        eastl::vector<shared_ptr<FloorUnderlayType>, eastl::allocator>::operator[](
                                            (vector<shared_ptr<FloorUnderlayType>, eastl::allocator>*)local_48,
                                            (ulong)local_50);
                                    shared_ptr<FloorUnderlayType>::operator=(this_02, psVar10);
                                    local_50 = (int*)((long)local_50 + 1);
                                }
                            } else {
                                local_50 = (int*)((long)local_50 + 1);
                                local_40 = local_40 & 18446744069414584320;
                            }
                            paVar9 = paVar9 + 4;
                        } while (paVar9 != local_78);
                    }
                    this = local_88;
                    uVar14 = (long)local_60 + 1;
                } while (uVar14 != 4);
                if ((local_40 & 1) != 0) {
                    local_48->resize((ulong)local_50);
                    field_385 = '\x01';
                }
                local_a8->~vector_set();
                cVar1 = field_384;
            } else {
                cVar1 = field_384;
            }
            if ((cVar1 != '\0') && (field_385 != '\0')) {
                ppuVar4 = &DataStatus::READY;
                goto LAB_1006270d6;
            }
        }
    LAB_1006270cf:
        ppuVar4 = &DataStatus::NOTLOADED;
    LAB_1006270d6:
        return *ppuVar4;
    }

    // 0x100627110, 256 bytes, placed by class name
    // BuildTerrainMain::LoadMaterials()
    undefined* BuildTerrainMain::LoadMaterials() {
        bool bVar1;
        char cVar2;
        MaterialManager* this_00;
        char* pcVar3;
        undefined** ppuVar4;
        future<void> local_d8[8];
        __0 local_d0;
        function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[160];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        bVar1 = (&field_521)->operator_cast_to_bool();
        if (bVar1) {
            ppuVar4 = &DataStatus::READY;
        } else {
            this_00 = (MaterialManager*)field_80->GetMaterialManager();
            cVar2 = this_00->MaterialsReady();
            ppuVar4 = &DataStatus::NOTLOADED;
            if ((cVar2 != '\0') && (field_520 == '\0')) {
                field_520 = 1;
                pcVar3 = (char*)this_00->Instance();
                local_d0.field_0 = (long)this;
                fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    BuildTerrainMain::LoadMaterials()::__0, void>(local_c8, &local_d0);
                local_d8->RunOnThreadPoolRenderContext(pcVar3, (function*)"LoadMaterials");
                std::future<void>::~future(local_d8);
                fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                        (fixedfunction::Methods)0>::~function(local_c8);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return *ppuVar4;
    }

    // 0x100627210, 608 bytes, placed by class name
    // BuildTerrainMain::BuildTextureMeta()
    undefined* BuildTerrainMain::BuildTextureMeta() {
        undefined1* this_00;
        Material* this_01;
        char cVar1;
        bool bVar2;
        uint uVar3;
        long lVar4;
        shared_ptr<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>>* this_02;
        Layout* this_03;
        int* piVar5;
        long lVar6;
        shared_ptr* this_04;
        TextureAtlasReference* pTVar7;
        TextureAtlas* this_05;
        ulong uVar8;
        undefined1 auVar9[12];
        shared_ptr local_88;
        undefined1 local_78[12];
        int* local_68;
        shared_ptr<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>>* local_60;
        array<shared_ptr<graphics::TextureAtlasReference>, 4ul>* local_58;
        array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>,
              4ul>* local_50;
        BuildTerrainMain* local_48;
        ulong local_40;
        ushort local_38;
        undefined1 local_36;
        undefined1 local_35;
        undefined4 local_34;

        if (field_522 == '\0') {
            this_00 = m_requestData;
            local_50 = (array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                eastl::vector<int, BucketAllocatorEASTL>>,
                              4ul>*)&field_392;
            local_58 = (array<shared_ptr<graphics::TextureAtlasReference>, 4ul>*)&field_528;
            uVar8 = 0;
            local_48 = this;
            do {
                lVar4 = shared_ptr<BuildTerrainRequestData>::operator->((shared_ptr<BuildTerrainRequestData>*)this_00);
                this_02 = (shared_ptr<
                           eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>>*)
                    std::array<
                        shared_ptr<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>>,
                        4ul>::operator[]((array<shared_ptr<eastl::map<int, graphics::TerrainTextureMeta,
                                                                      eastl::less<int>, eastl::allocator>>,
                                                4ul>*)(lVar4 + 208),
                                         uVar8);
                make_shared<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>>(
                    (jag*)&local_88);
                local_60 = this_02;
                shared_ptr<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>,
                                      eastl::allocator>>::operator=(this_02, &local_88);
                local_88.~shared_ptr();
                local_40 = uVar8;
                this_03 = (Layout*)std::array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                                eastl::vector<int, BucketAllocatorEASTL>>,
                                              4ul>::operator[](local_50, uVar8);
                piVar5 = (int*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(this_03);
                local_68 = (int*)this_03->end();
                if (piVar5 != local_68) {
                    do {
                        lVar4 = shared_ptr<BuildTerrainRequestData>::operator->(
                            (shared_ptr<BuildTerrainRequestData>*)this_00);
                        lVar4 = ((lVar4 + 168))->find(piVar5);
                        lVar6 = shared_ptr<BuildTerrainRequestData>::operator->(
                            (shared_ptr<BuildTerrainRequestData>*)this_00);
                        lVar6 = ((lVar6 + 168))->end();
                        if ((lVar4 != lVar6) && (this_01 = *(Material**)(lVar4 + 8), this_01 != (Material*)0)) {
                            cVar1 = this_01->ShowSkybox();
                            if (cVar1 != '\0') {
                                cVar1 = this_01->IsRT7();
                                if (cVar1 != '\0') {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("!material->IsRT7()",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "game/runetek5/assetbuilder/jobs/buildterrain/BuildTerrainMain.cpp",
                                              443, "Using RT7 materials in terrain patches is currently unsupported");
                                }
                                new (&local_38) ui::ServerActiveProperties();
                                this_04 = (shared_ptr*)
                                    std::array<shared_ptr<graphics::TextureAtlasReference>, 4ul>::operator[](local_58,
                                                                                                             local_40);
                                bVar2 = shared_ptr::operator_cast_to_bool(this_04);
                                if (bVar2) {
                                    pTVar7 =
                                        (TextureAtlasReference*)shared_ptr<graphics::TextureAtlasReference>::operator->(
                                            (shared_ptr<graphics::TextureAtlasReference>*)this_04);
                                    lVar4 = pTVar7->GetTextureAtlas();
                                    if (lVar4 == 0)
                                        goto LAB_1006272dc;
                                    pTVar7 =
                                        (TextureAtlasReference*)shared_ptr<graphics::TextureAtlasReference>::operator->(
                                            (shared_ptr<graphics::TextureAtlasReference>*)this_04);
                                    this_05 = (TextureAtlas*)pTVar7->GetTextureAtlas();
                                    uVar3 = this_01->GetZ();
                                    this_05->GetMaterialSettingsSlotXY(&local_38, uVar3);
                                } else {
                                LAB_1006272dc:
                                    local_38 = 0;
                                }
                                local_36 = this_01->HasEmissiveMap();
                                local_35 = this_01->HasSpecularMap();
                                local_34 = this_01->GetSeqDelay();
                                shared_ptr<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>,
                                                      eastl::allocator>>::operator->(local_60);
                                auVar9 = eastl::make_pair<int const&, graphics::TerrainTextureMeta&>(
                                    piVar5, (TerrainTextureMeta*)&local_38);
                                local_78 = auVar9;
                                eastl::rbtree<int, eastl::pair<int const, graphics::TerrainTextureMeta>,
                                              eastl::less<int>, eastl::allocator,
                                              eastl::use_first<eastl::pair<int const, graphics::TerrainTextureMeta>>,
                                              true, true>::insert<eastl::pair<int, graphics::TerrainTextureMeta>,
                                                                  void>((pair*)&local_88);
                            }
                        }
                        piVar5 = piVar5 + 1;
                    } while (piVar5 != local_68);
                }
                uVar8 = local_40 + 1;
            } while (uVar8 != 4);
            local_48->field_522 = 1;
        }
        return DataStatus::READY;
    }

    // 0x100627470, 80 bytes, placed by class name
    // BuildTerrainMain::CreateWorker()
    BuildTerrainMain* BuildTerrainMain::CreateWorker() {
        shared_ptr local_28;

        bucket_make_shared<BuildTerrainWorker>((jag*)&local_28);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, &local_28);
        local_28.~shared_ptr();
        return this;
    }

    // 0x100627550, 80 bytes, placed by class name
    // BuildTerrainMain::DecodeResult(shared_ptr<void> const&)
    BuildTerrainMain* BuildTerrainMain::DecodeResult(shared_ptr* param_1) {
        BuildTerrainResultData* pBVar2;
        shared_ptr* in_RDX;

        if (shared_ptr::operator_cast_to_bool(in_RDX)) {
            pBVar2 = (BuildTerrainResultData*)in_RDX->end();
            PostDecodeResultSetup((BuildTerrainMain*)param_1, pBVar2);
        }
        new (this) shared_ptr<oldscape::dash3d::Decor>(in_RDX);
        return this;
    }

    // 0x1006275a0, 128 bytes, placed by class name
    // BuildTerrainMain::PostDecodeResultSetup(BuildTerrainResultData&)
    void BuildTerrainMain::PostDecodeResultSetup(BuildTerrainResultData* param_1) {
        shared_ptr* psVar1;
        long lVar2;
        shared_ptr* this_00;
        ulong uVar4;

        uVar4 = 0;
        do {
            this_00 = (shared_ptr*)std::array<shared_ptr<BuildTerrainResultLevelData>, 4ul>::operator[](
                (array<shared_ptr<BuildTerrainResultLevelData>, 4ul>*)param_1, uVar4);
            if (shared_ptr::operator_cast_to_bool(this_00)) {
                psVar1 = (shared_ptr*)std::array<shared_ptr<graphics::TextureAtlasReference>, 4ul>::operator[](
                    (array<shared_ptr<graphics::TextureAtlasReference>, 4ul>*)&field_528, uVar4);
                lVar2 = shared_ptr<BuildTerrainResultLevelData>::operator->(
                    (shared_ptr<BuildTerrainResultLevelData>*)this_00);
                shared_ptr<graphics::TextureAtlasReference>::operator=(
                    (shared_ptr<graphics::TextureAtlasReference>*)(lVar2 + 12640), psVar1);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 != 4);
    }

    // 0x100637090, 448 bytes, placed by class name
    // BuildTerrainMain::LoadMaterials()::$_0::operator()(render::RenderContext&) const
    /* BuildTerrainMain::LoadMaterials()::$_0::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&)
   const */

    void BuildTerrainMain::LoadMaterials()::$_0::operator()(RenderContext* param_1) {
        shared_ptr<BuildTerrainRequestData>* this_00;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_01;
        char cVar1;
        BuildTerrainRequestData* this_02;
        Layout* this_03;
        uint* puVar2;
        uint* puVar3;
        TextureManager* this_04;
        TextureAtlasManager* this_05;
        shared_ptr<graphics::TextureAtlasReference>* this_06;
        long lVar4;
        long lVar5;
        MaterialManager* this_07;
        long extraout_RDX;
        ulong uVar6;
        undefined1 uVar7;
        uint* puVar8;
        shared_ptr* psVar9;
        ScriptVarType* local_70;
        ulong local_68;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* local_60;
        array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>,
              4ul>* local_58;
        array<shared_ptr<graphics::TextureAtlasReference>, 4ul>* local_50;
        shared_ptr local_48;
        long local_38;

        lVar4 = field_0;
        this_00 = (shared_ptr<BuildTerrainRequestData>*)(lVar4 + 592);
        this_02 = (BuildTerrainRequestData*)shared_ptr<BuildTerrainRequestData>::operator->(this_00);
        this_02->ClearMaterials(true);
        local_58 = (array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                            eastl::vector<int, BucketAllocatorEASTL>>,
                          4ul>*)(lVar4 + 392);
        local_50 = (array<shared_ptr<graphics::TextureAtlasReference>, 4ul>*)(lVar4 + 528);
        uVar6 = 0;
        local_38 = lVar4;
        do {
            local_68 = uVar6;
            this_03 = (Layout*)std::array<eastl::vector_set<int, eastl::less<int>, BucketAllocatorEASTL,
                                                            eastl::vector<int, BucketAllocatorEASTL>>,
                                          4ul>::operator[](local_58, uVar6);
            uVar7 = (undefined1)uVar6;
            puVar2 = (uint*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_03);
            local_60 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)this_03;
            puVar3 = (uint*)this_03->end();
            this_01 = local_60;
            for (; local_60 = this_01, puVar2 != puVar3; puVar2 = puVar2 + 1) {
                lVar4 = shared_ptr<BuildTerrainRequestData>::operator->(this_00);
                puVar8 = puVar2;
                lVar4 = ((lVar4 + 168))->find(puVar2);
                uVar7 = SUB81(puVar8, 0);
                lVar5 = shared_ptr<BuildTerrainRequestData>::operator->(this_00);
                lVar5 = ((lVar5 + 168))->end();
                if (lVar4 == lVar5) {
                    lVar4 = shared_ptr<BuildTerrainRequestData>::operator->(this_00);
                    this_07 = (MaterialManager*)(*(RT7Core**)(local_38 + 80))->GetMaterialManager();
                    local_70 = (ScriptVarType*)this_07->GetMaterial(*puVar2);
                    local_48._0_4_ = eastl::make_pair<unsigned int const&, ScriptVarType*>(puVar2, &local_70);
                    psVar9 = &local_48;
                    local_48.field_8 = extraout_RDX;
                    eastl::vector_map<int, graphics::Material_const*, eastl::less<int>, eastl::allocator,
                                      eastl::vector<eastl::pair<int, graphics::Material_const*>, eastl::allocator>>::
                        insert<eastl::pair<int, graphics::Material_const*>, void>(
                            (vector_map<
                                int, graphics::Material_const*, eastl::less<int>, eastl::allocator,
                                eastl::vector<eastl::pair<int, graphics::Material_const*>, eastl::allocator>>*)(lVar4 +
                                                                                                                168),
                            (pair*)psVar9);
                    uVar7 = SUB81(psVar9, 0);
                }
                this_01 = local_60;
            }
            cVar1 =
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    this_01);
            uVar6 = local_68;
            if (cVar1 == '\0') {
                this_04 = (TextureManager*)(*(RT7Core**)(local_38 + 80))->GetTextureManager();
                this_05 = (TextureAtlasManager*)this_04->GetTextureAtlasManager();
                graphics::TextureAtlasManager::GetSharedAtlasRefFromMaterialIDs<eastl::vector_set<
                    int, eastl::less<int>, BucketAllocatorEASTL, eastl::vector<int, BucketAllocatorEASTL>>>(
                    &local_48, this_05, (TextureAtlasUsage*)graphicutils::TextureAtlasUsage::USAGE_COMPRESSED,
                    (vector_set*)this_01);
                this_06 = (shared_ptr<graphics::TextureAtlasReference>*)
                    std::array<shared_ptr<graphics::TextureAtlasReference>, 4ul>::operator[](local_50, uVar6);
                psVar9 = &local_48;
                shared_ptr<graphics::TextureAtlasReference>::operator=(this_06, &local_48);
                uVar7 = SUB81(psVar9, 0);
                local_48.~shared_ptr();
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 != 4);
        std::atomic<bool>::operator=((atomic<bool>*)(local_38 + 521), (bool)uVar7);
    }

} // namespace jag::game
