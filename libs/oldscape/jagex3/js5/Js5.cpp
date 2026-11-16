// libs/oldscape/jagex3/js5/Js5.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "Js5.h"

namespace jag::oldscape::jagex3 {
    // 0x1000782e0: Js5::FileState::~FileState() has the same machine code as MinimapElement::~MinimapElement()

    // 0x10012e0e0: Js5::FileState::FileState() has the same machine code as InterfaceMouseEvent::InterfaceMouseEvent()

    // 0x1002b5b90
    Js5::DecompressedHelper::~DecompressedHelper() {
        if (field_0->IsValid() != '\0') {
            field_0->SetPos(field_8);
        }
    }

    // 0x1002b5bd0
    DecompressedHelper Js5::GetUncompressedPacket(PacketJ<Array<unsigned char>>& packetJ1,
                                                  PacketJ<Array<unsigned char>>& packetJ2) {
        unsigned int uVar2;
        long lVar4;
        long lVar5;
        bool arg3;
        VBOMapper local_60;
        void* local_40;
        int local_34;

        unsigned long uVar3 = packetJ1.size();
        if (packetJ1.g1() == '\0') {
            uVar2 = packetJ1.g4();
            uVar3 = (unsigned long)uVar2;
            packetJ2.Reserve(uVar3);
            local_40 = (void*)packetJ2.GetDataPtr();
            lVar4 = packetJ1.GetDataPtr();
            lVar5 = packetJ1.size();
            _memcpy(local_40, (void*)(lVar4 + lVar5), uVar3);
            arg3 = true;
        } else {
            packetJ1.SetPos(uVar3);
            local_60 = Js5Compression::Decompress(packetJ1, local_34);
            packetJ2 = local_60;
            uVar3 = packetJ2.GetTextureAtlas();
            arg3 = local_34 == 0;
        }
        return DecompressedHelper(packetJ2, uVar3, arg3);
    }

    // 0x1002b5ce0
    GroupState* Js5::UnpackGroupData(Js5::GroupState& groupState, const std::array<int, 4ul>* arg2) {
        uint8_t bVar1;
        bool bVar2;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        GroupState* pGVar3;
        bool bVar6;
        int iVar7;
        unsigned int uVar8;
        uint8_t** ppuVar9;
        long lVar10;
        unsigned long uVar11;
        FileState* pFVar12;
        WindowSavedPosition* this_01;
        int* piVar13;
        PacketJ<Array<unsigned char> _>* packetJ;
        long lVar14;
        long* plVar15;
        unsigned long* arg1;
        uint64_t* puVar16;
        uint64_t uVar17;
        PacketT<Array<unsigned char>>* pPVar18;
        GroupState* pGVar19;
        GroupState* pGVar20;
        WindowSavedPosition* this_03;
        unsigned long uVar22;
        WindowSavedPosition local_108;
        WindowSavedPosition local_e8;
        DecompressedHelper local_c8;
        ReturnValue local_b0;
        long local_98;
        ReturnValue local_90;
        unsigned long local_78;
        unsigned long local_70;
        unsigned long local_68;
        GroupState* local_60;
        unsigned int local_4c;
        GroupState* local_48;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_40;
        char local_31;

        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_58 =
            (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&groupState.field_32;
        unsigned int uVar21 = 0;
        bool bVar4 = *local_58 == nullptr;
        if (bVar4) {
            ppuVar9 = &DataStatus::NOTLOADED;
        } else {
            local_40 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&groupState.field_48;
            local_60 = (GroupState*)arg2;
            local_48 = groupState;
            lVar10 = local_40->end();
            this_00 = local_40;
            bVar2 = true;
            bVar4 = true;
            if (lVar10 != 0) {
                uVar21 = 0;
                uVar11 = 0;
                uVar22 = 1;
                do {
                    pFVar12 = (FileState*)(*this_00)[uVar11];
                    if (!(pFVar12->IsInvalid())) {
                        uVar21 = uVar21 + 1;
                        lVar10 = (*this_00)[uVar11];
                        bVar6 = (*((lVar10 + 16))) == nullptr;
                        bVar4 = bVar2;
                        if (bVar6) {
                            bVar4 = false;
                            bVar2 = bVar4;
                        }
                    }
                    uVar11 = this_00->end();
                    bVar6 = uVar22 < uVar11;
                    uVar11 = uVar22;
                    uVar22 = (unsigned long)((int)uVar22 + 1);
                } while (bVar6);
            }
            pGVar19 = local_60;
            if (!bVar4) {
                this_03 = &local_108;
                new (this_03) PacketJ();
                this_01 = (WindowSavedPosition*)local_58->end();
                this_01->SetPos(*(unsigned long*)((long)&local_48->field_9 + 7));
                if (((*(char*)((long)&local_48->field_17 + 7) != '\0') && (pGVar19 != nullptr)) &&
                    ((piVar13 = pGVar19->at(0),
                      *piVar13 != 0 ||
                          (((piVar13 = pGVar19->at(1), *piVar13 != 0 || (piVar13 = pGVar19->at(2), *piVar13 != 0)) ||
                            (piVar13 = pGVar19->at(3), *piVar13 != 0)))))) {
                    if (!(local_58->unique())) {
                        packetJ = (PacketJ<Array<unsigned char> _>*)**local_58;
                        *this_03 = *packetJ;
                    } else {
                        *(uint8_t*)((long)&local_48->field_17 + 7) = 0;
                        this_03 = this_01;
                    }
                    uVar11 = ((TextureAtlasReference*)(*local_58).operator->())->GetTextureAtlas();
                    this_03->tinyKeyDecrypt(*pGVar19, 5, uVar11);
                    this_01 = this_03;
                }
                local_e8 = PacketJ();
                GetUncompressedPacket(&local_c8, (PacketJ<Array<unsigned char> _>*)this_01,
                                      (PacketJ<Array<unsigned char> _>*)&local_e8);
                local_31 = local_c8.field_16;
                if (local_c8.field_16 == false) {
                    pGVar19 = (GroupState*)DataStatus::MISSING;
                } else {
                    local_60 = (GroupState*)local_40->end();
                    local_48 = (GroupState*)local_c8.field_0;
                    if (uVar21 < 2) {
                        lVar10 = local_c8.field_0->GetDataPtr();
                        pPVar18 = (PacketT<Array<unsigned char>>*)(*local_58).operator->();
                        lVar14 = pPVar18->GetDataPtr();
                        pGVar19 = (GroupState*)((long)&local_60[53687091].field_9 + 6);
                        uVar17 = local_48->size();
                        uVar11 = (unsigned long)pGVar19 & 4294967295;
                        if (lVar10 == lVar14) {
                            lVar10 = (*local_40)[uVar11];
                            *(uint64_t*)(lVar10 + 8) = uVar17;
                            lVar10 = (*local_40)[uVar11];
                            (*((lVar10 + 16))) = *local_58;
                        } else {
                            lVar10 = (*local_40)[uVar11];
                            *(uint64_t*)(lVar10 + 8) = uVar17;
                            make_shared<PacketJ<Array<unsigned char>>, PacketJ<Array<unsigned char>>>(
                                &local_90, (PacketJ<Array<unsigned char> _>*)local_48);
                            lVar10 = (*local_40)[uVar11];
                            (*((lVar10 + 16))) = local_90;
                        }
                    } else {
                        lVar10 = local_c8.field_0->GetTextureAtlas();
                        lVar14 = local_c8.field_0->GetDataPtr();
                        bVar1 = *(uint8_t*)(lVar14 + lVar10 - 1);
                        local_98 = local_c8.field_0->GetDataPtr();
                        uVar8 = (unsigned int)bVar1;
                        uVar11 = (lVar10 - 1) - (unsigned long)(uVar21 * uVar8 * 4);
                        local_70 = local_c8.field_0->size();
                        local_c8.field_0->SetPos(uVar11);
                        local_78 = uVar11;
                        local_4c = uVar8;
                        eastl::destruct<highlight::NpcUID*>(&local_b0);
                        local_90 = eastl::vector<unsigned long, BucketAllocatorEASTL>((unsigned long)uVar21, local_b0);
                        pGVar19 = (GroupState*)local_c8.field_0;
                        if (local_4c != 0) {
                            local_68 = 0;
                            do {
                                pGVar19 = nullptr;
                                uVar11 = 0;
                                do {
                                    iVar7 = local_48->g4();
                                    plVar15 = &local_90[(unsigned long)pGVar19];
                                    uVar11 = (unsigned long)(unsigned int)((int)uVar11 + iVar7);
                                    *plVar15 = *plVar15 + uVar11;
                                    pGVar19 = (GroupState*)((long)pGVar19 + 1);
                                } while ((GroupState*)(unsigned long)uVar21 != pGVar19);
                                uVar8 = (int)local_68 + 1;
                                local_68 = (unsigned long)uVar8;
                            } while (uVar8 != local_4c);
                        }
                        pGVar20 = local_48;
                        if (local_60 != nullptr) {
                            pGVar19 = nullptr;
                            uVar21 = 1;
                            uVar8 = 0;
                            do {
                                pFVar12 = (FileState*)(*local_40)[(unsigned long)pGVar19];
                                if (!(pFVar12->IsInvalid())) {
                                    arg1 = &local_90[(unsigned long)uVar8];
                                    make_shared<PacketJ<Array<unsigned char>>, unsigned long&>(&local_b0, arg1);
                                    lVar10 = (*local_40)[(unsigned long)pGVar19];
                                    (*((lVar10 + 16))) = local_b0;
                                    puVar16 = &local_90[(unsigned long)uVar8];
                                    *puVar16 = 0;
                                    uVar8 = uVar8 + 1;
                                    pGVar20 = local_48;
                                }
                                pGVar19 = (GroupState*)(unsigned long)uVar21;
                                uVar21 = uVar21 + 1;
                            } while (pGVar19 < local_60);
                        }
                        pGVar20->SetPos(local_78);
                        if ((char)local_4c != '\0') {
                            local_98 = local_98 + local_70;
                            local_70 = local_70 & 18446744069414584320;
                            local_78 = local_78 & 18446744069414584320;
                            do {
                                if (local_60 != nullptr) {
                                    uVar21 = 0;
                                    local_68 = local_68 & 18446744069414584320;
                                    pGVar20 = nullptr;
                                    pGVar3 = (GroupState*)&DAT_00000001;
                                    do {
                                        pGVar19 = pGVar3;
                                        pFVar12 = (FileState*)(*local_40)[(unsigned long)pGVar20];
                                        if (!(pFVar12->IsInvalid())) {
                                            iVar7 = local_48->g4();
                                            lVar10 = (*local_40)[(unsigned long)pGVar20];
                                            pPVar18 = (PacketT<Array<unsigned char>>*)(*((lVar10 + 16))).operator->();
                                            lVar10 = pPVar18->GetDataPtr();
                                            uVar11 = local_68 & 4294967295;
                                            plVar15 = &local_90[uVar11];
                                            uVar21 = iVar7 + uVar21;
                                            _memcpy((void*)(lVar10 + *plVar15),
                                                    (void*)((local_78 & 4294967295) + local_98), (unsigned long)uVar21);
                                            plVar15 = &local_90[uVar11];
                                            *plVar15 = *plVar15 + (unsigned long)uVar21;
                                            local_78 =
                                                (((uint64_t)local_78._4_4_ << 32) | (uint32_t)((int)local_78 + uVar21));
                                            local_68 =
                                                (((uint64_t)local_68._4_4_ << 32) | (uint32_t)((int)local_68 + 1));
                                        }
                                        pGVar20 = pGVar19;
                                        pGVar3 = (GroupState*)(unsigned long)((int)pGVar19 + 1);
                                    } while (pGVar19 < local_60);
                                }
                                uVar21 = (int)local_70 + 1;
                                local_70 = (((uint64_t)local_70._4_4_ << 32) | (uint32_t)uVar21);
                            } while (uVar21 != local_4c);
                        }
                    }
                }
                if (local_31 != '\0') {
                    if (field_96 != false) {
                        local_58->reset();
                    }
                    pGVar19 = (GroupState*)DataStatus::READY;
                }
                return pGVar19;
            }
            ppuVar9 = &DataStatus::READY;
        }
        return (GroupState*)*ppuVar9;
    }

    // 0x1002b66e0
    uint32_t Js5::GetGroupId(const char* str) const {
        uint32_t uVar1;

        core::stringtools::general::CP1252Tools::ComputeLowerCp1252HashFromUtf8(str);
        long lVar2 = eastl::vector_map<unsigned int, unsigned int>::find(field_56);
        long lVar3 = field_56.end();
        if (lVar2 == lVar3) {
            uVar1 = 4294967295;
        } else {
            uVar1 = *(uint32_t*)(lVar2 + 4);
        }
        return uVar1;
    }

    // 0x1002b6760
    uint32_t Js5::GetFileId(int arg1, const char* str) const {
        long lVar3;
        long lVar4;
        GroupState* local_20;
        uint32_t local_14;

        auto puVar2 = CheckAndLookupGroupId(local_20, arg1);
        uint32_t uVar1 = 4294967295;
        if (puVar2 == DataStatus::READY) {
            local_14 = core::stringtools::general::CP1252Tools::ComputeLowerCp1252HashFromUtf8(str);
            lVar3 = eastl::vector_map<unsigned int, unsigned int>::find(local_20->field_72);
            lVar4 = local_20->field_72.end();
            if (lVar3 == lVar4) {
                uVar1 = 4294967295;
            } else {
                uVar1 = *(uint32_t*)(lVar3 + 4);
            }
        }
        return uVar1;
    }

    // 0x1002b67d0
    uint8_t* Js5::GetGroupList(eastl::vector<int, BucketAllocatorEASTL>& arg1) const {
        bool bVar1;
        uint64_t in_RAX;
        unsigned long arg1_00;
        unsigned long arg1_01;
        unsigned long uVar4;

        uint64_t uStack_38 = in_RAX;
        auto puVar3 = GetIndexIsLoaded();
        if (puVar3 == DataStatus::READY) {
            arg1_00 = field_32.end();
            arg1.reserve(arg1_00);
            arg1.clear();
            if (arg1_00 != 0) {
                arg1_01 = 0;
                uVar4 = 1;
                do {
                    if (((GroupState*)field_32[arg1_01])->IsInvalid() == '\0') {
                        uStack_38 = (((uint64_t)((int)uVar4 - 1) << 32) | (uint32_t)((uint32_t)uStack_38));
                        arg1.push_back(*((int*)((long)&uStack_38 + 4)));
                    }
                    bVar1 = uVar4 < arg1_00;
                    arg1_01 = uVar4;
                    uVar4 = (unsigned long)((int)uVar4 + 1);
                } while (bVar1);
            }
            puVar3 = DataStatus::READY;
        }
        return puVar3;
    }

    // 0x1002b68c0
    uint8_t* Js5::GetFileList(eastl::vector<int, BucketAllocatorEASTL>& arg1, int arg2) const {
        bool bVar1;
        unsigned long arg1_00;
        unsigned long arg1_01;
        unsigned long uVar4;
        GroupState* local_40;

        auto puVar3 = GetIndexIsLoaded();
        uint8_t** ppuVar5 = &DataStatus::READY;
        if (puVar3 == DataStatus::READY) {
            puVar3 = (uint8_t*)CheckAndLookupGroupId(local_40, arg2);
            if (puVar3 == DataStatus::READY) {
                arg1_00 = local_40->field_48.end();
                if (arg1_00 == 0) {
                    ppuVar5 = &DataStatus::NOTLOADED;
                } else {
                    arg1.reserve(arg1_00);
                    arg1.clear();
                    arg1_01 = 0;
                    uVar4 = 1;
                    do {
                        if (((FileState*)local_40->field_48[arg1_01])->IsInvalid() == '\0') {
                            arg1.push_back((int)uVar4 - 1);
                        }
                        bVar1 = uVar4 < arg1_00;
                        arg1_01 = uVar4;
                        uVar4 = (unsigned long)((int)uVar4 + 1);
                    } while (bVar1);
                }
                puVar3 = *ppuVar5;
            }
        }
        return puVar3;
    }

    // 0x1002b6a10
    void Js5::FetchFile(shared_ptr<PacketJ<Array<unsigned char>>>& packetJ, int arg2, bool arg3) {
        GroupState* in_RAX;
        long lVar2;
        Js5FileId js5FileId;

        GroupState* local_38 = in_RAX;
        auto puVar1 = GetIndexIsLoaded();
        if (puVar1 == DataStatus::READY) {
            lVar2 = field_32.end();
            if (lVar2 == 1) {
                js5FileId = arg2;
                arg2 = 0;
            } else {
                puVar1 = (uint8_t*)CheckAndLookupGroupId(local_38, arg2);
                if (puVar1 != DataStatus::READY) {
                    return;
                }
                lVar2 = local_38->field_48.end();
                if (lVar2 != 1) {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "jagex3/js5/Js5.cpp",
                                    329, "Attempting to load id %d from js5 %d, but that was ambiguous!",
                                    (unsigned long)(unsigned int)arg2, (unsigned long)field_16);
                }
                js5FileId = 0;
            }
            FetchFile(packetJ, arg2, js5FileId, nullptr, arg3);
        }
    }

    // 0x1002b6ae0
    uint8_t* Js5::FetchFile(shared_ptr<PacketJ<Array<unsigned char>>>& packetJ, Js5GroupId js5GroupId,
                            Js5FileId js5FileId, std::array<int, 4ul>* arg4, bool arg5) {
        shared_ptr<midi2::MidiPlayerMainThread>* packetJ_00;
        FileState* pFVar1;
        uint8_t uVar3;
        uint8_t* puVar5;
        uint64_t extraout_var;
        uint8_t** ppuVar6;
        uint32_t in_register_00000089;
        GroupState* local_70;
        FileState* local_68;
        shared_ptr<midi2::MidiPlayerMainThread>* local_60;
        uint32_t local_58;
        uint32_t local_54;
        int local_50;
        FileState* local_40;

        uint32_t local_38 = (((uint32_t)in_register_00000089 << 8) | (uint8_t)arg5);
        uint8_t local_31 = field_97 != false;
        unsigned long uVar4 = field_32.end();
        if ((unsigned long)(long)(int)js5GroupId < uVar4) {
            puVar5 = (uint8_t*)CheckAndLookupGroupIdAndFileId(local_70, local_68, js5GroupId, js5FileId);
            if (puVar5 == DataStatus::READY) {
                local_40 = local_68;
                local_60 = (shared_ptr<midi2::MidiPlayerMainThread>*)&local_68->field_16;
                if (*local_60 == nullptr) {
                    puVar5 = (uint8_t*)UnpackGroupData(*local_70, arg4);
                    local_58 = 1;
                    local_54 = *(uint32_t*)local_70;
                    local_50 = local_70->field_4;
                    if (puVar5 == DataStatus::NOTLOADED) {
                        uVar3 = field_8->GetOrQueueGroupData((Js5ArchiveId)field_8, field_16,
                                                             (Js5RequestParameters*)js5GroupId);
                        if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar3) == DataStatus::READY) {
                            puVar5 = (uint8_t*)UnpackGroupData(*local_70, arg4);
                        }
                    }
                }
                packetJ_00 = local_60;
                ppuVar6 = &DataStatus::NOTLOADED;
                if (puVar5 == DataStatus::READY) {
                    if (*local_60 != nullptr) {
                        local_31 = local_31 & ((uint8_t)local_38 ^ 1);
                        if (local_31 == 0) {
                            packetJ = *packetJ_00;
                        } else {
                            packetJ = *packetJ_00;
                        }
                        pFVar1 = local_40;
                        ((PacketT<Array<unsigned char>>*)packetJ.operator->())->SetPos(pFVar1->field_8);
                        ppuVar6 = &DataStatus::READY;
                    }
                }
                puVar5 = *ppuVar6;
            }
        } else {
            puVar5 = DataStatus::MISSING;
        }
        return puVar5;
    }

    // 0x1002b6ce0
    uint64_t Js5::GetIndexPercentage() const {
        if (GetIndexIsReady() == '\0') {
            (*field_8->_vptr[1]._dtor)(field_8, (unsigned long)field_16);
        }
        return 100;
    }

    // 0x1002b6d10
    int Js5::GetGroupCount() const {
        uint8_t bVar1;
        unsigned long uVar3;
        unsigned long arg1;
        int iVar4;

        uint8_t* this_01 = &field_32;
        if (this_01->end() == 0) {
            iVar4 = 0;
        } else {
            arg1 = 0;
            iVar4 = 0;
            do {
                bVar1 = ((StyleSheet*)(*this_01)[arg1])->HasParent();
                iVar4 = iVar4 + (unsigned int)bVar1;
                arg1 = arg1 + 1;
                uVar3 = this_01->end();
            } while (arg1 < uVar3);
        }
        return iVar4;
    }

    // 0x1002b6d90
    void Js5::GetGroupCountInCache() const {
        (*field_8->_vptr[1].slot0)(field_8, field_16);
    }

    // 0x1002b6db0
    uint32_t Js5::GetGroupCrcInIndex(int arg1) const {
        GroupState* local_10 = nullptr;
        auto puVar2 = CheckAndLookupGroupId(local_10, arg1);
        uint32_t uVar1 = 0;
        if (puVar2 == DataStatus::READY) {
            uVar1 = *(uint32_t*)local_10;
        }
        return uVar1;
    }

    // 0x1002b6df0
    int Js5::GetGroupVersionInIndex(int arg1) const {
        GroupState* local_10 = nullptr;
        auto puVar2 = CheckAndLookupGroupId(local_10, arg1);
        int iVar1 = 0;
        if (puVar2 == DataStatus::READY) {
            iVar1 = local_10->field_4;
        }
        return iVar1;
    }

    // 0x1002b6e30
    void Js5::UpdateCacheHint(int arg1) {
        field_8->UpdateCacheHint((Js5ArchiveId)field_8, field_16);
    }

    // 0x1002b6e50
    uint8_t* Js5::RequestGroupDownload(int arg1) {
        bool bVar1;
        bool cVar2;
        long lVar4;
        FileState* this_00;
        unsigned long uVar5;
        unsigned long arg1_00;
        uint8_t* unaff_R12;
        unsigned int uVar6;

        GroupState* local_38 = nullptr;
        auto puVar3 = CheckAndLookupGroupId(local_38, arg1);
        if (puVar3 == DataStatus::READY) {
            bVar1 = local_38->field_32 != nullptr;
            if ((!bVar1) && (lVar4 = local_38->field_48.end(), lVar4 != 0)) {
                arg1_00 = 0;
                do {
                    this_00 = &local_38->field_48[arg1_00];
                    cVar2 = this_00->IsInvalid();
                    uVar6 = 4;
                    if (!cVar2) {
                        uVar6 = 0;
                        bVar1 = this_00->field_16 == nullptr;
                        if (bVar1) {
                            field_8->GetOrQueueGroupData((Js5ArchiveId)field_8, field_16, (Js5RequestParameters*)arg1);
                            uVar6 = 1;
                            unaff_R12 = DataStatus::NOTLOADED;
                        }
                    }
                    if ((uVar6 & 3) != 0) {
                        if (uVar6 != 2) {
                            return unaff_R12;
                        }
                        break;
                    }
                    arg1_00 = arg1_00 + 1;
                    uVar5 = local_38->field_48.end();
                } while (arg1_00 < uVar5);
            }
            puVar3 = DataStatus::READY;
        } else {
            puVar3 = DataStatus::MISSING;
        }
        return puVar3;
    }

    // 0x1002b6fb0
    uint8_t* Js5::RequestFullDownload() {
        unsigned long arg1;
        uint8_t* puVar4;

        unsigned int uVar2 = field_32.end();
        if (uVar2 == 0) {
            puVar4 = DataStatus::MISSING;
        } else {
            puVar4 = DataStatus::READY;
            if (0 < (int)uVar2) {
                arg1 = 0;
                do {
                    if (((GroupState*)field_32[arg1])->IsInvalid() == '\0') {
                        if ((uint8_t*)RequestGroupDownload((int)arg1) != DataStatus::READY) {
                            puVar4 = DataStatus::NOTLOADED;
                        }
                    }
                    arg1 = arg1 + 1;
                } while (uVar2 != arg1);
            }
        }
        return puVar4;
    }

    // 0x1002b7050
    uint64_t Js5::GetGroupLoadPercentage(int arg1) const {
        bool bVar1;

        GroupState* local_20 = nullptr;
        auto puVar2 = CheckAndLookupGroupId(local_20, arg1);
        uint64_t uVar3 = 0;
        if (puVar2 == DataStatus::READY) {
            bVar1 = local_20->field_32 != nullptr;
            uVar3 = 100;
            if (!bVar1) {
                uVar3 = field_8->slot6(field_16, arg1);
            }
        }
        return uVar3;
    }

    // 0x1002b70c0
    unsigned long Js5::GetDataPercent() const {
        int iVar3;
        GroupState* this_00;
        long lVar4;
        unsigned long arg1;
        long lVar5;
        unsigned long local_38;

        unsigned int uVar2 = field_32.end();
        if (uVar2 == 0) {
            local_38 = 0;
        } else {
            if ((int)uVar2 < 1) {
                local_38 = 1;
                lVar5 = 0;
            } else {
                local_38 = 1;
                arg1 = 0;
                lVar5 = 0;
                do {
                    this_00 = &field_32[arg1];
                    if (this_00->IsInvalid() == '\0') {
                        lVar4 = this_00->field_48.end();
                        iVar3 = GetGroupLoadPercentage((int)arg1);
                        lVar5 = lVar5 + (unsigned long)((long)iVar3 * lVar4 * 1000) / 100;
                        local_38 = local_38 + lVar4 * 1000;
                    }
                    arg1 = arg1 + 1;
                } while (uVar2 != arg1);
            }
            local_38 = (unsigned long)(lVar5 * 100) / local_38;
        }
        return local_38;
    }

    // 0x1002b71a0
    void Js5::UrgentFetch(int arg1) {
        RequestGroupDownload(arg1);
    }

    // 0x1002e0ca0: Js5::~Js5() has the same machine code as Js5Loader::Js5ForLoader::~Js5ForLoader()

} // namespace jag::oldscape::jagex3

namespace jag {
    // 0x1002b6550
    shared_ptr_if_not_array<oldscape::PacketJ<Array<unsigned char>>>::type
    make_shared<oldscape::PacketJ<Array<unsigned char>>, unsigned long&>(unsigned long& arg1) {
        ref_counter_shared<oldscape::PacketJ<Array<unsigned char> _> _>* ref_counter_shared;
        int local_34;
        PacketJ<Array<unsigned char> _>* local_30[2];

        auto arg1_00 = aligned_alloc(64, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::PacketJ<Array<unsigned char>>>::type result;
        } else {
            local_30[0] = placement_new<oldscape::PacketJ<Array<unsigned char>>, unsigned long&>(
                (void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_shared = placement_new<ref_counter_shared<oldscape::PacketJ<Array<unsigned char>>>, int,
                                               oldscape::PacketJ<Array<unsigned char>>*&>(arg1_00, &local_34, local_30);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x1002b6640
    shared_ptr_if_not_array<oldscape::PacketJ<Array<unsigned char>>>::type
    make_shared<oldscape::PacketJ<Array<unsigned char>>, oldscape::PacketJ<Array<unsigned char>>>(
        oldscape::PacketJ<Array<unsigned char>>&& packetJ) {
        ref_counter_shared<oldscape::PacketJ<Array<unsigned char> _> _>* ref_counter_shared;
        int local_34;
        PacketJ<Array<unsigned char> _>* local_30[2];

        auto arg1 = aligned_alloc(64, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::PacketJ<Array<unsigned char>>>::type result;
        } else {
            local_30[0] =
                placement_new<oldscape::PacketJ<Array<unsigned char>>, oldscape::PacketJ<Array<unsigned char>>>(
                    (void*)((long)arg1 + 32), packetJ);
            local_34 = 1;
            ref_counter_shared = placement_new<ref_counter_shared<oldscape::PacketJ<Array<unsigned char>>>, int,
                                               oldscape::PacketJ<Array<unsigned char>>*&>(arg1, &local_34, local_30);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag

namespace jag::oldscape::js5 {
    // 0x103c05698, set at startup by ___cxx_global_var_init.185
    Js5ArchiveSetSettings emptyArchiveSettings = Js5ArchiveSetSettings();

} // namespace jag::oldscape::js5
