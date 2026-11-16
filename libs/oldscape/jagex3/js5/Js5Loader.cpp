// libs/oldscape/jagex3/js5/Js5Loader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "Js5Loader.h"

namespace jag::oldscape::jagex3 {
    // 0x1002b7670
    unsigned long V7_Smart2(PacketJ<Array<unsigned char>>& packetJ, int arg2) {
        unsigned short uVar1;

        if (arg2 < 7) {
            uVar1 = packetJ.g2();
            return (unsigned long)uVar1;
        }
        return packetJ.gSmart2or4();
    }

    // 0x1002b7690
    unsigned long Js5Loader::Js5ForLoader::LoadIndex(PacketJ<Array<unsigned char>>&& packetJ) {
        int iVar4;
        unsigned int uVar5;
        int* piVar7;
        unsigned int* puVar8;
        long lVar9;
        uint32_t* puVar10;
        unsigned long uVar12;
        FileState* this_01;
        unsigned long uVar13;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        Array<Js5::FileState>* this_03;
        int iVar14;
        unsigned long local_b0;
        unsigned int local_a8[6];
        unsigned int local_50[2];

        auto arg1 = packetJ.GetDataPtr();
        unsigned long uVar6 = packetJ.GetTextureAtlas();
        uint32_t uVar3 = CRC32(arg1, uVar6, 4294967295);
        field_20 = uVar3;
        WindowSavedPosition local_e8;
        DecompressedHelper local_c8 = jagex3::Js5::GetUncompressedPacket(packetJ, local_e8);
        if (local_c8.field_16 == false) {
            field_24 = 4294901761;
            uVar6 = 0;
            goto LAB_1002b7c1e;
        }
        TextureAtlasReference* local_40 = (TextureAtlasReference*)local_c8.field_0;
        uint8_t bVar1 = local_c8.field_0->g1();
        uVar6 = 0;
        uVar3 = 0;
        if (2 < (uint8_t)(bVar1 - 5))
            goto LAB_1002b7c1e;
        unsigned int local_54 = (unsigned int)bVar1;
        field_24 = local_54;
        if (5 < bVar1) {
            uVar3 = local_40->g4();
        }
        field_28 = uVar3;
        uint8_t local_31 = local_40->g1();
        if (1 < local_31) {
            field_24 = 8;
            uVar6 = 0;
            goto LAB_1002b7c1e;
        }
        unsigned int local_38 = V7_Smart2((PacketJ<Array<unsigned char> _>*)local_40, local_54);
        vector<unsigned int, BucketAllocatorEASTL> local_78;
        unsigned int uVar15 = local_38;
        unsigned long local_48 = (unsigned long)local_38;
        local_78.resize_uninitialized(local_48);
        if (uVar15 == 0) {
            iVar14 = 0;
        } else {
            uVar6 = 0;
            iVar14 = 0;
            do {
                iVar4 = V7_Smart2((PacketJ<Array<unsigned char> _>*)local_40, local_54);
                piVar7 = &local_78[uVar6];
                iVar14 = iVar14 + iVar4;
                *piVar7 = iVar14;
                uVar6 = uVar6 + 1;
            } while (local_48 != uVar6);
        }
        uVar15 = iVar14 + 1;
        if (local_38 == 0) {
            uVar15 = 0;
        }
        uVar6 = (unsigned long)uVar15;
        Array<Js5::GroupState>* local_60 = (Array<Js5::GroupState>*)&field_32;
        local_60->set_max_size(uVar6, 1);
        if (local_31 == 0) {
        LAB_1002b786d:
            if (local_38 != 0) {
                uVar13 = 0;
                do {
                    puVar8 = &local_78[uVar13];
                    uVar15 = *puVar8;
                    uVar3 = local_40->g4();
                    puVar10 = (uint32_t*)(*local_60)[(unsigned long)uVar15];
                    *puVar10 = uVar3;
                    uVar13 = uVar13 + 1;
                } while (local_48 != uVar13);
            }
        } else {
            field_56.reserve(local_48);
            if (local_38 != 0) {
                uVar13 = 0;
                do {
                    puVar8 = &local_78[uVar13];
                    uVar15 = *puVar8;
                    uVar5 = local_40->g4();
                    local_a8[0] = uVar5;
                    lVar9 = (*local_60)[(unsigned long)uVar15];
                    *(unsigned int*)(lVar9 + 8) = uVar5;
                    puVar8 = &field_56[*local_a8];
                    *puVar8 = uVar15;
                    uVar13 = uVar13 + 1;
                } while (local_48 != uVar13);
                goto LAB_1002b786d;
            }
        }
        if (uVar6 == 0) {
            uVar15 = 0;
        } else {
            uVar13 = 0;
            uVar12 = 0;
            do {
                puVar8 = &local_78[uVar12];
                if (uVar13 == *puVar8) {
                    uVar3 = local_40->g4();
                    lVar9 = (*local_60)[uVar13];
                    *(uint32_t*)(lVar9 + 4) = uVar3;
                    uVar12 = (unsigned long)((int)uVar12 + 1);
                } else {
                    lVar9 = (*local_60)[uVar13];
                    *(uint32_t*)(lVar9 + 4) = 4294967295;
                }
                uVar15 = (unsigned int)uVar12;
                uVar13 = uVar13 + 1;
            } while (uVar6 != uVar13);
        }
        if (uVar15 != local_38) {
            LogAssert("groupIndex == numGroups",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/"
                      "Js5Loader.cpp",
                      103, nullptr);
        }
        eastl::destruct<highlight::NpcUID*>(&local_90);
        new (local_a8) eastl::vector<unsigned int, BucketAllocatorEASTL>(local_48, local_90);
        local_50->destruct<highlight::NpcUID*>();
        eastl local_90(10000, *local_50);
        local_a8->resize_uninitialized(local_48);
        if (local_38 != 0) {
            uVar6 = 0;
            do {
                uVar15 = local_40->g2();
                puVar8 = (unsigned int*)(*local_a8)[uVar6];
                *puVar8 = uVar15 & 65535;
                uVar6 = uVar6 + 1;
            } while (local_48 != uVar6);
            uVar6 = 0;
            do {
                puVar8 = &local_78[uVar6];
                lVar9 = (*local_60)[(unsigned long)*puVar8];
                puVar8 = (unsigned int*)(*local_a8)[uVar6];
                uVar13 = (unsigned long)*puVar8;
                local_90.resize_uninitialized(uVar13);
                local_b0 = uVar6;
                if (uVar13 == 0) {
                    iVar14 = 0;
                } else {
                    uVar6 = 0;
                    iVar14 = 0;
                    do {
                        iVar4 = V7_Smart2((PacketJ<Array<unsigned char> _>*)local_40, local_54);
                        piVar7 = &local_90[uVar6];
                        iVar14 = iVar14 + iVar4;
                        *piVar7 = iVar14;
                        uVar6 = uVar6 + 1;
                    } while (uVar13 != uVar6);
                }
                uVar6 = (unsigned long)(iVar14 + 1);
                this_03 = (Array<Js5::FileState>*)(lVar9 + 48);
                this_03->set_max_size(uVar6, 3);
                if (uVar6 != 0) {
                    uVar13 = 0;
                    uVar15 = 0;
                    do {
                        puVar8 = &local_90[(unsigned long)uVar15];
                        if (uVar13 == *puVar8) {
                            lVar9 = (*this_03)[uVar13];
                            *(uint64_t*)(lVar9 + 8) = 0;
                            uVar15 = uVar15 + 1;
                        } else {
                            lVar9 = (*this_03)[uVar13];
                            *(uint64_t*)(lVar9 + 8) = 18446744073709551615;
                        }
                        uVar13 = uVar13 + 1;
                    } while (uVar6 != uVar13);
                }
                uVar6 = local_b0 + 1;
            } while (uVar6 != local_48);
        }
        if ((local_31 != 0) && (local_38 != 0)) {
            uVar6 = 0;
            do {
                puVar8 = &local_78[uVar6];
                lVar9 = (*local_60)[(unsigned long)*puVar8];
                this_02 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(lVar9 + 48);
                uVar13 = this_02->end();
                ((lVar9 + 72))->reserve(uVar13);
                if (this_02->end() != 0) {
                    uVar15 = 1;
                    uVar13 = 0;
                    do {
                        this_01 = (FileState*)(*this_02)[uVar13];
                        if (this_01->IsInvalid() == '\0') {
                            local_50[0] = local_40->g4();
                            *(unsigned int*)this_01 = local_50[0];
                            piVar7 = (int*)(*((lVar9 + 72)))[*local_50];
                            *piVar7 = uVar15 - 1;
                        }
                        uVar13 = (unsigned long)uVar15;
                        uVar12 = this_02->end();
                        uVar15 = uVar15 + 1;
                    } while (uVar13 < uVar12);
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 != local_48);
        }
        TextureAtlasReference* this_00 = local_40;
        uVar6 = local_40->size();
        uVar13 = this_00->GetTextureAtlas();
        uVar6 = (((uint64_t)((int64_t)((unsigned long)this_00 >> 8)) << 8) | (uint8_t)(uVar6 <= uVar13));
    LAB_1002b7c1e:
        return uVar6 & 4294967295;
    }

    // 0x1002b80e0
    void Js5Loader::Js5ForLoader::SetGroupData(Js5GroupId js5GroupId,
                                               shared_ptr<PacketJ<Array<unsigned char>>>&& packetJ) {
        uint64_t uVar1;

        long lVar3 = field_32[(unsigned long)js5GroupId];
        (*((lVar3 + 32))) = packetJ;
        if (packetJ != nullptr) {
            uVar1 =
                ((hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)packetJ.operator->())
                    ->size();
            *(uint64_t*)(lVar3 + 16) = uVar1;
        }
        *(uint8_t*)(lVar3 + 24) = 1;
    }

    // 0x1002b8130
    uint8_t* Js5Loader::GetOrQueueGroupData(Js5ArchiveId js5ArchiveId, Js5GroupId js5GroupId,
                                            const Js5RequestParameters& js5RequestParameters) {
        shared_ptr<configdecoder::ObjType>* objType;
        Js5GroupId local_34;

        int iVar2 = field_8.end();
        if (((int)js5ArchiveId < iVar2) && (js5GroupId != 4294967295)) {
            objType = &field_8[(unsigned long)js5ArchiveId];
            if (!*objType == nullptr) {
                local_34 = js5GroupId;
                return (uint8_t*)QueueGroupKey(js5ArchiveId, js5RequestParameters);
            }
        }
        return DataStatus::MISSING;
    }

    // 0x1002b8230
    uint8_t* Js5Loader::QueueGroupKey(const Js5RequestKey& js5RequestKey,
                                      const Js5RequestParameters& js5RequestParameters) {
        long lVar2;
        list_map_iterator<eastl::pair<Js5RequestKey const, Js5RequestParameters>,
                          eastl::pair<Js5RequestKey const, Js5RequestParameters> const*,
                          eastl::pair<Js5RequestKey const, Js5RequestParameters> const&>* local_50;

        uint8_t* js5RequestKey_00 = field_32;
        ReturnValue local_38 = eastl::list_map<Js5RequestKey, Js5RequestParameters>::find(*js5RequestKey_00);
        auto local_48 = js5RequestKey_00->end();
        bool cVar1 = local_38 == local_48;
        if ((cVar1) || (lVar2 = *local_38, *(int*)(lVar2 + 8) < *(int*)js5RequestParameters)) {
            local_48 = js5RequestKey_00->end();
            cVar1 = local_38 != local_48;
            if (cVar1) {
                lVar2 = *local_38;
                if ((*(uint8_t*)(lVar2 + 9) & 1) != 0) {
                    return DataStatus::NOTLOADED;
                }
                if (*(int*)js5RequestParameters != 1) {
                    LogAssert("params.m_priority == Js5FetchPriority::URGENT",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                              "js5/Js5Loader.cpp",
                              215, nullptr);
                }
                new (&local_50) eastl::ListIterator(&local_38);
                local_48 = js5RequestKey_00->erase(local_50);
            }
            if (*(int*)js5RequestParameters == 1) {
                (*this->_vptr[1]._x7e___2)(this, js5RequestKey, js5RequestParameters);
            }
            if (*(int*)js5RequestParameters == 1) {
                cVar1 = js5RequestKey_00->push_front(js5RequestKey, js5RequestParameters);
            } else {
                cVar1 = js5RequestKey_00->push_back(js5RequestKey, js5RequestParameters);
            }
            if (!cVar1) {
                LogAssert("bQueued",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/"
                          "Js5Loader.cpp",
                          237, nullptr);
            }
        }
        return DataStatus::NOTLOADED;
    }

    // 0x1002b8520
    void Js5Loader::PrefetchFile(Js5ArchiveId js5ArchiveId) {
        shared_ptr<Js5>* this_00;
        Animation* this_01;
        int arg1;
        uint32_t local_44;
        uint32_t local_40;
        int local_34;

        int iVar2 = field_8.end();
        if ((int)js5ArchiveId < iVar2) {
            this_00 = &field_8[(unsigned long)js5ArchiveId];
            this_01 = (Animation*)**this_00;
            iVar2 = this_01->GetRT5FrameCount();
            if (0 < iVar2) {
                arg1 = 0;
                do {
                    if (this_01->GetGroupIsValid(arg1) != '\0') {
                        local_34 = arg1;
                        local_44 = this_01->GetGroupCrcInIndex(arg1);
                        local_40 = this_01->GetGroupVersionInIndex(arg1);
                        QueueGroupKey(js5ArchiveId, 0);
                    }
                    arg1 = arg1 + 1;
                } while (iVar2 != arg1);
            }
        }
    }

    // 0x1002b85e0
    void Js5Loader::UpdateCacheHint(Js5ArchiveId js5ArchiveId, Js5GroupId js5GroupId) {
        long lVar2;
        ReturnValue local_50;
        list_map_iterator<eastl::pair<Js5RequestKey const, Js5RequestParameters>,
                          eastl::pair<Js5RequestKey const, Js5RequestParameters> const*,
                          eastl::pair<Js5RequestKey const, Js5RequestParameters> const&>* local_48;
        uint32_t local_38;
        uint8_t local_30[8];

        uint8_t* js5RequestKey = field_32;
        local_30._0_4_ = js5ArchiveId;
        local_30._4_4_ = js5GroupId;
        *((local_30 + 8)) = eastl::list_map<Js5RequestKey, Js5RequestParameters>::find(*js5RequestKey);
        auto local_40 = js5RequestKey->end();
        if ((*((local_30 + 8))) != local_40 != '\0') {
            lVar2 = *(*((local_30 + 8)));
            if ((*(uint8_t*)(lVar2 + 8) & 1) == 0) {
                lVar2 = *(*((local_30 + 8)));
                if ((*(uint8_t*)(lVar2 + 9) & 1) == 0) {
                    lVar2 = *(*((local_30 + 8)));
                    local_38 = *(uint32_t*)(lVar2 + 16);
                    local_40._4_4_ = (uint32_t)((unsigned long)*(uint64_t*)(lVar2 + 8) >> 32);
                    local_40._0_4_ = 1;
                    new (&local_48) eastl::ListIterator((local_30 + 8));
                    local_50 = js5RequestKey->erase(local_48);
                    js5RequestKey->push_front(*local_30, local_40);
                } else {
                    lVar2 = *(*((local_30 + 8)));
                    *(uint32_t*)(lVar2 + 8) = 257;
                }
            }
        }
    }

    // 0x1002b86c0
    bool Js5Loader::HasUrgentInProgress() {
        long lVar2;

        auto local_28 = field_32->begin();
        auto local_30 = field_32->end();
        uint32_t uVar1 = local_28 != local_30;
        if (((char)uVar1 != '\0') && (lVar2 = *local_28, (~*(unsigned int*)(lVar2 + 8) & 257) != 0)) {
            do {
                ++local_28;
                uVar1 = local_28 != local_30;
                if ((char)uVar1 == '\0') {
                    return uVar1;
                }
                lVar2 = *local_28;
            } while ((~*(unsigned int*)(lVar2 + 8) & 257) != 0);
        }
        return uVar1;
    }

    // 0x100c92b50: Js5Loader::~Js5Loader() has the same machine code as InlineFatalBreak()

} // namespace jag::oldscape::jagex3
