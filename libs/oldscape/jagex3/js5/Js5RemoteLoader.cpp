// libs/oldscape/jagex3/js5/Js5RemoteLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "Js5RemoteLoader.h"

namespace jag::oldscape::jagex3 {
    // 0x1002bc700
    Js5RemoteLoader::Js5RemoteLoader() : Js5Loader(), field_96(local_28, local_20), field_24304(0) {
        hash<Js5RequestKey> local_28;
        equal_to<Js5RequestKey> local_20;

        field_24312.unique_ptr<true, void>();
        field_24320 = '\0';
        field_24321 = '\0';
        field_24322 = 0;
        field_24328.unique_ptr<true, void>();
        field_24336 = 4294967295;
        field_24340 = 255;
    }

    // 0x1002bc870
    Js5RemoteLoader::~Js5RemoteLoader() {
        field_24328.~unique_ptr();
        field_24312.~unique_ptr();
        field_96.~fixed_hash_map();
    }

    // 0x1002bc920
    int Js5RemoteLoader::Initialize(const Filename& filename, const Js5RemoteServerInfo* js5RemoteServerInfo) {
        Callstack local_40;

        auto local_50 = std::make_unique<Js5LocalCache, LockFreeStack<Js5RemoteRequestData>&>(field_24296);
        uint8_t* this_00 = &field_24328;
        *this_00 = local_50;
        Js5LocalCache* pJVar2 = (Js5LocalCache*)(*this_00).operator->();
        local_40._8_4_ = pJVar2->Initialize(filename);
        if (local_40.field_8.IsValid() == '\0') {
            field_8.set_max_size(22, 1);
            pJVar2 = (Js5LocalCache*)**this_00;
            local_50 = std::make_unique<Js5NetThread, LockFreeStack<Js5RemoteRequestData>&, Js5LocalCache&>(field_24296,
                                                                                                            *pJVar2);
            field_24312 = local_50;
            field_24304 = 1;
            ((Js5NetThread*)field_24312.operator->())->Initialize(js5RemoteServerInfo, true);
            local_40 = callstack::Callstack();
        } else {
            local_40.m_stackFrames = local_40._8_4_;
        }
        return local_40.m_stackFrames;
    }

    // 0x1002bcb70
    void Js5RemoteLoader::OpenJs5(Js5ArchiveId js5ArchiveId, bool arg2, bool arg3, bool arg4, bool arg5, Error* error) {
        Js5LocalCache* this_00;
        uint8_t local_40[8];
        Js5RemoteLoader_vtbl* local_38;
        uint32_t local_30;
        uint8_t local_28[4];
        bool local_22[2];
        Js5ArchiveId local_20;

        bool local_24 = arg2;
        bool local_23 = arg3;
        local_22[0] = arg4;
        local_22[1] = arg5;
        local_20[0] = js5ArchiveId;
        if (field_24321 == '\0') {
            if (arg5) {
                if ((int)js5ArchiveId <= (int)field_24336) {
                    LogAssert("js5Id > m_highestNonOptionalArchiveID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                              "js5/Js5RemoteLoader.cpp",
                              91, "Optional archives must have IDs greater than all non-optional archives (ID: %d)",
                              (unsigned long)js5ArchiveId);
                }
                if ((int)js5ArchiveId < (int)field_24340) {
                    field_24340 = js5ArchiveId;
                }
            } else {
                if ((int)field_24340 <= (int)js5ArchiveId) {
                    LogAssert("js5Id < m_lowestOptionalArchiveID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                              "js5/Js5RemoteLoader.cpp",
                              99, "Non-optional archives must have IDs lower than all optional archives (ID: %d)",
                              (unsigned long)js5ArchiveId);
                }
                if ((int)field_24336 < (int)js5ArchiveId) {
                    field_24336 = js5ArchiveId;
                }
            }
            this_00 = (Js5LocalCache*)field_24328.operator->();
            local_28 = (uint8_t[4])this_00->InitializeArchive(local_20[0]);
            if (error != nullptr) {
                error->m_code = (int)local_28;
            }
            if (local_28->IsValid() == '\0') {
                make_shared<Js5RemoteLoader::Js5Remote, Js5RemoteLoader&, Js5ArchiveId&, bool&, bool&, bool&, bool&>(
                    (Js5RemoteLoader*)&local_38, (Js5ArchiveId*)this, &local_20, &local_24, &local_23, local_22);
                ((shared_ptr<Js5>*)field_8[(unsigned long)local_20[0]])->operator=(&local_38);
                if (field_24320 == '\0') {
                    field_24320 = '\x01';
                    local_40._0_4_ = 255;
                    local_40._4_4_ = 255;
                    local_30 = 0;
                    local_38 = (Js5RemoteLoader_vtbl*)&DAT_00000001;
                    QueueGroupKey(*local_40, local_38);
                }
            }
        } else if (error != nullptr) {
            new (error) std::__cxx_atomic_base_impl(22);
        }
        field_8[(unsigned long)local_20[0]];
    }

    // 0x1002bce00
    void Js5RemoteLoader::ConsumeResults() {
        uint8_t* js5RequestKey;
        unsigned int uVar1;
        Js5RemoteRequestData* js5RemoteRequestData;
        uint64_t uVar3;
        long lVar4;
        ReturnValue local_68;
        ReturnValue local_60;
        uint8_t* local_58;
        unique_ptr<Js5LocalCache>* local_50;
        unsigned int local_38;
        unsigned int local_34;

        js5RemoteRequestData = (Js5RemoteRequestData*)field_24296.TakeStack();
        hashtable<Js5RequestKey, eastl::pair<Js5RequestKey const, Js5RemoteRequestData>,
                  eastl::fixed_hashtable_allocator<601ul, 96ul, 200ul, 8ul, 0ul, false>,
                  eastl::use_first<eastl::pair<Js5RequestKey const, Js5RemoteRequestData>>,
                  eastl::equal_to<Js5RequestKey>, eastl::hash<Js5RequestKey>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* local_48 =
            (hashtable<Js5RequestKey, eastl::pair<Js5RequestKey const, Js5RemoteRequestData>,
                       eastl::fixed_hashtable_allocator<601ul, 96ul, 200ul, 8ul, 0ul, false>,
                       eastl::use_first<eastl::pair<Js5RequestKey const, Js5RemoteRequestData>>,
                       eastl::equal_to<Js5RequestKey>, eastl::hash<Js5RequestKey>, eastl::mod_range_hashing,
                       eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)&field_96;
        if (js5RemoteRequestData == nullptr) {
            local_38 = 0;
            local_34 = 0;
        } else {
            js5RequestKey = field_32;
            local_50 = (unique_ptr<Js5LocalCache>*)&field_24328;
            local_34 = 0;
            local_38 = 0;
            local_58 = js5RequestKey;
            do {
                if (*(int*)(js5RemoteRequestData->field_28 + 4) == 3) {
                    uVar3 = js5RemoteRequestData->field_28->IsValid();
                    if ((char)uVar3 == '\0') {
                        local_34 = local_34 & 255;
                        if ((local_38 & 1) == 0) {
                            local_34 = 1;
                        }
                    } else {
                        local_38 = (unsigned int)(((uint64_t)((int64_t)((unsigned long)uVar3 >> 8)) << 8) | (uint8_t)1);
                        local_34 = 0;
                    }
                } else {
                    local_60 = eastl::list_map<Js5RequestKey, Js5RequestParameters>::find(*js5RequestKey);
                    local_68 = js5RequestKey->end();
                    if (local_60 != local_68) {
                        lVar4 = *local_60;
                        uVar1 = *(unsigned int*)(lVar4 + 8);
                        lVar4 = *local_60;
                        *(unsigned int*)(lVar4 + 8) = uVar1 & 4294967039;
                        lVar4 = *local_60;
                        *(uint32_t*)&js5RemoteRequestData->field_16 = *(uint32_t*)(lVar4 + 8);
                        if (!(js5RemoteRequestData->field_28->IsValid())) {
                            OnDataRetrieved(
                                this, js5RemoteRequestData,
                                (list_map_iterator<eastl::pair<Js5RequestKey const, Js5RequestParameters>,
                                                   eastl::pair<Js5RequestKey const, Js5RequestParameters>*,
                                                   eastl::pair<Js5RequestKey const, Js5RequestParameters>&>*)&local_60);
                            if (*(int*)(js5RemoteRequestData->field_28 + 4) == 1) {
                                field_24322 = 1;
                            }
                        } else if (*(int*)(js5RemoteRequestData->field_28 + 4) == 2) {
                            ((Js5LocalCache*)(*local_50).operator->())
                                ->InvalidateFromMainThread(js5RemoteRequestData->field_8);
                        }
                        local_48->erase(js5RemoteRequestData->field_8);
                    }
                }
                js5RemoteRequestData = (Js5RemoteRequestData*)js5RemoteRequestData->HeapBeginPtr();
            } while (js5RemoteRequestData != nullptr);
        }
        if ((local_34 & 1) == 0) {
            if (((local_38 & 1) != 0) && (lVar4 = local_48->size(), lVar4 != 0)) {
                field_24304 = 0;
                ((Js5NetThread*)field_24312.operator->())->SetWantConnection(true);
            }
        } else {
            field_24304 = 2;
        }
    }

    // 0x1002bd010
    void Js5RemoteLoader::OnDataRetrieved(
        Js5RemoteRequestData& js5RemoteRequestData,
        eastl::list_map_iterator<eastl::pair<Js5RequestKey const, Js5RequestParameters>,
                                 eastl::pair<Js5RequestKey const, Js5RequestParameters>*,
                                 eastl::pair<Js5RequestKey const, Js5RequestParameters>&> const& list_map_iterator) {
        int iVar3;
        PacketJ<Array<unsigned char> _>* pPVar4;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        Js5ForLoader* this_01;
        list_map_iterator<eastl::pair<Js5RequestKey const, Js5RequestParameters>,
                          eastl::pair<Js5RequestKey const, Js5RequestParameters> const*,
                          eastl::pair<Js5RequestKey const, Js5RequestParameters> const&>* local_38;

        auto local_40 = field_32->end();
        bool cVar2 = list_map_iterator != local_40;
        if (cVar2) {
            new (&local_38) eastl::ListIterator(list_map_iterator);
            local_40 = field_32->erase(local_38);
        }
        Js5ArchiveId JVar1 = *(Js5ArchiveId*)&js5RemoteRequestData.field_8;
        Js5ArchiveId js5ArchiveId = JVar1;
        if (JVar1 == 255) {
            js5ArchiveId = *(Js5ArchiveId*)((long)&js5RemoteRequestData.field_8 + 4);
        }
        if (js5ArchiveId == 255) {
            pPVar4 = (PacketJ<Array<unsigned char> _>*)*(*((js5RemoteRequestData.field_28 + 12)));
            OnMetaIndexRetrieved(*pPVar4);
        } else {
            iVar3 = field_8.end();
            if ((int)js5ArchiveId < iVar3) {
                this_00 = &field_8[(unsigned long)js5ArchiveId];
                this_01 = (Js5ForLoader*)this_00->end();
                if (this_01 != nullptr) {
                    if (JVar1 == 255) {
                        pPVar4 = (PacketJ<Array<unsigned char> _>*)*(*((js5RemoteRequestData.field_28 + 12)));
                        cVar2 = this_01->LoadIndex(*pPVar4);
                        if ((cVar2) && (*(char*)&this_01[1]._vptr != '\0')) {
                            PrefetchFile(js5ArchiveId);
                        }
                    } else if ((*(uint8_t*)&js5RemoteRequestData.field_16 & 1) != 0) {
                        this_01->SetGroupData(*(Js5GroupId*)((long)&js5RemoteRequestData.field_8 + 4),
                                              *((js5RemoteRequestData.field_28 + 12)));
                    }
                    ((js5RemoteRequestData.field_28 + 12))->reset();
                }
            }
        }
    }

    // 0x1002bd210
    void Js5RemoteLoader::OnMetaIndexRetrieved(PacketJ<Array<unsigned char>>& packetJ) {
        uint32_t uVar4;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        unsigned long uVar5;
        unsigned long uVar6;
        shared_ptr<Js5>* psVar7;
        Js5* pJVar8;
        unsigned long arg1;
        unsigned int uVar9;
        uint32_t local_44;
        uint32_t local_40;
        int local_34;

        field_24321 = '\x01';
        uint8_t* this_00 = &field_8;
        int iVar3 = this_00->end();
        if (0 < iVar3) {
            uVar9 = 0;
            arg1 = 0;
            do {
                midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)(*this_00)[arg1];
                if (*midiPlayerMainThread != nullptr) {
                    packetJ.SetPos((unsigned long)uVar9 | 5);
                    uVar5 = packetJ.size();
                    uVar6 = packetJ.GetTextureAtlas();
                    if (uVar5 < uVar6) {
                        uVar4 = packetJ.g4();
                        local_40 = packetJ.g4();
                        local_34 = (int)arg1;
                        local_44 = uVar4;
                        QueueGroupKey(255, 1);
                    } else {
                        psVar7 = (shared_ptr<Js5>*)(*this_00)[arg1];
                        pJVar8 = (Js5*)(*psVar7).operator->();
                        if (pJVar8->IsOptional() == '\0') {
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "oldscape/jagex3/js5/Js5RemoteLoader.cpp",
                                            287, "Fatal error - No index CRC received for non-optional archive");
                        }
                        psVar7 = (shared_ptr<Js5>*)(*this_00)[arg1];
                        pJVar8 = (Js5*)(*psVar7).operator->();
                        pJVar8->LoadEmpty();
                    }
                }
                arg1 = arg1 + 1;
                iVar3 = this_00->end();
                uVar9 = uVar9 + 8;
            } while ((long)arg1 < (long)iVar3);
        }
    }

    // 0x1002bd360
    void Js5RemoteLoader::RequestCacheDirectoryPermissions(const Filename& filename) {}

    // 0x1002bd370
    void Js5RemoteLoader::SendNewRequests() {
        unsigned int uVar1;
        uint64_t uVar2;
        bool cVar3;
        long lVar5;
        unsigned long* puVar6;
        shared_ptr<Js5>* this_00;
        Js5LocalCache* this_02;
        uint8_t* puVar7;
        Js5NetThread* pJVar8;
        bool bVar9;
        ReturnValue local_e8;
        ListIterator<shared_ptr<rs2lib::worldmap::MapElement>, shared_ptr<rs2lib::worldmap::MapElement> const*,
                     shared_ptr<rs2lib::worldmap::MapElement> const&>
            local_c8[8];
        Array<shared_ptr<Js5>>* local_c0;
        unique_ptr<Js5LocalCache>* local_b8;
        uint8_t local_90[8];
        Js5RemoteRequestData local_88;

        auto local_b0 = field_32->begin();
        auto local_d0 = field_32->end();
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* local_98 =
            (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                       eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                       eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                       eastl::prime_rehash_policy, false, true, true>*)&field_96;
        unique_ptr<Js5NetThread>* local_a0 = (unique_ptr<Js5NetThread>*)&field_24312;
        unsigned long uVar4 = local_98->size();
        if (uVar4 < 200) {
            local_c0 = (Array<shared_ptr<Js5>>*)&field_8;
            local_b8 = (unique_ptr<Js5LocalCache>*)&field_24328;
            bVar9 = false;
            do {
                cVar3 = local_b0 != local_d0;
                if (!cVar3)
                    break;
                lVar5 = *local_b0;
                uVar1 = *(unsigned int*)(lVar5 + 8);
                uVar2 = *(uint64_t*)(lVar5 + 12);
                puVar6 = (unsigned long*)*local_b0;
                local_90 = (uint8_t[8]) * puVar6;
                new (local_c8) eastl::ListIterator(&local_b0);
                local_88++;
                if ((uVar1 & 256) == 0) {
                    if (((unsigned long)local_90 & 4294967295) == 255) {
                        if (local_90._4_4_ == 255 || field_24321 != '\0') {
                        LAB_1002bd514:
                            local_88.field_64 = 0;
                            local_88.field_72 = 0;
                            local_88.field_76 = 0;
                            local_88.field_77 = 0;
                            local_88.field_78 = 0;
                            local_88.field_79 = 0;
                            local_88._48_8_ = 0;
                            local_88.field_56 = 0;
                            local_88.field_28._4_8_ = 0;
                            local_88.field_28[12] = 0;
                            local_88.field_28[13] = 0;
                            local_88.field_28[14] = 0;
                            local_88.field_28[15] = 0;
                            local_88._44_4_ = 0;
                            local_88.field_16 = 0;
                            local_88._24_4_ = 0;
                            local_88.field_28[0] = 0;
                            local_88.field_28[1] = 0;
                            local_88.field_28[2] = 0;
                            local_88.field_28[3] = 0;
                            local_88.field_0 = 0;
                            local_88.field_8 = 0;
                            local_88 = Js5RemoteRequestData();
                            eastl::hashtable<Js5RequestKey, eastl::pair<Js5RequestKey const, Js5RemoteRequestData>,
                                             eastl::fixed_hashtable_allocator<601ul, 96ul, 200ul, 8ul, 0ul, false>,
                                             eastl::use_first<eastl::pair<Js5RequestKey const, Js5RemoteRequestData>>,
                                             eastl::equal_to<Js5RequestKey>, eastl::hash<Js5RequestKey>,
                                             eastl::mod_range_hashing, eastl::default_ranged_hash,
                                             eastl::prime_rehash_policy, false, true, true>::
                                emplace<Js5RequestKey const&, Js5RemoteRequestData>(
                                    &local_e8,
                                    (hashtable<Js5RequestKey, eastl::pair<Js5RequestKey const, Js5RemoteRequestData>,
                                               eastl::fixed_hashtable_allocator<601ul, 96ul, 200ul, 8ul, 0ul, false>,
                                               eastl::use_first<eastl::pair<Js5RequestKey const, Js5RemoteRequestData>>,
                                               eastl::equal_to<Js5RequestKey>, eastl::hash<Js5RequestKey>,
                                               eastl::mod_range_hashing, eastl::default_ranged_hash,
                                               eastl::prime_rehash_policy, false, true, true>*)local_98,
                                    (Js5RequestKey*)local_90, &local_88);
                            lVar5 = local_e8.HeapBeginPtr();
                            *(uint8_t(*)[8])(lVar5 + 16) = local_90;
                            *(unsigned int*)(lVar5 + 24) = uVar1;
                            *(uint64_t*)(lVar5 + 28) = uVar2;
                            make_shared<PacketJ<Array<unsigned char>>>((ReturnValue*)&local_88);
                            (*((lVar5 + 48))) = local_88;
                            *(uint64_t*)(lVar5 + 72) = 0;
                            *(uint64_t*)(lVar5 + 80) = 0;
                            if ((uVar1 & 1) == 0) {
                                this_02 = (Js5LocalCache*)(*local_b8).operator->();
                                puVar7 = (uint8_t*)this_02->EnqueueRequestFromMainThread((lVar5 + 8));
                            } else {
                                puVar7 = DataStatus::MISSING;
                            }
                            if (puVar7 == DataStatus::READY) {
                                LogAssert("fetchStatus != DataStatus::READY",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "oldscape/jagex3/js5/Js5RemoteLoader.cpp",
                                          356, nullptr);
                            }
                            if (puVar7 == DataStatus::NOTLOADED) {
                            LAB_1002bd648:
                                lVar5 = **local_c8;
                                uVar1 = *(unsigned int*)(lVar5 + 8);
                                lVar5 = **local_c8;
                                *(unsigned int*)(lVar5 + 8) = uVar1 | 256;
                                this = this;
                            } else if (field_24304 == 0) {
                                bVar9 = true;
                                this = this;
                            } else {
                                if (field_24304 == 2) {
                                    pJVar8 = (Js5NetThread*)(*local_a0).operator->();
                                    pJVar8->RequestGroup((lVar5 + 8));
                                    goto LAB_1002bd648;
                                }
                                local_98->erase(*local_90);
                                this = this;
                            }
                        }
                    } else {
                        this_00 = (shared_ptr<Js5>*)(*local_c0)[(unsigned long)local_90 & 4294967295];
                        cVar3 = ((Js5*)(*this_00).operator->())->GetIndexIsReady();
                        if (cVar3)
                            goto LAB_1002bd514;
                    }
                } else if (field_24304 == 0) {
                    bVar9 = true;
                }
                uVar4 = local_98->size();
            } while (uVar4 < 200);
        } else {
            bVar9 = false;
        }
        if (bVar9) {
            field_24304 = 1;
            pJVar8 = (Js5NetThread*)(*local_a0).operator->();
            pJVar8->SetWantConnection(true);
        }
    }

    // 0x1002bd780
    void Js5RemoteLoader::MainLogic() {
        auto pJVar1 = field_24328.operator->();
        pJVar1->MainLogic();
        ConsumeResults();
        SendNewRequests();
        if ((field_32->empty() != '\0') && (field_24322 != 0)) {
            pJVar1 = (Js5LocalCache*)field_24328.operator->();
            field_24322 = pJVar1->QueueFlushToDisk() ^ 1;
        }
    }

    // 0x1002bd7f0
    void Js5RemoteLoader::Shutdown() {
        void* in_RSI;

        uint8_t* js5NetThread = &field_24312;
        if (js5NetThread != in_RSI) {
            ((Js5NetThread*)(*js5NetThread).operator->())->EndAndJoin();
        }
        if (js5NetThread != in_RSI) {
            ((Js5LocalCache*)field_24328.operator->())->EndAndJoin();
        }
    }

    // 0x1002bd860
    uint64_t Js5RemoteLoader::GetGroupLoadPercentage(Js5ArchiveId js5ArchiveId, Js5GroupId js5GroupId) const {
        Js5GroupId local_24;

        int iVar1 = field_8.end();
        uint64_t uVar2 = 0;
        if (((int)js5ArchiveId < iVar1) && (js5GroupId != 4294967295)) {
            local_24 = js5GroupId;
            uVar2 = GetDownloadPercentage(js5ArchiveId);
        }
        return uVar2;
    }

    // 0x1002bd8b0
    unsigned long Js5RemoteLoader::GetDownloadPercentage(const Js5RequestKey& js5RequestKey) const {
        unsigned int uVar1;
        long lVar3;
        obj_iterator local_30;
        eastl local_20;

        &local_20 = (eastl[16])field_96.find(js5RequestKey);
        &local_30 = (obj_iterator[16])field_96.end();
        if (local_20 != local_30 != '\0') {
            lVar3 = local_20.HeapBeginPtr();
            uVar1 = *(unsigned int*)(lVar3 + 68);
            if (uVar1 != 0) {
                lVar3 = local_20.HeapBeginPtr();
                if (uVar1 != 0) {
                    return (unsigned long)(unsigned int)(*(int*)(lVar3 + 64) * 100) / (unsigned long)uVar1;
                }
            }
        }
        return 0;
    }

    // 0x1002bd930
    uint64_t Js5RemoteLoader::GetGroupCountInCache(Js5ArchiveId js5ArchiveId) const {
        return 4294967295;
    }

    // 0x1002bd9d0
    uint64_t Js5RemoteLoader::GetIndexPercentage(Js5ArchiveId js5ArchiveId) const {
        int local_24;

        unsigned long uVar1 = field_8.end();
        uint64_t uVar2 = 0;
        if (js5ArchiveId < uVar1) {
            local_24 = -1;
            uVar2 = GetDownloadPercentage(js5ArchiveId);
        }
        return uVar2;
    }

    // 0x1002bda20
    uint8_t* Js5RemoteLoader::BlockingFetch(const Js5RequestKey& js5RequestKey,
                                            const Js5RequestParameters& js5RequestParameters) {
        ReturnValue local_88;
        uint8_t local_78[32];

        new (local_78) Js5RemoteRequestData();
        local_78._8_4_ = js5RequestKey.field_0;
        local_78._12_4_ = js5RequestKey.field_4;
        local_78._16_8_ = *(uint64_t*)js5RequestParameters;
        local_78._24_4_ = *(uint32_t*)(js5RequestParameters + 8);
        uint32_t local_58 = 2;
        local_88.XPlotBlender<int>(0);
        local_78._28_4_ = local_88[0]._0_4_;
        make_shared<PacketJ<Array<unsigned char>>>(&local_88);
        shared_ptr<PacketJ<Array<unsigned char>>> local_50 = local_88;
        auto this_00 = field_24328.operator->();
        auto puVar1 = this_00->BlockingFetchFromMainThread(local_78);
        if (puVar1 == DataStatus::READY) {
            local_88 = field_32->end();
            OnDataRetrieved(*local_78, local_88);
        }
        return puVar1;
    }

    // 0x1002e0d60: Js5RemoteLoader::Js5Remote::~Js5Remote() has the same machine code as Js5Loader::Js5ForLoader::~Js5ForLoader()

} // namespace jag::oldscape::jagex3

namespace jag {
    // 0x1002bcd30
    shared_ptr_if_not_array<oldscape::jagex3::Js5RemoteLoader::Js5Remote>::type
    make_shared<oldscape::jagex3::Js5RemoteLoader::Js5Remote, oldscape::jagex3::Js5RemoteLoader&,
                oldscape::jagex3::Js5ArchiveId&, bool&, bool&, bool&, bool&>(
        oldscape::jagex3::Js5RemoteLoader& js5RemoteLoader, oldscape::jagex3::Js5ArchiveId& js5ArchiveId, bool& arg3,
        bool& arg4, bool& arg5, bool& arg6) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        bool* in_stack_00000008;
        int local_44;
        Js5Remote* local_40[2];

        auto arg1 = aligned_alloc(136, 8);
        if (arg1 == nullptr) {
            new (js5RemoteLoader) shared_ptr();
        } else {
            local_40[0] =
                placement_new<oldscape::jagex3::Js5RemoteLoader::Js5Remote, oldscape::jagex3::Js5RemoteLoader&,
                              oldscape::jagex3::Js5ArchiveId&, bool&, bool&, bool&, bool&>(
                    (void*)((long)arg1 + 32), (Js5RemoteLoader*)js5ArchiveId, (Js5ArchiveId*)arg3, arg4, arg5, arg6,
                    in_stack_00000008);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::jagex3::Js5RemoteLoader::Js5Remote>, int,
                              oldscape::jagex3::Js5RemoteLoader::Js5Remote*&>(arg1, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (js5RemoteLoader) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return js5RemoteLoader;
    }

} // namespace jag
