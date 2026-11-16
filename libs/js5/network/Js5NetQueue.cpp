// libs/js5/network/Js5NetQueue.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.js5

#include "Js5NetQueue.h"

namespace jag {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Js5NetQueue::TidyupConnection();

    // 0x1009f2300, 304 bytes, base-object constructor, placed by class name and debug map
    // Js5NetQueue::Js5NetQueue()
    void Js5NetQueue::Js5NetQueue() {
        _func_decltype_nullptr* in_RSI;

        new (this) eastl::vector_map<int, Js5NetQueueRequest, eastl::less<int>, eastl::allocator,
                                     eastl::vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator>>();
        new (&field_40) eastl::vector_map<int, Js5NetQueueRequest, eastl::less<int>, eastl::allocator,
                                          eastl::vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator>>();
        new (field_80, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_96 = 0;
        new (field_104, 10) PacketT<Array<unsigned char, eastl::allocator>>();
        new (field_136, 5) PacketT<Array<unsigned char, eastl::allocator>>();
        new (field_168, 5) PacketT<Array<unsigned char, eastl::allocator>>();
        field_200 = 0;
        field_204 = -1;
        field_208 = (vector_map<int, Js5NetQueueRequest, eastl::less<int>, eastl::allocator,
                                eastl::vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator>>*)0;
        field_216 = 0;
        reserve(500);
        (&field_40, 500)->reserve();
    }

    // 0x1009f2480, 16 bytes, complete-object constructor, placed by class name and debug map
    // Js5NetQueue::Js5NetQueue(): jumps straight to the base-object constructor

    // 0x1009f2490, 384 bytes, placed by class name and debug map
    // Js5NetQueue::ProvideConnection(shared_ptr<ClientStream>&, bool)
    void Js5NetQueue::ProvideConnection(shared_ptr* param_1, bool param_2) {
        undefined1* this_00;
        undefined1* this_01;
        int iVar1;
        ClientStream* pCVar3;
        long lVar4;
        long lVar5;
        undefined3 in_register_00000011;
        SystemTimer* this_02;

        this_00 = field_80;
        this_02 = (SystemTimer*)this_00;
        shared_ptr<ClientStream>::operator=((shared_ptr<ClientStream>*)this_00, param_1);
        field_96 = SystemTimer::GetTimeMS<std::chrono::steady_clock>(this_02);
        this_01 = field_104;
        this_01->SetPos(0);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)this_01, 6);
        PacketT<Array<unsigned char, eastl::allocator>>::p3<unsigned int>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)this_01, 5);
        iVar1 = game::Version::GetClientVersion();
        PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)this_01, iVar1);
        pCVar3 = (ClientStream*)shared_ptr<ClientStream>::operator->((shared_ptr<ClientStream>*)this_00);
        pCVar3->Write(this_01);
        this_01->SetPos(0);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)this_01,
            (ulong)(CONCAT31(in_register_00000011, param_2) ^ 3));
        pCVar3 = (ClientStream*)shared_ptr<ClientStream>::operator->((shared_ptr<ClientStream>*)this_00);
        pCVar3->Write(this_01);
        pCVar3 = (ClientStream*)shared_ptr<ClientStream>::operator->((shared_ptr<ClientStream>*)this_00);
        pCVar3->Flush();
        (field_136, 0)->SetPos();
        (field_168, 0)->SetPos();
        field_204 = -1;
        field_208 = (vector_map<int, Js5NetQueueRequest, eastl::less<int>, eastl::allocator,
                                eastl::vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator>>*)0;
        lVar4 = HeapBeginPtr();
        lVar5 = end();
        for (; lVar4 != lVar5; lVar4 = lVar4 + 160) {
            ((lVar4 + 16))->ResetDataPacket();
            ((lVar4 + 16))->SetUseAsyncOptimisedPath(false);
        }
        lVar4 = (&field_40)->HeapBeginPtr();
        lVar5 = (&field_40)->end();
        for (; lVar4 != lVar5; lVar4 = lVar4 + 160) {
            ((lVar4 + 16))->ResetDataPacket();
            ((lVar4 + 16))->SetUseAsyncOptimisedPath(false);
        }
    }

    // 0x1009f2740, 128 bytes, placed by class name and debug map
    // Js5NetQueue::RequestServerDrop()
    void Js5NetQueue::RequestServerDrop() {
        ClientStream* this_00;
        VBOMapper local_38;

        new (&local_38) PacketT<Array<unsigned char, eastl::allocator>>(6);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)&local_38, 7);
        PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)&local_38, 0);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)&local_38, 0);
        this_00 = (ClientStream*)shared_ptr<ClientStream>::operator->((shared_ptr<ClientStream>*)field_80);
        this_00->Write((PacketT*)&local_38);
        local_38.~VBOMapper();
    }

    // 0x1009f27c0, 544 bytes, placed by class name and debug map
    // Js5NetQueue::RequestData(unsigned int, unsigned int, unsigned int, bool, std::function<void (unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator> >&, PacketT<Array<unsigned char, eastl::allocator> >&&, bool)>, PacketT<Array<unsigned char, eastl::allocator> >&&, Priority const*)
    /* Js5NetQueue::RequestData(unsigned int, unsigned int, unsigned int, bool, std::function<void
   (unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator> >&,
   PacketT<Array<unsigned char, eastl::allocator> >&&, bool)>,
   PacketT<Array<unsigned char, eastl::allocator> >&&, Priority const*) */

    undefined8 Js5NetQueue::RequestData(uint param_1, uint param_2, uint param_3, int param_5, function* param_6,
                                        PacketT* param_7, Priority* param_8) {
        LoginManager* this_00;
        uint uVar1;
        char cVar2;
        pair* ppVar3;
        pair* ppVar4;
        long lVar5;
        long lVar6;
        Js5NetQueueRequest* this_01;
        bool bVar7;
        undefined1* puVar8;
        int local_48;
        int local_44;
        char local_31;

        if (param_5 == 0) {
            cVar2 = IsPrefetchQueueFull(this);
            if (cVar2 != '\0') {
                return 0;
            }
            local_44 = Js5NetQueueRequest::GetKey(param_1, param_2);
            lVar5 = find(&local_44);
            lVar6 = end();
            if (lVar5 != lVar6) {
                return 1;
            }
            puVar8 = &field_40;
            ppVar3 = (pair*)puVar8->find(&local_44);
            ppVar4 = (pair*)puVar8->end();
            if (ppVar3 != ppVar4) {
                local_31 = ((ppVar3 + 16))->IsRequested();
                if (local_31 != '\0') {
                    return 1;
                }
                uVar1 = *(uint*)(param_8 + 8);
                lVar5 = ((ppVar3 + 16))->GetAuthWrapper();
                if (*(uint*)(lVar5 + 8) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("priority->id < old.GetPriority()->id",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/network/"
                              "Js5NetQueue.cpp",
                              163, "RequestData received same request");
                }
                puVar8->erase(ppVar3);
                if (local_31 != '\0') {
                    return 1;
                }
            }
            this_01 = (Js5NetQueueRequest*)
                eastl::vector_map<int, Js5NetQueueRequest, eastl::less<int>, eastl::allocator,
                                  eastl::vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator>>::
                operator[]((vector_map<int, Js5NetQueueRequest, eastl::less<int>, eastl::allocator,
                                       eastl::vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator>>*)puVar8,
                           &local_44);
            bVar7 = false;
        } else {
            cVar2 = IsUrgentQueueFull(this);
            if (cVar2 != '\0') {
                return 0;
            }
            local_48 = Js5NetQueueRequest::GetKey(param_1, param_2);
            ppVar3 = (pair*)find(&local_48);
            ppVar4 = (pair*)end();
            if (ppVar3 != ppVar4) {
                this_00 = (LoginManager*)(ppVar3 + 16);
                cVar2 = this_00->IsRequested();
                if (cVar2 != '\0') {
                    return 1;
                }
                uVar1 = *(uint*)(param_8 + 8);
                lVar5 = this_00->GetAuthWrapper();
                if ((*(uint*)(lVar5 + 8) <= uVar1) && (cVar2 = this_00->IsValid(), cVar2 != '\0')) {
                    return 1;
                }
                erase(ppVar3);
            }
            puVar8 = &field_40;
            lVar5 = puVar8->find(&local_48);
            lVar6 = puVar8->end();
            if (lVar5 != lVar6) {
                cVar2 = ((ppVar3 + 16))->IsRequested();
                if (cVar2 != '\0') {
                    return 1;
                }
                puVar8->erase(ppVar3);
            }
            this_01 = (Js5NetQueueRequest*)
                eastl::vector_map<int, Js5NetQueueRequest, eastl::less<int>, eastl::allocator,
                                  eastl::vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator>>::
                operator[]((vector_map<int, Js5NetQueueRequest, eastl::less<int>, eastl::allocator,
                                       eastl::vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator>>*)this,
                           &local_48);
            bVar7 = true;
        }
        Js5NetQueueRequest::Js5NetQueueRequest(this_01, param_1, param_2, param_3, bVar7, param_6, param_7, param_8);
        return 1;
    }

    // 0x1009f2b80, 64 bytes, placed by class name and debug map
    // Js5NetQueue::RecordCRCFailure()
    void Js5NetQueue::RecordCRCFailure() {
        ClientStream* this_00;

        field_216 = field_216 + 1;
        this_00 = (ClientStream*)shared_ptr<ClientStream>::operator->((shared_ptr<ClientStream>*)field_80);
        this_00->Close();
        shared_ptr<ClientStream>::reset();
    }

    // 0x1009f2c40, 112 bytes, placed by class name and debug map
    // Js5NetQueue::SendPendingRequests(eastl::vector_map<int, Js5NetQueueRequest, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator> >&)
    void Js5NetQueue::SendPendingRequests(vector_map* param_1) {
        long lVar2;
        long lVar3;

        lVar3 = param_1->HeapBeginPtr();
        lVar2 = param_1->end();
        for (; lVar3 != lVar2; lVar3 = lVar3 + 160) {
            if (((lVar3 + 16))->IsRequested() == '\0') {
                SendRequest(this, (Js5NetQueueRequest*)(lVar3 + 16));
            }
        }
    }

    // 0x1009f2cb0, 224 bytes, placed by class name and debug map
    // Js5NetQueue::SendRequest(Js5NetQueueRequest&)
    void Js5NetQueue::SendRequest(Js5NetQueueRequest* param_1) {
        undefined1* this_00;
        byte bVar2;
        int iVar3;
        uint uVar4;
        long lVar5;
        ClientStream* this_01;

        if (param_1->IsRequested() == '\0') {
            iVar3 = param_1->GetX();
            if (-1 < iVar3) {
                iVar3 = param_1->GetZ();
                if (-1 < iVar3) {
                    bVar2 = param_1->IsValid();
                    this_00 = field_104;
                    this_00->SetPos(0);
                    lVar5 = param_1->GetAuthWrapper();
                    PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                        (PacketT<Array<unsigned char, eastl::allocator>>*)this_00,
                        (ulong)((*(uint*)(lVar5 + 8) & 15) << 4 | (uint)bVar2));
                    uVar4 = param_1->GetX();
                    PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                        (PacketT<Array<unsigned char, eastl::allocator>>*)this_00, (ulong)uVar4);
                    iVar3 = param_1->GetZ();
                    PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
                        (PacketT<Array<unsigned char, eastl::allocator>>*)this_00, iVar3);
                    this_01 = (ClientStream*)shared_ptr<ClientStream>::operator->((shared_ptr<ClientStream>*)field_80);
                    this_01->Write(this_00);
                    param_1->SetUseAsyncOptimisedPath(true);
                    return;
                }
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("!toSend.IsRequested() && toSend.GetArchiveID() >= 0 && toSend.GetGroupID() >= 0",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/network/Js5NetQueue.cpp",
                  452, (char*)0);
    }

    // 0x1009f2d90, 1968 bytes, placed by class name and debug map
    // Js5NetQueue::Service()
    bool Js5NetQueue::Service() {
        undefined1* this_00;
        int* piVar1;
        vector_map<int, Js5NetQueueRequest, eastl::less<int>, eastl::allocator,
                   eastl::vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator>>* this_01;
        Js5NetQueue* this_02;
        bool bVar2;
        byte bVar3;
        char cVar4;
        uint uVar5;
        int iVar6;
        int iVar7;
        ClientStream* pCVar8;
        ulong uVar9;
        long lVar10;
        long lVar11;
        TextureAtlasReference* this_03;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar12;
        PacketT* pPVar13;
        PacketT<Array<unsigned char, eastl::allocator>>* pPVar14;
        undefined8 uVar15;
        undefined8 uVar16;
        Minimap* pMVar17;
        ulong uVar18;
        ulong uVar19;
        Js5NetQueueRequest* this_04;
        char* in_stack_ffffffffffffff28;
        undefined4 uVar20;
        undefined8 in_stack_ffffffffffffff38;
        PacketT<Array<unsigned char, eastl::allocator>> local_b0[32];
        ulonglong local_90;
        int* local_88;
        vector_map<int, Js5NetQueueRequest, eastl::less<int>, eastl::allocator,
                   eastl::vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator>>* local_80;
        int local_78;
        uint local_74;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* local_70;
        shared_ptr<ClientStream>* local_68;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* local_60;
        shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> local_58[16];
        Js5NetQueue* local_48;
        Minimap* local_40;
        uint local_34;

        local_90 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this);
        if ((30000 < local_90) && (field_96 < local_90 - 30000)) {
            bVar2 = operator!=((shared_ptr*)field_80, (_func_decltype_nullptr*)0);
            if (bVar2) {
                pCVar8 = (ClientStream*)shared_ptr<ClientStream>::operator->((shared_ptr<ClientStream>*)field_80);
                pCVar8->Close();
                shared_ptr<ClientStream>::reset();
            }
        }
        this_00 = field_80;
        bVar2 = this_00->operator_cast_to_bool();
        if (bVar2) {
            SendPendingRequests(this, (vector_map*)this);
            local_80 = (vector_map<int, Js5NetQueueRequest, eastl::less<int>, eastl::allocator,
                                   eastl::vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator>>*)&field_40;
            SendPendingRequests(this, (vector_map*)local_80);
            pCVar8 = (ClientStream*)shared_ptr<ClientStream>::operator->((shared_ptr<ClientStream>*)this_00);
            pCVar8->Flush();
            local_88 = &field_204;
            local_70 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                  eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                  eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)field_168;
            local_60 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                  eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                  eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)field_136;
            local_78 = 500;
            local_68 = (shared_ptr<ClientStream>*)this_00;
            local_48 = this;
            do {
                pCVar8 = (ClientStream*)shared_ptr<ClientStream>::operator->(local_68);
                uVar9 = pCVar8->GetAvailable();
                phVar12 = local_60;
                iVar6 = 2;
                if (uVar9 != 0) {
                    field_96 = local_90;
                    if (field_204 == -1) {
                        lVar10 =
                            eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                             eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                             eastl::equal_to<long long>, eastl::hash<long long>,
                                             eastl::mod_range_hashing, eastl::default_ranged_hash,
                                             eastl::prime_rehash_policy, false, true, true>::size(local_60);
                        uVar18 = 5U - lVar10;
                        if (uVar9 < 5U - lVar10) {
                            uVar18 = uVar9;
                        }
                        pCVar8 = (ClientStream*)shared_ptr<ClientStream>::operator->(local_68);
                        ClientStream::Read<PacketT<Array<unsigned char, eastl::allocator>>>(pCVar8, (PacketT*)phVar12,
                                                                                            uVar18);
                        uVar9 =
                            eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                             eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                             eastl::equal_to<long long>, eastl::hash<long long>,
                                             eastl::mod_range_hashing, eastl::default_ranged_hash,
                                             eastl::prime_rehash_policy, false, true, true>::size(phVar12);
                        iVar6 = 4;
                        if (uVar9 < 5) {
                        } else {
                            phVar12->SetPos(0);
                            bVar3 = phVar12->g1();
                            uVar5 = phVar12->g4();
                            local_34 = uVar5 & 2147483647;
                            local_40 = (Minimap*)CONCAT44(local_40._4_4_, (uint)bVar3);
                            iVar7 = Js5NetQueueRequest::GetKey((uint)bVar3, local_34);
                            this_02 = local_48;
                            this_01 = local_80;
                            piVar1 = local_88;
                            *local_88 = iVar7;
                            local_74 = uVar5;
                            if ((int)uVar5 < 0) {
                                lVar10 = eastl::vector_map<int, Js5NetQueueRequest, eastl::less<int>, eastl::allocator,
                                                           eastl::vector<eastl::pair<int, Js5NetQueueRequest>,
                                                                         eastl::allocator>>::find(local_80, local_88);
                                lVar11 = this_01->end();
                                if (lVar10 == lVar11)
                                    goto LAB_1009f3427;
                                this_04 = (Js5NetQueueRequest*)(lVar10 + 16);
                                cVar4 = this_04->IsRequested();
                                if (cVar4 == '\0') {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("found->second.IsRequested()",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "js5/network/Js5NetQueue.cpp",
                                              280, (char*)0);
                                }
                                local_48->field_208 = local_80;
                            } else {
                                lVar10 = local_48->find(local_88);
                                lVar11 = this_02->end();
                                if (lVar10 == lVar11) {
                                LAB_1009f3427:
                                    *piVar1 = -1;
                                    this_04 = (Js5NetQueueRequest*)0;
                                } else {
                                    this_04 = (Js5NetQueueRequest*)(lVar10 + 16);
                                    cVar4 = this_04->IsRequested();
                                    if (cVar4 == '\0') {
                                        /* WARNING: Subroutine does not return */
                                        LogAssert("found->second.IsRequested()",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/js5/network/Js5NetQueue.cpp",
                                                  294, (char*)0);
                                    }
                                    local_48->field_208 =
                                        (vector_map<
                                            int, Js5NetQueueRequest, eastl::less<int>, eastl::allocator,
                                            eastl::vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator>>*)
                                            local_48;
                                }
                            }
                            uVar20 = (undefined4)((ulong)in_stack_ffffffffffffff38 >> 32);
                            if (this_04 == (Js5NetQueueRequest*)0) {
                                uVar15 = logger::default_logger();
                                in_stack_ffffffffffffff28 = "PREFETCH";
                                if (-1 < (int)local_74) {
                                    in_stack_ffffffffffffff28 = "URGENT";
                                }
                                local_b0->ToStringPos();
                                uVar16 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                in_stack_ffffffffffffff38 = CONCAT44(uVar20, local_34);
                                logger::Logger::Log(
                                    uVar15, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/network/"
                                    "Js5NetQueue.cpp",
                                    307, "Js5NetQueue: Couldn\'t find matching %s Js5 request: %d, %d : Buffer = %s",
                                    in_stack_ffffffffffffff28, (int)local_40, in_stack_ffffffffffffff38, uVar16);
                                local_b0->~basic_string();
                                pCVar8 = (ClientStream*)shared_ptr<ClientStream>::operator->(local_68);
                                pCVar8->Close();
                                local_48->field_208 =
                                    (vector_map<
                                        int, Js5NetQueueRequest, eastl::less<int>, eastl::allocator,
                                        eastl::vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator>>*)0;
                                iVar6 = 1;
                                this = local_48;
                            } else {
                                iVar7 = this_04->GetX();
                                if ((iVar7 != (int)local_40) ||
                                    (uVar5 = this_04->GetZ(), this = local_48, uVar5 != local_34)) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("inProgressReply->GetArchiveID() == archiveID && "
                                              "inProgressReply->GetGroupID() == groupID",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "js5/network/Js5NetQueue.cpp",
                                              314, (char*)0);
                                }
                                local_48->field_200 = 5;
                                local_60->SetPos(0);
                                local_70->SetPos(0);
                            }
                        }
                    } else {
                        lVar10 = eastl::vector_map<
                            int, Js5NetQueueRequest, eastl::less<int>, eastl::allocator,
                            eastl::vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator>>::find(field_208,
                                                                                                         local_88);
                        lVar11 = field_208->end();
                        if (lVar10 == lVar11) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("found != m_inProgressReplyMap->end()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                      "network/Js5NetQueue.cpp",
                                      329, (char*)0);
                        }
                        pMVar17 = (Minimap*)(lVar10 + 16);
                        local_58->GetDataPacket();
                        bVar2 = local_58->operator_cast_to_bool();
                        local_40 = pMVar17;
                        if (bVar2) {
                            this_03 =
                                (TextureAtlasReference*)
                                    shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(local_58);
                            lVar10 = this_03->GetTextureAtlas();
                            uVar5 = pMVar17->GetLevel();
                            uVar18 = (ulong)(102400 - local_48->field_200);
                            if (102400 < local_48->field_200) {
                                uVar18 = 0;
                            }
                            phVar12 =
                                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                           eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                           eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                           eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                                    shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(local_58);
                            uVar19 = lVar10 - (ulong)uVar5;
                            lVar10 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>,
                                                      eastl::allocator,
                                                      eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                                      eastl::equal_to<long long>, eastl::hash<long long>,
                                                      eastl::mod_range_hashing, eastl::default_ranged_hash,
                                                      eastl::prime_rehash_policy, false, true, true>::size(phVar12);
                            if (uVar19 - lVar10 < uVar18) {
                                phVar12 =
                                    (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                               eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                               eastl::equal_to<long long>, eastl::hash<long long>,
                                               eastl::mod_range_hashing, eastl::default_ranged_hash,
                                               eastl::prime_rehash_policy, false, true, true>*)
                                        shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                            local_58);
                                lVar10 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>,
                                                          eastl::allocator,
                                                          eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                                          eastl::equal_to<long long>, eastl::hash<long long>,
                                                          eastl::mod_range_hashing, eastl::default_ranged_hash,
                                                          eastl::prime_rehash_policy, false, true, true>::size(phVar12);
                                uVar18 = uVar19 - lVar10;
                            }
                            if (uVar9 < uVar18) {
                                uVar18 = uVar9;
                            }
                            phVar12 =
                                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                           eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                           eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                           eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                                    shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(local_58);
                            eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                             eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                             eastl::equal_to<long long>, eastl::hash<long long>,
                                             eastl::mod_range_hashing, eastl::default_ranged_hash,
                                             eastl::prime_rehash_policy, false, true, true>::size(phVar12);
                            pCVar8 = (ClientStream*)shared_ptr<ClientStream>::operator->(local_68);
                            this = local_48;
                            pPVar13 = (PacketT*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                local_58);
                            uVar9 = ClientStream::Read<PacketT<Array<unsigned char, eastl::allocator>>>(pCVar8, pPVar13,
                                                                                                        uVar18);
                            field_200 = field_200 + (int)uVar9;
                            phVar12 =
                                (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                           eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                           eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                           eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                                    shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(local_58);
                            iVar6 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>,
                                                     eastl::allocator,
                                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                                     eastl::equal_to<long long>, eastl::hash<long long>,
                                                     eastl::mod_range_hashing, eastl::default_ranged_hash,
                                                     eastl::prime_rehash_policy, false, true, true>::size(phVar12);
                            if ((ulong)(long)iVar6 < uVar19) {
                                iVar6 = 4;
                                if (102399 < field_200) {
                                    field_200 = 0;
                                    field_204 = -1;
                                    field_208 =
                                        (vector_map<
                                            int, Js5NetQueueRequest, eastl::less<int>, eastl::allocator,
                                            eastl::vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator>>*)0;
                                }
                            } else {
                                iVar6 = 4;
                                FileComplete((Js5NetQueueRequest*)this, (ulong)local_40);
                            }
                        } else {
                            lVar10 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>,
                                                      eastl::allocator,
                                                      eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                                      eastl::equal_to<long long>, eastl::hash<long long>,
                                                      eastl::mod_range_hashing, eastl::default_ranged_hash,
                                                      eastl::prime_rehash_policy, false, true, true>::size(local_70);
                            uVar18 = 5U - lVar10;
                            if (uVar9 < 5U - lVar10) {
                                uVar18 = uVar9;
                            }
                            if (uVar18 != 0) {
                                pCVar8 = (ClientStream*)shared_ptr<ClientStream>::operator->(local_68);
                                phVar12 = local_70;
                                ClientStream::Read<PacketT<Array<unsigned char, eastl::allocator>>>(
                                    pCVar8, (PacketT*)local_70, uVar18);
                                uVar9 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>,
                                                         eastl::allocator,
                                                         eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                                         eastl::equal_to<long long>, eastl::hash<long long>,
                                                         eastl::mod_range_hashing, eastl::default_ranged_hash,
                                                         eastl::prime_rehash_policy, false, true, true>::size(phVar12);
                                iVar6 = 4;
                                if (uVar9 < 5)
                                    goto LAB_1009f32e0;
                            }
                            phVar12 = local_70;
                            local_70->SetPos(0);
                            bVar3 = phVar12->g1();
                            iVar6 = phVar12->g4s();
                            pMVar17 = local_40;
                            uVar20 = (undefined4)((ulong)in_stack_ffffffffffffff28 >> 32);
                            local_34 = (uint)bVar3;
                            if ((iVar6 < 0) || (3 < bVar3)) {
                                uVar15 = logger::default_logger();
                                local_b0->ToStringPos();
                                in_stack_ffffffffffffff38 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                in_stack_ffffffffffffff28 = (char*)CONCAT44(uVar20, iVar6);
                                logger::Logger::Log(
                                    uVar15, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/network/"
                                    "Js5NetQueue.cpp",
                                    362,
                                    "Js5NetQueue: Bad decode asked for %d bytes (compression %u). HeaderBuffer: %s",
                                    in_stack_ffffffffffffff28, local_34, in_stack_ffffffffffffff38);
                                local_b0->~basic_string();
                                pCVar8 = (ClientStream*)shared_ptr<ClientStream>::operator->(local_68);
                                iVar6 = 1;
                                pCVar8->Close();
                            } else {
                                iVar7 = local_40->GetLevel();
                                pMVar17->CreateDataPacket((ulong)(iVar7 + iVar6 + (uint)(bVar3 != 0) * 4 + 5));
                                local_b0->GetDataPacket();
                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator=(
                                    local_58, (shared_ptr*)local_b0);
                                local_b0->~shared_ptr();
                                pPVar14 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                              shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                                  local_58);
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar14,
                                                                                                   (ulong)local_34);
                                pPVar14 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                              shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                                  local_58);
                                PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(pPVar14, iVar6);
                                if (iVar6 == 0) {
                                    FileComplete((Js5NetQueueRequest*)this, (ulong)local_40);
                                }
                                field_200 = field_200 + 5;
                                iVar6 = 4;
                            }
                        }
                    LAB_1009f32e0:
                        local_58->~shared_ptr();
                    }
                }
                if (iVar6 != 4)
                    goto LAB_1009f34b8;
                local_78 = local_78 + -1;
            } while (local_78 != 0);
            iVar6 = 2;
        LAB_1009f34b8:
            bVar2 = iVar6 == 2;
        } else {
            lVar10 = GetUrgentQueueSize(this);
            if (lVar10 != 0) {
                return false;
            }
            lVar10 = GetPrefetchQueueSize(this);
            bVar2 = lVar10 == 0;
        }
        return bVar2;
    }

    // 0x1009f3780, 176 bytes, placed by class name
    // Js5NetQueue::FileComplete(Js5NetQueueRequest*, unsigned long)
    void Js5NetQueue::FileComplete(Js5NetQueueRequest* param_1, ulong param_2) {
        int iVar1;
        int iVar2;
        pair* ppVar3;
        pair* ppVar4;
        int local_24;

        iVar1 = param_2->GetX();
        iVar2 = param_2->GetZ();
        Js5NetQueueRequest::GetKey(iVar1, iVar2);
        ppVar3 = (pair*)eastl::vector_map<int, Js5NetQueueRequest, eastl::less<int>, eastl::allocator,
                                          eastl::vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator>>::
            find(*(vector_map<int, Js5NetQueueRequest, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator>>**)&param_1[1]
                      .field_79,
                 &local_24);
        ppVar4 = (pair*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
            *(vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>**)&param_1[1].field_79);
        if (ppVar3 == ppVar4) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "found != m_inProgressReplyMap->end()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/network/Js5NetQueue.cpp",
                442, (char*)0);
        }
        param_2->DownloadComplete();
        eastl::vector_map<int, Js5NetQueueRequest, eastl::less<int>, eastl::allocator,
                          eastl::vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator>>::
            erase(*(vector_map<int, Js5NetQueueRequest, eastl::less<int>, eastl::allocator,
                               eastl::vector<eastl::pair<int, Js5NetQueueRequest>, eastl::allocator>>**)&param_1[1]
                       .field_79,
                  ppVar3);
        *(undefined4*)&param_1[1].field_75 = 4294967295;
        *(undefined8*)&param_1[1].field_79 = 0;
    }

} // namespace jag
