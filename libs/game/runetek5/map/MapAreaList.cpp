// libs/game/runetek5/map/MapAreaList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "MapAreaList.h"

namespace jag::game {
    // 0x1004aea40, 32 bytes, base-object constructor, placed by class name and debug map
    // MapAreaList::MapAreaList(Js5ResourceProvider*)
    void MapAreaList::MapAreaList(Js5ResourceProvider* param_1) {
        field_0 = param_1;
        new (&field_8) Array<MapArea, eastl::allocator>();
    }

    // 0x1004aea70, 16 bytes, complete-object constructor, placed by class name and debug map
    // MapAreaList::MapAreaList(Js5ResourceProvider*): jumps straight to the base-object constructor

    // 0x1004aea80, 1232 bytes, placed by class name and debug map
    // MapAreaList::LoadData()
    undefined* MapAreaList::LoadData() {
        Js5ResourceProvider* pJVar1;
        bool bVar2;
        char cVar3;
        uint uVar4;
        undefined* puVar5;
        undefined* puVar6;
        uint* puVar7;
        PacketT* pPVar8;
        PacketT* pPVar9;
        MapArea* this_00;
        ulong uVar10;
        ulong uVar11;
        undefined** ppuVar12;
        MapArea* pMVar13;
        uint uVar14;
        MapArea* pMVar15;
        MapArea local_1f8;
        vector local_a8[24];
        vector local_90[24];
        shared_ptr local_78;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_68[16];
        Array<MapArea, eastl::allocator>* local_58;
        uint local_4c;
        MapArea* local_40;
        Js5Index* local_38;

        local_58 = (Array<MapArea, eastl::allocator>*)&field_8;
        cVar3 = local_58->empty();
        if (cVar3 == '\0') {
            puVar6 = DataStatus::READY;
        } else {
            local_38 = (Js5Index*)0;
            puVar5 = (undefined*)(*(code*)field_0->field_0[4])(field_0, &local_38, Js5Archive::JS5_WORLDMAPDATA);
            puVar6 = DataStatus::NOTLOADED;
            if (puVar5 != DataStatus::NOTLOADED) {
                uVar4 = local_38->GetFileCount(0);
                eastl::vector<unsigned int, BucketAllocatorEASTL>::vector();
                cVar3 = local_38->IsFileListContiguous(0);
                if (cVar3 == '\0') {
                    local_38->GetFileList(local_90, 0);
                }
                local_4c = uVar4;
                if (uVar4 == 0) {
                    bVar2 = true;
                } else {
                    bVar2 = true;
                    uVar11 = 0;
                    do {
                        cVar3 = local_90->empty();
                        if (cVar3 == '\0') {
                            puVar7 = (uint*)eastl::vector<unsigned int, BucketAllocatorEASTL>::operator[](
                                (vector<unsigned int, BucketAllocatorEASTL>*)local_90, uVar11);
                            uVar10 = (ulong)*puVar7;
                        } else {
                            uVar10 = uVar11 & 4294967295;
                        }
                        puVar6 = (undefined*)(*(code*)field_0->field_0[6])(field_0, Js5Archive::JS5_WORLDMAPDATA, 0,
                                                                           uVar10, Priority::HIGH, 1);
                        if (puVar6 != DataStatus::READY) {
                            bVar2 = false;
                        }
                        uVar11 = uVar11 + 1;
                    } while (uVar4 != uVar11);
                }
                if (bVar2) {
                    eastl::vector<unsigned int, BucketAllocatorEASTL>::vector();
                    uVar4 = local_38->GetFileCount(1);
                    cVar3 = local_38->IsFileListContiguous(1);
                    if (cVar3 == '\0') {
                        local_38->GetFileList(local_a8, 1);
                    }
                    local_40 = (MapArea*)CONCAT44(local_40._4_4_, uVar4);
                    bVar2 = true;
                    if (uVar4 != 0) {
                        uVar11 = 0;
                        do {
                            cVar3 = local_a8->empty();
                            if (cVar3 == '\0') {
                                puVar7 = (uint*)eastl::vector<unsigned int, BucketAllocatorEASTL>::operator[](
                                    (vector<unsigned int, BucketAllocatorEASTL>*)local_a8, uVar11);
                                uVar10 = (ulong)*puVar7;
                            } else {
                                uVar10 = uVar11 & 4294967295;
                            }
                            puVar6 = (undefined*)(*(code*)field_0->field_0[6])(field_0, Js5Archive::JS5_WORLDMAPDATA, 1,
                                                                               uVar10, Priority::HIGH, 1);
                            if (puVar6 != DataStatus::READY) {
                                bVar2 = false;
                            }
                            uVar11 = uVar11 + 1;
                        } while (uVar4 != uVar11);
                    }
                    uVar4 = local_4c;
                    ppuVar12 = &DataStatus::NOTLOADED;
                    if (bVar2) {
                        pMVar13 = (MapArea*)(ulong)local_4c;
                        if (local_4c != (uint)local_40) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("detailsFileCount == compositeMapsFileCount",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/map/MapAreaList.cpp",
                                      86,
                                      "MapAreaList.loadData - Details (%i) and Composite Maps (%i) lists should be the "
                                      "same length");
                        }
                        local_40 = pMVar13;
                        local_58->set_max_size((ulong)pMVar13, 0);
                        if (uVar4 == 0) {
                            ppuVar12 = &DataStatus::READY;
                        } else {
                            pMVar15 = (MapArea*)0;
                            do {
                                cVar3 = local_90->empty();
                                uVar4 = (uint)pMVar15;
                                if (cVar3 == '\0') {
                                    pMVar13 = pMVar15;
                                    puVar7 = (uint*)eastl::vector<unsigned int, BucketAllocatorEASTL>::operator[](
                                        (vector<unsigned int, BucketAllocatorEASTL>*)local_90, (ulong)pMVar15);
                                    uVar14 = *puVar7;
                                } else {
                                    uVar14 = uVar4;
                                }
                                new (&local_78) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(pMVar13);
                                new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(pMVar13);
                                puVar6 =
                                    (undefined*)(((MapAreaList*)this)->field_0, &local_78, Js5Archive::JS5_WORLDMAPDATA,
                                                 0, uVar14, (Priority*)Priority::HIGH, true, false, false)
                                        ->GetFile();
                                cVar3 = local_a8->empty();
                                if (cVar3 == '\0') {
                                    puVar7 = (uint*)eastl::vector<unsigned int, BucketAllocatorEASTL>::operator[](
                                        (vector<unsigned int, BucketAllocatorEASTL>*)local_a8, (ulong)pMVar15);
                                    uVar4 = *puVar7;
                                }
                                pMVar13 = (MapArea*)local_68;
                                puVar5 = (undefined*)(((MapAreaList*)this)->field_0, (shared_ptr*)pMVar13,
                                                      Js5Archive::JS5_WORLDMAPDATA, 1, uVar4, (Priority*)Priority::HIGH,
                                                      true, false, false)
                                             ->GetFile();
                                if ((puVar6 == DataStatus::READY) && (puVar5 == DataStatus::READY)) {
                                    pJVar1 = ((MapAreaList*)this)->field_0;
                                    pPVar8 = (PacketT*)
                                        shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                            (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_78);
                                    pPVar9 = (PacketT*)
                                        shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                            (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_68);
                                    new (&local_1f8) MapArea(pJVar1, uVar14, pPVar8, pPVar9);
                                    this_00 = (MapArea*)Array<MapArea, eastl::allocator>::operator[](local_58,
                                                                                                     (ulong)pMVar15);
                                    pMVar13 = &local_1f8;
                                    MapArea::operator=(this_00, &local_1f8);
                                    local_1f8.~MapArea();
                                }
                                ppuVar12 = &DataStatus::READY;
                                local_68->~shared_ptr();
                                local_78.~shared_ptr();
                                pMVar15 = (MapArea*)((long)&pMVar15->field_0 + 1);
                            } while (local_40 != pMVar15);
                        }
                    }
                    puVar6 = *ppuVar12;
                    local_a8->~vector();
                } else {
                    puVar6 = DataStatus::NOTLOADED;
                }
                local_90->~vector();
            }
        }
        return puVar6;
    }

    // 0x1004af250, 192 bytes, placed by class name and debug map
    // MapAreaList::GetAreasByCoordinate(eastl::vector<MapArea*, BucketAllocatorEASTL>&, CoordGrid const&)
    void MapAreaList::GetAreasByCoordinate(vector* param_1, CoordGrid* param_2) {
        char cVar1;
        ObjTypeList* in_RAX;
        ObjTypeList* this_00;
        ObjTypeList* pOVar2;
        undefined1* this_01;
        ObjTypeList* local_38;

        this_01 = &field_8;
        local_38 = in_RAX;
        cVar1 = this_01->empty();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_areaList.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/map/"
                      "MapAreaList.cpp",
                      113, (char*)0);
        }
        this_00 = (ObjTypeList*)this_01->data();
        pOVar2 = (ObjTypeList*)this_01->end();
        if (this_00 != pOVar2) {
            do {
                cVar1 = this_00->IsMembersServer();
                if (cVar1 != '\0') {
                    cVar1 = this_00->ContainsSource(param_2);
                    if (cVar1 != '\0') {
                        local_38 = this_00;
                        param_1->push_back((MapArea**)&local_38);
                    }
                }
                this_00 = (ObjTypeList*)&this_00->field_336;
            } while (this_00 != pOVar2);
        }
    }

    // 0x1004af3a0, 176 bytes, placed by class name and debug map
    // MapAreaList::GetAreaByCoordinate(CoordGrid const&)
    ObjTypeList* MapAreaList::GetAreaByCoordinate(CoordGrid* param_1) {
        char cVar1;
        ObjTypeList* this_00;
        ObjTypeList* pOVar2;
        undefined1* this_01;

        this_01 = &field_8;
        cVar1 = this_01->empty();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_areaList.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/map/"
                      "MapAreaList.cpp",
                      127, (char*)0);
        }
        this_00 = (ObjTypeList*)this_01->data();
        pOVar2 = (ObjTypeList*)this_01->end();
        while (true) {
            if (this_00 == pOVar2) {
                return (ObjTypeList*)0;
            }
            cVar1 = this_00->IsMembersServer();
            if ((cVar1 != '\0') && (cVar1 = this_00->ContainsSource(param_1), cVar1 != '\0'))
                break;
            this_00 = (ObjTypeList*)&this_00->field_336;
        }
        return this_00;
    }

    // 0x1004af450, 176 bytes, placed by class name and debug map
    // MapAreaList::GetAreaByName(eastl::string const&)
    NXTPixToolkit* MapAreaList::GetAreaByName(basic_string* param_1) {
        NXTPixToolkit* this;
        NXTPixToolkit* pNVar3;
        basic_string* pbVar4;
        value_type* pvVar5;
        Array<VarValue, eastl::allocator>* this_00;

        this_00 = (Array<VarValue, eastl::allocator>*)(param_1 + 8);
        if (this_00->empty() != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_areaList.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/map/"
                      "MapAreaList.cpp",
                      142, (char*)0);
        }
        this = (NXTPixToolkit*)this_00->data();
        pNVar3 = (NXTPixToolkit*)this_00->end();
        while (true) {
            if (this == pNVar3) {
                return (NXTPixToolkit*)0;
            }
            pbVar4 = (basic_string*)GetScreen();
            pvVar5 = (value_type*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            if (eastl::operator==(pbVar4, pvVar5))
                break;
            this = (NXTPixToolkit*)&field_336;
        }
        return this;
    }

    // 0x1004af500, 144 bytes, placed by class name and debug map
    // MapAreaList::GetAreaByID(int)
    CommandLine* MapAreaList::GetAreaByID(int param_1) {
        char cVar1;
        CommandLine* this_00;
        CommandLine* pCVar3;
        undefined1* this_01;

        this_01 = &field_8;
        cVar1 = this_01->empty();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_areaList.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/map/"
                      "MapAreaList.cpp",
                      157, (char*)0);
        }
        this_00 = (CommandLine*)this_01->data();
        pCVar3 = (CommandLine*)this_01->end();
        while (true) {
            if (this_00 == pCVar3) {
                return (CommandLine*)0;
            }
            if (this_00->GetPos() == param_1)
                break;
            this_00 = (CommandLine*)&this_00[1].field_12;
        }
        return this_00;
    }

} // namespace jag::game
