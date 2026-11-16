// libs/js5/network/Js5NetQueue.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.js5

#include "Js5NetQueue.h"

namespace jag {
    // 0x100009e70: Js5NetQueue::TidyupConnection() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1009f2300
    Js5NetQueue::Js5NetQueue()
        : eastl::vector_map<int, Js5NetQueueRequest>(), field_96(0), field_104(10), field_136(5), field_168(5),
          field_200(0), field_204(-1) {
        field_208 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)0;
        field_216 = 0;
        reserve(500);
        field_40.reserve(500);
    }

    // 0x1009f2490
    void Js5NetQueue::ProvideConnection(shared_ptr<ClientStream>& clientStream, bool arg2) {
        uint32_t in_register_00000011;

        uint8_t* this_00 = field_80;
        *this_00 = clientStream;
        field_96 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
        uint8_t* this_01 = field_104;
        this_01->SetPos(0);
        this_01->p1<unsigned long>(6);
        this_01->p3<unsigned int>(5);
        unsigned int arg1 = game::Version::GetClientVersion();
        this_01->p4<int>(arg1);
        ClientStream* pCVar2 = (ClientStream*)(*this_00).operator->();
        pCVar2->Write(*this_01);
        this_01->SetPos(0);
        this_01->p1<unsigned long>((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) ^ 3);
        pCVar2 = (ClientStream*)(*this_00).operator->();
        pCVar2->Write(*this_01);
        pCVar2 = (ClientStream*)(*this_00).operator->();
        pCVar2->Flush();
        field_136->SetPos(0);
        field_168->SetPos(0);
        field_204 = -1;
        field_208 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)0;
        long lVar3 = HeapBeginPtr();
        long lVar4 = end();
        for (; lVar3 != lVar4; lVar3 = lVar3 + 160) {
            ((lVar3 + 16))->ResetDataPacket();
            ((lVar3 + 16))->SetUseAsyncOptimisedPath(false);
        }
        lVar3 = field_40.HeapBeginPtr();
        lVar4 = field_40.end();
        for (; lVar3 != lVar4; lVar3 = lVar3 + 160) {
            ((lVar3 + 16))->ResetDataPacket();
            ((lVar3 + 16))->SetUseAsyncOptimisedPath(false);
        }
    }

    // 0x1009f2740
    void Js5NetQueue::RequestServerDrop() {

        VBOMapper local_38(6);
        local_38.p1<unsigned long>(7);
        local_38.p4<int>(0);
        local_38.p1<unsigned long>(0);
        ((ClientStream*)(*field_80).operator->())->Write(local_38);
    }

    // 0x1009f27c0
    uint64_t Js5NetQueue::RequestData(unsigned int arg1, unsigned int arg2, unsigned int arg3, bool arg4,
                                      std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char>>&,
                                                         PacketT<Array<unsigned char>>&&, bool)>
                                          callback,
                                      PacketT<Array<unsigned char>>&& arg6, const Priority* priority) {
        LoginManager* this_00;
        unsigned int uVar1;
        bool cVar2;
        pair<int, Js5NetQueueRequest>* ppVar3;
        pair<int, Js5NetQueueRequest>* ppVar4;
        long lVar5;
        long lVar6;
        Js5NetQueueRequest* this_01;
        bool arg4_00;
        uint64_t in_register_00000081;
        int* piVar7;
        int local_48;
        int local_44;
        char local_31;

        unsigned int local_40 = arg3;
        unsigned int local_3c = arg2;
        unsigned int local_38 = arg1;
        if ((int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4) == 0) {
            cVar2 = IsPrefetchQueueFull();
            if (cVar2) {
                return 0;
            }
            local_44 = Js5NetQueueRequest::GetKey(local_38, arg2);
            lVar5 = eastl::vector_map<int, Js5NetQueueRequest>::find(*this);
            lVar6 = end();
            if (lVar5 != lVar6) {
                return 1;
            }
            piVar7 = &field_40;
            ppVar3 = (pair<int, Js5NetQueueRequest>*)eastl::vector_map<int, Js5NetQueueRequest>::find(*piVar7);
            ppVar4 = (pair<int, Js5NetQueueRequest>*)piVar7->end();
            if (ppVar3 != ppVar4) {
                local_31 = ((ppVar3 + 16))->IsRequested();
                if (local_31 != '\0') {
                    return 1;
                }
                uVar1 = *(unsigned int*)(priority + 8);
                lVar5 = ((ppVar3 + 16))->GetAuthWrapper();
                if (*(unsigned int*)(lVar5 + 8) <= uVar1) {
                    LogAssert("priority->id < old.GetPriority()->id",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/network/"
                              "Js5NetQueue.cpp",
                              163, "RequestData received same request");
                }
                piVar7->erase(ppVar3);
                if (local_31 != '\0') {
                    return 1;
                }
            }
            this_01 = (Js5NetQueueRequest*)(*piVar7)[local_44];
            arg4_00 = false;
        } else {
            cVar2 = IsUrgentQueueFull();
            if (cVar2) {
                return 0;
            }
            local_48 = Js5NetQueueRequest::GetKey(local_38, arg2);
            ppVar3 = (pair<int, Js5NetQueueRequest>*)eastl::vector_map<int, Js5NetQueueRequest>::find(*this);
            ppVar4 = (pair<int, Js5NetQueueRequest>*)end();
            if (ppVar3 != ppVar4) {
                this_00 = (LoginManager*)(ppVar3 + 16);
                cVar2 = this_00->IsRequested();
                if (cVar2) {
                    return 1;
                }
                uVar1 = *(unsigned int*)(priority + 8);
                lVar5 = this_00->GetAuthWrapper();
                if ((*(unsigned int*)(lVar5 + 8) <= uVar1) && (cVar2 = this_00->IsValid(), cVar2)) {
                    return 1;
                }
                erase(ppVar3);
            }
            piVar7 = &field_40;
            lVar5 = eastl::vector_map<int, Js5NetQueueRequest>::find(*piVar7);
            lVar6 = piVar7->end();
            if (lVar5 != lVar6) {
                cVar2 = ((ppVar3 + 16))->IsRequested();
                if (cVar2) {
                    return 1;
                }
                piVar7->erase(ppVar3);
            }
            this_01 = (Js5NetQueueRequest*)(*this)[local_48];
            arg4_00 = true;
        }
        new (this_01) Js5NetQueueRequest(local_38, local_3c, local_40, arg4_00, *callback, arg6, priority);
        return 1;
    }

    // 0x1009f2b80
    void Js5NetQueue::RecordCRCFailure() {
        field_216 = field_216 + 1;
        ((ClientStream*)(*field_80).operator->())->Close();
        field_80->reset();
    }

    // 0x1009f2c40
    void Js5NetQueue::SendPendingRequests(eastl::vector_map<int, Js5NetQueueRequest>& arg1) {
        long lVar3 = arg1.HeapBeginPtr();
        long lVar2 = arg1.end();
        for (; lVar3 != lVar2; lVar3 = lVar3 + 160) {
            if (((lVar3 + 16))->IsRequested() == '\0') {
                SendRequest(*((lVar3 + 16)));
            }
        }
    }

    // 0x1009f2cb0
    void Js5NetQueue::SendRequest(Js5NetQueueRequest& js5NetQueueRequest) {
        uint8_t* this_00;
        uint8_t bVar2;
        int iVar3;
        ID id;
        unsigned int arg1;
        long lVar4;

        if (js5NetQueueRequest.IsRequested() == '\0') {
            iVar3 = js5NetQueueRequest.GetX();
            if (-1 < iVar3) {
                iVar3 = js5NetQueueRequest.GetZ();
                if (-1 < iVar3) {
                    bVar2 = js5NetQueueRequest.IsValid();
                    this_00 = field_104;
                    this_00->SetPos(0);
                    lVar4 = js5NetQueueRequest.GetAuthWrapper();
                    this_00->p1<unsigned long>((*(unsigned int*)(lVar4 + 8) & 15) << 4 | (unsigned int)bVar2);
                    id = js5NetQueueRequest.GetX();
                    this_00->p1<unsigned long>(id);
                    arg1 = js5NetQueueRequest.GetZ();
                    this_00->p4<int>(arg1);
                    ((ClientStream*)(*field_80).operator->())->Write(*this_00);
                    js5NetQueueRequest.SetUseAsyncOptimisedPath(true);
                    return;
                }
            }
        }
        LogAssert("!toSend.IsRequested() && toSend.GetArchiveID() >= 0 && toSend.GetGroupID() >= 0",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/network/Js5NetQueue.cpp",
                  452, nullptr);
    }

    // 0x1009f2d90
    bool Js5NetQueue::Service() {
        uint8_t* puVar1;
        int* piVar2;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        bool bVar3;
        uint8_t bVar5;
        unsigned int uVar6;
        int iVar7;
        ID IVar8;
        int iVar9;
        ClientStream* pCVar10;
        unsigned long uVar11;
        long lVar12;
        long lVar13;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar14;
        PacketT<Array<unsigned char> _>* arg1;
        PacketT<Array<unsigned char>>* pPVar15;
        Logger* pLVar16;
        uint64_t uVar17;
        Minimap* pMVar18;
        unsigned long uVar19;
        unsigned long uVar20;
        Js5NetQueueRequest* this_03;
        char* in_stack_ffffffffffffff28;
        uint32_t uVar21;
        uint64_t in_stack_ffffffffffffff38;
        ReturnValue local_b0;
        int* local_88;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_80;
        int local_78;
        ID local_74;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* local_70;
        shared_ptr<ClientStream>* local_68;
        PacketT<Array<unsigned char>>* local_60;
        shared_ptr local_58;
        Minimap* local_40;
        ID local_34;

        unsigned long long local_90 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
        if ((30000 < local_90) && (field_96 < local_90 - 30000)) {
            puVar1 = field_80;
            bVar3 = *puVar1 != nullptr;
            if (bVar3) {
                pCVar10 = (ClientStream*)(*puVar1).operator->();
                pCVar10->Close();
                puVar1->reset();
            }
        }
        puVar1 = field_80;
        bool cVar4 = puVar1->operator_cast_to_bool();
        if (!cVar4) {
            lVar12 = GetUrgentQueueSize();
            if (lVar12 != 0) {
                return false;
            }
            lVar12 = GetPrefetchQueueSize();
            bVar3 = lVar12 == 0;
        } else {
            SendPendingRequests(*this);
            local_80 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_40;
            SendPendingRequests(*local_80);
            pCVar10 = (ClientStream*)(*puVar1).operator->();
            pCVar10->Flush();
            local_88 = &field_204;
            local_70 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                  eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                  eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)field_168;
            local_60 = (PacketT<Array<unsigned char>>*)field_136;
            local_78 = 500;
            local_68 = (shared_ptr<ClientStream>*)puVar1;
            do {
                pCVar10 = (ClientStream*)(*local_68).operator->();
                uVar11 = pCVar10->GetAvailable();
                pPVar15 = local_60;
                iVar7 = 2;
                if (uVar11 != 0) {
                    field_96 = local_90;
                    if (field_204 == -1) {
                        lVar12 = local_60->size();
                        uVar19 = 5U - lVar12;
                        if (uVar11 < 5U - lVar12) {
                            uVar19 = uVar11;
                        }
                        pCVar10 = (ClientStream*)(*local_68).operator->();
                        pCVar10->Read<PacketT<Array<unsigned char>>>(*pPVar15, uVar19);
                        uVar11 = pPVar15->size();
                        iVar7 = 4;
                        if (uVar11 < 5) {
                        } else {
                            pPVar15->SetPos(0);
                            bVar5 = pPVar15->g1();
                            IVar8 = pPVar15->g4();
                            local_34 = IVar8 & 2147483647;
                            local_40 = (Minimap*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)((unsigned int)bVar5));
                            iVar9 = Js5NetQueueRequest::GetKey((unsigned int)bVar5, local_34);
                            this_00 = local_80;
                            piVar2 = local_88;
                            *local_88 = iVar9;
                            local_74 = IVar8;
                            if ((int)IVar8 < 0) {
                                lVar12 = eastl::vector_map<int, Js5NetQueueRequest>::find(*local_80);
                                lVar13 = this_00->end();
                                if (lVar12 == lVar13)
                                    goto LAB_1009f3427;
                                this_03 = (Js5NetQueueRequest*)(lVar12 + 16);
                                cVar4 = this_03->IsRequested();
                                if (!cVar4) {
                                    LogAssert("found->second.IsRequested()",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "js5/network/Js5NetQueue.cpp",
                                              280, nullptr);
                                }
                                field_208 = local_80;
                                pPVar15 = local_60;
                            } else {
                                lVar12 = eastl::vector_map<int, Js5NetQueueRequest>::find(*this);
                                lVar13 = end();
                                if (lVar12 == lVar13) {
                                LAB_1009f3427:
                                    *piVar2 = -1;
                                    this_03 = nullptr;
                                    pPVar15 = local_60;
                                } else {
                                    this_03 = (Js5NetQueueRequest*)(lVar12 + 16);
                                    cVar4 = this_03->IsRequested();
                                    if (!cVar4) {
                                        LogAssert("found->second.IsRequested()",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/js5/network/Js5NetQueue.cpp",
                                                  294, nullptr);
                                    }
                                    field_208 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this;
                                    pPVar15 = local_60;
                                }
                            }
                            uVar21 = (uint32_t)((unsigned long)in_stack_ffffffffffffff38 >> 32);
                            local_60 = pPVar15;
                            if (this_03 == nullptr) {
                                pLVar16 = logger::default_logger();
                                in_stack_ffffffffffffff28 = "PREFETCH";
                                if (-1 < (int)local_74) {
                                    in_stack_ffffffffffffff28 = "URGENT";
                                }
                                local_b0 = pPVar15->ToStringPos();
                                uVar17 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                in_stack_ffffffffffffff38 = (((uint64_t)uVar21 << 32) | (uint32_t)local_34);
                                pLVar16->Log(
                                    false, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/network/"
                                    "Js5NetQueue.cpp",
                                    307, "Js5NetQueue: Couldn\'t find matching %s Js5 request: %d, %d : Buffer = %s",
                                    in_stack_ffffffffffffff28, (int)local_40, in_stack_ffffffffffffff38, uVar17);
                                pCVar10 = (ClientStream*)(*local_68).operator->();
                                pCVar10->Close();
                                field_208 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)0;
                                iVar7 = 1;
                                this = this;
                            } else {
                                iVar9 = this_03->GetX();
                                if ((iVar9 != (int)local_40) ||
                                    (IVar8 = this_03->GetZ(), this = this, IVar8 != local_34)) {
                                    LogAssert("inProgressReply->GetArchiveID() == archiveID && "
                                              "inProgressReply->GetGroupID() == groupID",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "js5/network/Js5NetQueue.cpp",
                                              314, nullptr);
                                }
                                field_200 = 5;
                                local_60->SetPos(0);
                                local_70->SetPos(0);
                            }
                        }
                    } else {
                        lVar12 = eastl::vector_map<int, Js5NetQueueRequest>::find(*field_208);
                        lVar13 = field_208->end();
                        if (lVar12 == lVar13) {
                            LogAssert("found != m_inProgressReplyMap->end()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                      "network/Js5NetQueue.cpp",
                                      329, nullptr);
                        }
                        pMVar18 = (Minimap*)(lVar12 + 16);
                        local_58 = pMVar18->GetDataPacket();
                        cVar4 = shared_ptr::operator_cast_to_bool(&local_58);
                        local_40 = pMVar18;
                        if (!cVar4) {
                            lVar12 = local_70->size();
                            uVar19 = 5U - lVar12;
                            if (uVar11 < 5U - lVar12) {
                                uVar19 = uVar11;
                            }
                            if (uVar19 != 0) {
                                pCVar10 = (ClientStream*)(*local_68).operator->();
                                phVar14 = local_70;
                                pCVar10->Read<PacketT<Array<unsigned char>>>(*local_70, uVar19);
                                uVar11 = phVar14->size();
                                iVar7 = 4;
                                if (uVar11 < 5)
                                    goto LAB_1009f32e0;
                            }
                            phVar14 = local_70;
                            local_70->SetPos(0);
                            bVar5 = phVar14->g1();
                            uVar6 = phVar14->g4s();
                            pMVar18 = local_40;
                            uVar21 = (uint32_t)((unsigned long)in_stack_ffffffffffffff28 >> 32);
                            local_34 = (ID)bVar5;
                            if (((int)uVar6 < 0) || (3 < bVar5)) {
                                pLVar16 = logger::default_logger();
                                local_b0 = local_70->ToStringPos();
                                in_stack_ffffffffffffff38 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                in_stack_ffffffffffffff28 = (char*)(((uint64_t)uVar21 << 32) | (uint32_t)uVar6);
                                pLVar16->Log(
                                    false, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/network/"
                                    "Js5NetQueue.cpp",
                                    362,
                                    "Js5NetQueue: Bad decode asked for %d bytes (compression %u). HeaderBuffer: %s",
                                    in_stack_ffffffffffffff28, local_34, in_stack_ffffffffffffff38);
                                pCVar10 = (ClientStream*)(*local_68).operator->();
                                iVar7 = 1;
                                pCVar10->Close();
                            } else {
                                iVar7 = local_40->GetLevel();
                                pMVar18->CreateDataPacket(
                                    (unsigned long)(iVar7 + uVar6 + (unsigned int)(bVar5 != 0) * 4 + 5));
                                local_b0 = local_40->GetDataPacket();
                                local_58 = local_b0;
                                pPVar15 = (PacketT<Array<unsigned char>>*)local_58.operator->();
                                pPVar15->p1<unsigned long>(local_34);
                                pPVar15 = (PacketT<Array<unsigned char>>*)local_58.operator->();
                                pPVar15->p4<int>(uVar6);
                                if (uVar6 == 0) {
                                    FileComplete((Js5NetQueueRequest*)this, (unsigned long)local_40);
                                }
                                field_200 = field_200 + 5;
                                iVar7 = 4;
                            }
                        } else {
                            lVar12 = ((TextureAtlasReference*)local_58.operator->())->GetTextureAtlas();
                            uVar6 = pMVar18->GetLevel();
                            uVar19 = (unsigned long)(102400 - field_200);
                            if (102400 < field_200) {
                                uVar19 = 0;
                            }
                            phVar14 =
                                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                           eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                           eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                           eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                                    local_58.operator->();
                            uVar20 = lVar12 - (unsigned long)uVar6;
                            lVar12 = phVar14->size();
                            if (uVar20 - lVar12 < uVar19) {
                                phVar14 =
                                    (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                               eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                               eastl::equal_to<long long>, eastl::hash<long long>,
                                               eastl::mod_range_hashing, eastl::default_ranged_hash,
                                               eastl::prime_rehash_policy, false, true, true>*)local_58.operator->();
                                lVar12 = phVar14->size();
                                uVar19 = uVar20 - lVar12;
                            }
                            if (uVar11 < uVar19) {
                                uVar19 = uVar11;
                            }
                            phVar14 =
                                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                           eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                           eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                           eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                                    local_58.operator->();
                            phVar14->size();
                            pCVar10 = (ClientStream*)(*local_68).operator->();
                            this = this;
                            arg1 = (PacketT<Array<unsigned char> _>*)*local_58;
                            uVar11 = pCVar10->Read<PacketT<Array<unsigned char>>>(*arg1, uVar19);
                            field_200 = field_200 + (int)uVar11;
                            phVar14 =
                                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                           eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                           eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                           eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                                    local_58.operator->();
                            iVar7 = phVar14->size();
                            if ((unsigned long)(long)iVar7 < uVar20) {
                                iVar7 = 4;
                                if (102399 < field_200) {
                                    field_200 = 0;
                                    field_204 = -1;
                                    field_208 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)0;
                                }
                            } else {
                                iVar7 = 4;
                                FileComplete((Js5NetQueueRequest*)this, (unsigned long)local_40);
                            }
                        }
                    LAB_1009f32e0:
                    }
                }
                if (iVar7 != 4)
                    goto LAB_1009f34b8;
                local_78 = local_78 - 1;
            } while (local_78 != 0);
            iVar7 = 2;
        LAB_1009f34b8:
            bVar3 = iVar7 == 2;
        }
        return bVar3;
    }

    // 0x1009f3780
    void Js5NetQueue::FileComplete(Js5NetQueueRequest* js5NetQueueRequest, unsigned long arg2) {
        int arg1 = arg2->GetX();
        int arg2_00 = arg2->GetZ();
        Js5NetQueueRequest::GetKey(arg1, arg2_00);
        pair<int, Js5NetQueueRequest>* arg1_00 =
            (pair<int, Js5NetQueueRequest>*)eastl::vector_map<int, Js5NetQueueRequest>::find(
                *(*(int**)&js5NetQueueRequest[1].field_79));
        pair<int, Js5NetQueueRequest>* ppVar1 =
            (pair<int, Js5NetQueueRequest>*)(*(vector<oldscape::dash3d::EntityHighlight*,
                                                      BucketAllocatorEASTL>**)&js5NetQueueRequest[1]
                                                  .field_79)
                ->end();
        if (arg1_00 == ppVar1) {
            LogAssert(
                "found != m_inProgressReplyMap->end()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/network/Js5NetQueue.cpp",
                442, nullptr);
        }
        arg2->DownloadComplete();
        (*(vector_map<int, Js5NetQueueRequest>**)&js5NetQueueRequest[1].field_79)->erase(arg1_00);
        *(uint32_t*)&js5NetQueueRequest[1].field_75 = 4294967295;
        *(uint64_t*)&js5NetQueueRequest[1].field_79 = 0;
    }

} // namespace jag
