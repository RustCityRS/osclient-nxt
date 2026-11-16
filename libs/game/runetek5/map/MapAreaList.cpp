// libs/game/runetek5/map/MapAreaList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "MapAreaList.h"

namespace jag::game {
    // 0x1004aea40
    MapAreaList::MapAreaList(Js5ResourceProvider* js5ResourceProvider) : field_0(js5ResourceProvider) {}

    // 0x1004aea80
    uint8_t* MapAreaList::LoadData() {
        Js5ResourceProvider* js5ResourceProvider;
        bool bVar1;
        uint8_t uVar3;
        unsigned int uVar4;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        uint64_t extraout_var_01;
        uint8_t* puVar5;
        unsigned int* puVar6;
        uint8_t* puVar7;
        PacketT<Array<unsigned char> _>* arg3;
        PacketT<Array<unsigned char> _>* arg4;
        MapArea* this_00;
        Priority* pPVar8;
        unsigned long uVar9;
        uint8_t** ppuVar10;
        unsigned int arg4_00;
        MapArea local_1f8;
        vector<unsigned int, BucketAllocatorEASTL> local_a8;
        vector<unsigned int, BucketAllocatorEASTL> local_90;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_78;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_68;
        unsigned int local_4c;
        unsigned long local_40;
        Js5Index* local_38;

        Array<MapArea>* local_58 = (Array<MapArea>*)&field_8;
        bool cVar2 = local_58->empty();
        if (!cVar2) {
            puVar5 = DataStatus::READY;
        } else {
            local_38 = nullptr;
            uVar3 = (**(void (**)(...)) & ((Js5Index*)field_0->_vptr)->m_indexVersion)((Js5Index**)field_0,
                                                                                       (Js5ArchiveSettings*)&local_38);
            puVar5 = DataStatus::NOTLOADED;
            if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar3) != DataStatus::NOTLOADED) {
                uVar4 = local_38->GetFileCount(0);
                local_90 = eastl::vector<unsigned int, BucketAllocatorEASTL>();
                cVar2 = local_38->IsFileListContiguous(0);
                if (!cVar2) {
                    local_38->GetFileList(local_90, 0);
                }
                local_4c = uVar4;
                if (uVar4 == 0) {
                    bVar1 = true;
                } else {
                    bVar1 = true;
                    uVar9 = 0;
                    do {
                        cVar2 = local_90.empty();
                        if (!cVar2) {
                            puVar6 = &local_90[uVar9];
                            pPVar8 = (Priority*)(unsigned long)*puVar6;
                        } else {
                            pPVar8 = (Priority*)(uVar9 & 4294967295);
                        }
                        uVar3 = field_0->FileReady((unsigned int)Js5Archive::JS5_WORLDMAPDATA, 0, pPVar8,
                                                   (uint8_t)(Priority::HIGH));
                        if ((uint8_t*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar3) != DataStatus::READY) {
                            bVar1 = false;
                        }
                        uVar9 = uVar9 + 1;
                    } while (uVar4 != uVar9);
                }
                if (bVar1) {
                    local_a8 = eastl::vector<unsigned int, BucketAllocatorEASTL>();
                    uVar4 = local_38->GetFileCount(1);
                    cVar2 = local_38->IsFileListContiguous(1);
                    if (!cVar2) {
                        local_38->GetFileList(local_a8, 1);
                    }
                    local_40 = (((uint64_t)local_40._4_4_ << 32) | (uint32_t)uVar4);
                    bVar1 = true;
                    if (uVar4 != 0) {
                        uVar9 = 0;
                        do {
                            cVar2 = local_a8.empty();
                            if (!cVar2) {
                                puVar6 = &local_a8[uVar9];
                                pPVar8 = (Priority*)(unsigned long)*puVar6;
                            } else {
                                pPVar8 = (Priority*)(uVar9 & 4294967295);
                            }
                            uVar3 = field_0->FileReady((unsigned int)Js5Archive::JS5_WORLDMAPDATA, 1, pPVar8,
                                                       (uint8_t)(Priority::HIGH));
                            if ((uint8_t*)(((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar3) != DataStatus::READY) {
                                bVar1 = false;
                            }
                            uVar9 = uVar9 + 1;
                        } while (uVar4 != uVar9);
                    }
                    uVar4 = local_4c;
                    ppuVar10 = &DataStatus::NOTLOADED;
                    if (bVar1) {
                        if (local_4c != (unsigned int)local_40) {
                            LogAssert("detailsFileCount == compositeMapsFileCount",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/map/MapAreaList.cpp",
                                      86,
                                      "MapAreaList.loadData - Details (%i) and Composite Maps (%i) lists should be the "
                                      "same length");
                        }
                        local_40 = (unsigned long)local_4c;
                        local_58->set_max_size((unsigned long)local_4c, 0);
                        if (uVar4 == 0) {
                            ppuVar10 = &DataStatus::READY;
                        } else {
                            uVar9 = 0;
                            do {
                                cVar2 = local_90.empty();
                                uVar4 = (unsigned int)uVar9;
                                if (!cVar2) {
                                    puVar6 = &local_90[uVar9];
                                    arg4_00 = *puVar6;
                                } else {
                                    arg4_00 = uVar4;
                                }
                                local_78 = shared_ptr();
                                local_68 = shared_ptr();
                                puVar5 =
                                    (uint8_t*)field_0->GetFile(local_78, *(Js5Archive::JS5_WORLDMAPDATA), 0, arg4_00,
                                                               (Priority*)Priority::HIGH, true, false, false);
                                cVar2 = local_a8.empty();
                                if (!cVar2) {
                                    puVar6 = &local_a8[uVar9];
                                    uVar4 = *puVar6;
                                }
                                puVar7 = (uint8_t*)field_0->GetFile(local_68, *(Js5Archive::JS5_WORLDMAPDATA), 1, uVar4,
                                                                    (Priority*)Priority::HIGH, true, false, false);
                                if ((puVar5 == DataStatus::READY) && (puVar7 == DataStatus::READY)) {
                                    js5ResourceProvider = field_0;
                                    arg3 = (PacketT<Array<unsigned char> _>*)*local_78;
                                    arg4 = (PacketT<Array<unsigned char> _>*)*local_68;
                                    local_1f8 = MapArea(js5ResourceProvider, arg4_00, arg3, arg4);
                                    this_00 = (MapArea*)(*local_58)[uVar9];
                                    *this_00 = local_1f8;
                                }
                                ppuVar10 = &DataStatus::READY;
                                uVar9 = uVar9 + 1;
                            } while (local_40 != uVar9);
                        }
                    }
                    puVar5 = *ppuVar10;
                } else {
                    puVar5 = DataStatus::NOTLOADED;
                }
            }
        }
        return puVar5;
    }

    // 0x1004af250
    void MapAreaList::GetAreasByCoordinate(eastl::vector<MapArea*, BucketAllocatorEASTL>& mapAreas,
                                           const CoordGrid& coordGrid) {
        ObjTypeList* in_RAX;

        uint8_t* this_01 = &field_8;
        ObjTypeList* local_38 = in_RAX;
        if (this_01->empty()) {
            LogAssert("!m_areaList.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/map/"
                      "MapAreaList.cpp",
                      113, nullptr);
        }
        auto this_00 = this_01->data();
        auto pOVar2 = this_01->end();
        if (this_00 != pOVar2) {
            do {
                if (this_00->IsMembersServer()) {
                    if (this_00->ContainsSource(coordGrid)) {
                        local_38 = this_00;
                        mapAreas.push_back(local_38);
                    }
                }
                this_00 = (ObjTypeList*)&this_00->field_336;
            } while (this_00 != pOVar2);
        }
    }

    // 0x1004af3a0
    MapArea* MapAreaList::GetAreaByCoordinate(const CoordGrid& coordGrid) {
        uint8_t* this_01 = &field_8;
        bool cVar1 = this_01->empty();
        if (cVar1) {
            LogAssert("!m_areaList.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/map/"
                      "MapAreaList.cpp",
                      127, nullptr);
        }
        auto this_00 = this_01->data();
        auto pOVar2 = this_01->end();
        while (true) {
            if (this_00 == pOVar2) {
                return nullptr;
            }
            cVar1 = this_00->IsMembersServer();
            if ((cVar1) && (cVar1 = this_00->ContainsSource(coordGrid), cVar1))
                break;
            this_00 = (ObjTypeList*)&this_00->field_336;
        }
        return (MapArea*)this_00;
    }

    // 0x1004af450
    NXTPixToolkit* MapAreaList::GetAreaByName(const eastl::string& str) {
        basic_string<char, BucketAllocatorEASTL>* str_00;
        value_type* value_type;

        uint8_t* this_01 = &field_8;
        if (this_01->empty() != '\0') {
            LogAssert("!m_areaList.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/map/"
                      "MapAreaList.cpp",
                      142, nullptr);
        }
        auto this_00 = this_01->data();
        auto pNVar3 = this_01->end();
        while (true) {
            if (this_00 == pNVar3) {
                return nullptr;
            }
            str_00 = (basic_string<char, BucketAllocatorEASTL>*)this_00->GetScreen();
            value_type = (value_type*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            if (*str_00 == *value_type)
                break;
            this_00 = (NXTPixToolkit*)(this_00->m_screen + 320);
        }
        return this_00;
    }

    // 0x1004af500
    CommandLine* MapAreaList::GetAreaByID(int arg1) {
        uint8_t* this_01 = &field_8;
        if (this_01->empty() != '\0') {
            LogAssert("!m_areaList.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/map/"
                      "MapAreaList.cpp",
                      157, nullptr);
        }
        auto this_00 = this_01->data();
        auto pCVar3 = this_01->end();
        while (true) {
            if (this_00 == pCVar3) {
                return nullptr;
            }
            if (this_00->GetPos() == arg1)
                break;
            this_00 = (CommandLine*)&this_00[1].field_12;
        }
        return this_00;
    }

} // namespace jag::game
